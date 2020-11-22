/*  distribution.cpp    Creed Jones     Virginia Tech       August 22, 2020
 *  This is the main implementation file for the HW1 distribution display project
 *  Qt creator, using UI form design
 *  This file does all of the work
 *
*/

#include "distribution.h"
#include "ui_distribution.h"

#include <QWidget>
#include <QtCharts/QChart>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
#include <QDebug>
#include <random>
#include <thread>

Distribution::Distribution(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Distribution)
{
    ui->setupUi(this);
    mDistType = "norm";
    ui->normDistButton->setChecked(1);
    updateChart();

    //HW4 Additions.....

    REST_Class* restyBoi = new REST_Class;
    restyBoi->moveToThread(&threadIHaveToMakeForTheSpec_1);


    //The thread structure requirements on piazza state
    //to do the threading like this......

    DataProcessor* processor = new DataProcessor;
    processor->moveToThread(&threadIHaveToMakeForTheSpec_2);
    //thread 1
    //request and acquire data
    connect(&threadIHaveToMakeForTheSpec_1, &QThread::finished, restyBoi, &QObject::deleteLater);
    connect(this, &Distribution::doRestQuery, restyBoi, &REST_Class::tryRest);
    connect(restyBoi, &REST_Class::resultReady, this, &Distribution::handleRestResults);
    threadIHaveToMakeForTheSpec_1.start();
    //thread 2
    //process the data
    connect(&threadIHaveToMakeForTheSpec_2, &QThread::finished, processor, &QObject::deleteLater);
    connect(this, &Distribution::getProcessedData, processor, &DataProcessor::processData);
    connect(processor, &DataProcessor::resultReady, this, &Distribution::handleProcessorResults);
    threadIHaveToMakeForTheSpec_2.start();

}

Distribution::~Distribution()
{
//    threadIHaveToMakeForTheSpec_1.quit();
//    threadIHaveToMakeForTheSpec_1.wait();

//    threadIHaveToMakeForTheSpec_2.quit();
//    threadIHaveToMakeForTheSpec_2.wait();

    delete ui;
}

QVector<qreal> Distribution::handleRestResults(QVector<qreal>)
{
    QVector<qreal> ret;
    ret.append(0);
    return ret;
}

QVector<qreal> Distribution::handleProcessorResults(QVector<qreal>)
{
    QVector<qreal> ret;
    ret.append(0);
    return ret;
}


void Distribution::on_unifDistButton_clicked()
{
    mDistType = "unif";
    updateChart();
}

void Distribution::on_normDistButton_clicked()
{
    mDistType = "norm";
    updateChart();
}

void callUpdateChart(Distribution& dist)
{
    dist.updateChart();
}


void Distribution::updateChart()
{
    mChart = new QChart();
    int npts = 10000;

// Create a data array and fill it randomly
    data = createData(npts, this->mDistType);

// Compile its histogram
    dataList = calcHist(data, this->binCount);

// Define a bar chart of the histogram
    QBarSet *mainSet = new QBarSet("Data");
    mainSet->append(*dataList);

// the bar chart displays a data series
    QBarSeries *series = new QBarSeries();
    series->append(mainSet);

    //make the cumulative
    QLineSeries *cum = createCumulative();

    //add the cumulative
    if (enable_cum)
            mChart->addSeries(cum);

    // it's part of a QChart for displaying
    mChart->addSeries(series);
    mChart->setTitle("Sample Data Distribution");
    mChart->setAnimationOptions(QChart::SeriesAnimations);

    // set X and Y axes appropriately (max and labels)
    QStringList categories;
    QList<qreal> *binMins = getBinMins(data, this->binCount);
    for (int incr = 0; incr < binCount; incr++)
    {
        //modified this to display ranges
        categories << QString::number(binMins->at(incr))
                          + " to "
                          + QString::number(binMins->at(incr) + (binMins->at(1)-binMins->at(0)));
    }

    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    axisX->setLabelsAngle(270);
    mChart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    int max = *std::max_element(dataList->constBegin(), dataList->constEnd());
    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0,max);
    mChart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    int max2 = cum->at(cum->count()-1).y();
    QValueAxis *axisY2 = new QValueAxis();
    axisY2->setRange(0,max2);
    if(enable_cum)
        mChart->addAxis(axisY2, Qt::AlignRight);
    cum->attachAxis(axisY2);
    cum->attachAxis(axisX);

    // overall chart setup
    mChart->legend()->setVisible(true);
    mChart->legend()->setAlignment(Qt::AlignBottom);
    ui->chartView->setChart(mChart);
    ui->chartView->setRenderHint(QPainter::Antialiasing);
    ui->chartView->update();

    // Clean up memory before returning

    delete dataList;
    delete mainSet;
    delete binMins;
}

