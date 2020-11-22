/********************************************************************************
** Form generated from reading UI file 'distribution.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISTRIBUTION_H
#define UI_DISTRIBUTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>
#include "qchartview.h"

QT_BEGIN_NAMESPACE

class Ui_Distribution
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *distButtons;
    QRadioButton *normDistButton;
    QRadioButton *unifDistButton;
    QRadioButton *realTimeDataButton;
    QChartView *chartView;
    QLabel *label;
    QSlider *horizontalSlider;
    QLabel *NBINS_Label;
    QCheckBox *checkBox;
    QSlider *horizontalSlider_2;
    QLabel *Max_P_Label;
    QLabel *PtsRecv_Label;

    void setupUi(QWidget *Distribution)
    {
        if (Distribution->objectName().isEmpty())
            Distribution->setObjectName(QString::fromUtf8("Distribution"));
        Distribution->resize(800, 548);
        QPalette palette;
        QBrush brush(QColor(0, 85, 127, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 170, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        QBrush brush3(QColor(255, 206, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        QBrush brush4(QColor(120, 120, 120, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        Distribution->setPalette(palette);
        horizontalLayoutWidget = new QWidget(Distribution);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(400, 60, 401, 24));
        distButtons = new QHBoxLayout(horizontalLayoutWidget);
        distButtons->setObjectName(QString::fromUtf8("distButtons"));
        distButtons->setContentsMargins(0, 0, 0, 0);
        normDistButton = new QRadioButton(horizontalLayoutWidget);
        normDistButton->setObjectName(QString::fromUtf8("normDistButton"));
        normDistButton->setMaximumSize(QSize(100, 100));
        QFont font;
        font.setPointSize(10);
        normDistButton->setFont(font);

        distButtons->addWidget(normDistButton);

        unifDistButton = new QRadioButton(horizontalLayoutWidget);
        unifDistButton->setObjectName(QString::fromUtf8("unifDistButton"));
        unifDistButton->setMaximumSize(QSize(100, 100));
        unifDistButton->setFont(font);

        distButtons->addWidget(unifDistButton);

        realTimeDataButton = new QRadioButton(horizontalLayoutWidget);
        realTimeDataButton->setObjectName(QString::fromUtf8("realTimeDataButton"));
        realTimeDataButton->setMaximumSize(QSize(100, 100));
        realTimeDataButton->setFont(font);

        distButtons->addWidget(realTimeDataButton);

        chartView = new QChartView(Distribution);
        chartView->setObjectName(QString::fromUtf8("chartView"));
        chartView->setGeometry(QRect(11, 90, 781, 451));
        label = new QLabel(Distribution);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(510, 10, 281, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Fugaz One"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        horizontalSlider = new QSlider(Distribution);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(80, 60, 160, 16));
        horizontalSlider->setMinimum(4);
        horizontalSlider->setMaximum(100);
        horizontalSlider->setValue(20);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setInvertedAppearance(false);
        NBINS_Label = new QLabel(Distribution);
        NBINS_Label->setObjectName(QString::fromUtf8("NBINS_Label"));
        NBINS_Label->setGeometry(QRect(10, 50, 61, 20));
        checkBox = new QCheckBox(Distribution);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(260, 60, 81, 19));
        horizontalSlider_2 = new QSlider(Distribution);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(80, 20, 160, 16));
        horizontalSlider_2->setMinimum(1);
        horizontalSlider_2->setMaximum(1000);
        horizontalSlider_2->setValue(100);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        horizontalSlider_2->setInvertedAppearance(false);
        Max_P_Label = new QLabel(Distribution);
        Max_P_Label->setObjectName(QString::fromUtf8("Max_P_Label"));
        Max_P_Label->setGeometry(QRect(10, 20, 61, 20));
        PtsRecv_Label = new QLabel(Distribution);
        PtsRecv_Label->setObjectName(QString::fromUtf8("PtsRecv_Label"));
        PtsRecv_Label->setGeometry(QRect(260, 20, 81, 20));

        retranslateUi(Distribution);

        QMetaObject::connectSlotsByName(Distribution);
    } // setupUi

    void retranslateUi(QWidget *Distribution)
    {
        Distribution->setWindowTitle(QApplication::translate("Distribution", "Distribution", nullptr));
        normDistButton->setText(QApplication::translate("Distribution", "normal", nullptr));
        unifDistButton->setText(QApplication::translate("Distribution", "uniform", nullptr));
        realTimeDataButton->setText(QApplication::translate("Distribution", "real-time data", nullptr));
        label->setText(QApplication::translate("Distribution", "ECE4574 FA20 HW4", nullptr));
        NBINS_Label->setText(QApplication::translate("Distribution", "NBINS = 20", nullptr));
        checkBox->setText(QApplication::translate("Distribution", "Cumulative", nullptr));
        Max_P_Label->setText(QApplication::translate("Distribution", "MAXP = 100", nullptr));
        PtsRecv_Label->setText(QApplication::translate("Distribution", "PtsRecv = ---", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Distribution: public Ui_Distribution {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISTRIBUTION_H
