/*  distribution.h    Creed Jones     Virginia Tech       August 22, 2020
 *  This is the header file for the Distribution class, for the HW1 distribution display project
 *
*/

#ifndef DISTRIBUTION_H
#define DISTRIBUTION_H

#include <QWidget>
#include <QtCharts/QChart>
#include <QtCharts/QLineSeries>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QThread>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <utility>
#include <thread>
#include <mutex>

QT_BEGIN_NAMESPACE
namespace Ui { class Distribution; }
QT_END_NAMESPACE

QT_CHARTS_USE_NAMESPACE

class Distribution : public QWidget
{
    Q_OBJECT
    QThread threadIHaveToMakeForTheSpec_1;
    QThread threadIHaveToMakeForTheSpec_2;

public:
    Distribution(QWidget *parent = nullptr);
    ~Distribution();

    QVector<qreal>* createData(int, QString);

    QVector<qreal> handleRestResults(QVector<qreal>);

    QVector<qreal> handleProcessorResults(QVector<qreal>);

    void doRestQuery();

    void getProcessedData();

private slots:
    void on_unifDistButton_clicked();

    void on_normDistButton_clicked();

    QLineSeries* createCumulative();

    QList<qreal> *getBinMins(QVector<qreal>*, int);
    QList<qreal> *calcHist(QVector<qreal>*, int);

    void on_horizontalSlider_sliderMoved(int position);

    void on_horizontalSlider_sliderReleased();

    void on_checkBox_stateChanged(int arg1);

    void on_horizontalSlider_2_sliderMoved(int position);

    void on_horizontalSlider_2_sliderReleased();

    void on_realTimeDataButton_clicked();

public slots:

    void updateChart();

    void updateChartNoRe(int nbins);

private:
    Ui::Distribution *ui;
    QString mDistType;
    QChart *mChart;
    //keep data as a private variable to avoid re-computation.
    QVector<qreal> *data;
    //keep bin number as a private variable for universal reference.
    QList<qreal> *dataList;
    int binCount = 20;
    int MaximumPoints = 100;
    bool enable_cum = false;
};

class REST_Class : public QObject
{
    Q_OBJECT
public:
    //this function is from code found on stack overflow at
    //https://stackoverflow.com/questions/19822211/qt-parsing-using-qjsondocument-qjsonobject-qjsonarray
    QVector<qreal> unpackJSON(QJsonArray jsonInput)
    {
        QVector<qreal> ret;
        foreach (const QJsonValue & value, jsonInput)
        {
            QJsonObject obj = value.toObject();
            if (obj["value"].toDouble() < 100 && obj["value"].toDouble() > 0)
            {
                ret.append(obj["value"].toDouble());
            }
        }
        if (ret.size() == 0) //empty check
        {
            ret.append(0);
        }
        return ret;
    }

public slots:

    void tryRest(QString hostname)
    {
        QNetworkAccessManager* manager;
        manager = new QNetworkAccessManager();
        QNetworkRequest request;
        request.setRawHeader(QByteArray("token"), "VfmFFPcIgYhVOzBOeYKEjTtnFTRhgdDp");
        connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyFinished(QNetworkReply*)));
        request.setUrl(QUrl(hostname));
        QSslConfiguration config = QSslConfiguration::defaultConfiguration();
        config.setProtocol(QSsl::TlsV1_2);
        request.setSslConfiguration(config);
        request.setHeader(QNetworkRequest::ServerHeader, "application/json");
        manager->get(request);
    }

    void replyFinished(QNetworkReply* reply)
    {
        qDebug() << "REPLY: " << reply->error();
        QString qStrResponse = (QString)reply->readAll();
        QJsonDocument jsonReply = QJsonDocument::fromJson(qStrResponse.toUtf8());
        QJsonArray arr = jsonReply["results"].toArray();

        //extract JSON data, put into QVector and then send
        QVector<qreal> data = unpackJSON(arr);
        for (int i = 0; i < data.length(); i++)
        {
            qDebug() << QString::number((data.at(i)));
        }
        emit resultReady(data);
    }

signals:

    void resultReady(const QVector<qreal> &RestData);

};

class DataProcessor : public QObject
{
    Q_OBJECT
public:

public slots:

    void processData(QVector<qreal> rawData)
    {
        QVector<qreal> processedData;

        emit resultReady(processedData);
    }

signals:

    void resultReady(const QVector<qreal> &FinalRestData);
};

#endif // DISTRIBUTION_H