void Distribution::updateChartNoRe(int nbins)
{
    mChart = new QChart();

// Compile its histogram
    dataList = calcHist(data, nbins);

// Define a bar chart of the histogram
    QBarSet *mainSet = new QBarSet("Data");
    mainSet->append(*dataList);

// the bar chart displays a data series
    QBarSeries *series = new QBarSeries();
    series->append(mainSet);

//make the cumulative
    QLineSeries *cum = createCumulative();

//add the cumulative
    if (enable_cum)
        mChart->addSeries(cum);

// it's part of a QChart for displaying
    mChart->addSeries(series);
    mChart->setTitle("Sample Data Distribution");
    mChart->setAnimationOptions(QChart::SeriesAnimations);

// set X and Y axes appropriately (max and labels)
    QStringList categories;
    QList<qreal> *binMins = getBinMins(data, nbins);
    for (int incr = 0; incr < binCount; incr++)
    {
        //modified this to display ranges
        categories << QString::number(binMins->at(incr))
                      + " to "
                      + QString::number(binMins->at(incr) + (binMins->at(1)-binMins->at(0)));
    }

    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    axisX->setLabelsAngle(270);
    mChart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    int max = *std::max_element(dataList->constBegin(), dataList->constEnd());
    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0,max);
    mChart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    int max2 = cum->at(cum->count()-1).y();
    QValueAxis *axisY2 = new QValueAxis();
    axisY2->setRange(0,max2);
    if(enable_cum)
        mChart->addAxis(axisY2, Qt::AlignRight);
    cum->attachAxis(axisY2);
    cum->attachAxis(axisX);

// overall chart setup
    mChart->legend()->setVisible(true);
    mChart->legend()->setAlignment(Qt::AlignBottom);
    ui->chartView->setChart(mChart);
    ui->chartView->setRenderHint(QPainter::Antialiasing);
    ui->chartView->update();

// Clean up memory before returning

    delete dataList;
    delete mainSet;
    delete binMins;
}

QLineSeries* Distribution::createCumulative()
{
    QLineSeries *series = new QLineSeries();
    qreal sum = 0;
    QList<qreal>* dataLocal = calcHist(data, binCount);
    for(int i = 0; i < dataLocal->count() - 1; i++)
    {
        QPoint temp;
        temp.setX(i);
        temp.setY(dataLocal->at(i));
        sum += temp.y();
        series->append(temp.x(), sum);
    }
    series->setName("Cumulative");
    return series;
}

QVector<qreal>* Distribution::createData(int num, QString theType){
    QVector<qreal> *dat = new QVector<qreal>;
    std::default_random_engine generator;
    // the distribution type is determined by string input
    if (theType.contains("unif"))
    {
        std::uniform_real_distribution<double> distribution(0, 99.9999);
    // params are arbitrarily chosen
        for (int incr = 0; incr < num; incr++)
            dat->push_front(distribution(generator));
    }
    else if (theType.contains("oth"))
    {
        std::gamma_distribution<double> distribution(5.0, 2.5);
    // params are arbitrarily chosen
        for (int incr = 0; incr < num; incr++)
            dat->push_front(distribution(generator));
    }    
    else	// default behavior is the normal distribution
    {
        std::normal_distribution<double> distribution(10.0, 2.0);
    // params are arbitrarily chosen
        for (int incr = 0; incr < num; incr++)
            dat->push_front(distribution(generator));
    }
    return dat;
}

// calculate the min value in each bin - find data max and min and divide range into nbins equal bits
QList<qreal>* Distribution::getBinMins(QVector<qreal> *data, int bins)
{
    qreal min = *std::min_element(data->constBegin(), data->constEnd());
    qreal max = *std::max_element(data->constBegin(), data->constEnd());
    qreal wid = (max-min)/bins;
    QList<qreal> *binMins = new QList<qreal>;
    for (int b = 0; b < bins; b++)
        binMins->append(min + (b+1)*wid);

    return binMins;
}

// fill a QList with the data counts in each bin
QList<qreal>* Distribution::calcHist(QVector<qreal> *data, int bins)
{
    QVector<int> H(bins, 0);
    QList<qreal> *binMins = getBinMins(data, bins);

    for (int incr = 0; incr < data->size(); incr++)
        for (int b = 0; b < bins; b++)
            if (data->at(incr) <= binMins->at(b))
            {
                H[b]++;
                break;
            }
    QList<qreal> *hist = new QList<qreal>;
    for (int b = 0; b < bins; b++)
        hist->append(H[b]);
    return hist;
}


void Distribution::on_horizontalSlider_sliderMoved(int position)
{
    this->binCount = position;
    ui->NBINS_Label->setText("NBINS = " + QString::number(binCount));
}

void Distribution::on_horizontalSlider_sliderReleased()
{
    //call update chart (no re-compute)
    updateChartNoRe(this->binCount);
}

void Distribution::on_checkBox_stateChanged(int state)
{
    if(state == 2) //checked condition
    {
        enable_cum = true;
        updateChartNoRe(this->binCount);
    }
    else           //unchecked condition
    {
        enable_cum = false;
        updateChartNoRe(this->binCount);
        //undraw the cumulative
    }
}

void Distribution::on_horizontalSlider_2_sliderMoved(int position)
{
    //change the stuff
    MaximumPoints = position;
    ui->Max_P_Label->setText("MAXP = " + QString::number(MaximumPoints));
}

void Distribution::on_horizontalSlider_2_sliderReleased()
{
    //update the chart .... the value should already be set from sliderMoved()
    //do some rest stuff, well if we need to
}

void Distribution::on_realTimeDataButton_clicked()
{
    REST_Class* test = new REST_Class;
    QString urlBase = "https://www.ncdc.noaa.gov/cdo-web/api/v2/data?datasetid=PRECIP_15&stationid=COOP:010008&units=metric&startdate=2012-01-01&enddate=2012-12-31&limit=";
    QString urlFull = urlBase.append(QString::number(MaximumPoints));
    test->tryRest(urlFull);
}
