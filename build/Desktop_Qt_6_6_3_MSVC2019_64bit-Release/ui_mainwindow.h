/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"
#include "qledindicator.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QCalendarWidget *calendarWidget;
    QLCDNumber *clcdNumber;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label_3;
    QProgressBar *progressBar;
    QLabel *ntpLabel;
    QLabel *clcdLabel;
    QCustomPlot *widget;
    QLedIndicator *ledIndicator;
    QLedIndicator *ledIndicator_2;
    QPushButton *pushButton_3;
    QLedIndicator *ledIndicator_3;
    QLedIndicator *ledIndicator_4;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QSlider *horizontalSlider;
    QLabel *label_7;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(20, 30, 69, 22));
        comboBox_2 = new QComboBox(centralwidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(120, 30, 69, 22));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 60, 75, 24));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(120, 60, 75, 24));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 48, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 10, 48, 16));
        calendarWidget = new QCalendarWidget(centralwidget);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(500, 40, 272, 190));
        clcdNumber = new QLCDNumber(centralwidget);
        clcdNumber->setObjectName("clcdNumber");
        clcdNumber->setGeometry(QRect(500, 260, 271, 61));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(20, 360, 401, 191));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 399, 189));
        scrollArea->setWidget(scrollAreaWidgetContents);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 330, 81, 16));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(430, 40, 41, 281));
        progressBar->setMaximum(250);
        progressBar->setValue(0);
        progressBar->setOrientation(Qt::Orientation::Vertical);
        ntpLabel = new QLabel(centralwidget);
        ntpLabel->setObjectName("ntpLabel");
        ntpLabel->setGeometry(QRect(20, 110, 141, 31));
        clcdLabel = new QLabel(centralwidget);
        clcdLabel->setObjectName("clcdLabel");
        clcdLabel->setGeometry(QRect(20, 250, 141, 31));
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(430, 360, 351, 191));
        ledIndicator = new QLedIndicator(centralwidget);
        ledIndicator->setObjectName("ledIndicator");
        ledIndicator->setGeometry(QRect(190, 120, 51, 51));
        ledIndicator_2 = new QLedIndicator(centralwidget);
        ledIndicator_2->setObjectName("ledIndicator_2");
        ledIndicator_2->setGeometry(QRect(290, 120, 51, 51));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(220, 60, 75, 24));
        ledIndicator_3 = new QLedIndicator(centralwidget);
        ledIndicator_3->setObjectName("ledIndicator_3");
        ledIndicator_3->setGeometry(QRect(190, 190, 51, 51));
        ledIndicator_4 = new QLedIndicator(centralwidget);
        ledIndicator_4->setObjectName("ledIndicator_4");
        ledIndicator_4->setGeometry(QRect(290, 190, 51, 51));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(430, 20, 48, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(500, 240, 48, 16));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(500, 20, 48, 16));
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(20, 281, 381, 41));
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 180, 91, 16));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(20, 200, 104, 31));
        plainTextEdit->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "9600", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "19200", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "38400", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("MainWindow", "57600", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("MainWindow", "115200", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("MainWindow", "230400", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("MainWindow", "460800", nullptr));
        comboBox_2->setItemText(7, QCoreApplication::translate("MainWindow", "921600", nullptr));

        pushButton->setText(QCoreApplication::translate("MainWindow", "rescan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "connect", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Port", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Baudrate", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "System Log", nullptr));
        ntpLabel->setText(QCoreApplication::translate("MainWindow", "Network status", nullptr));
        clcdLabel->setText(QCoreApplication::translate("MainWindow", "MP3 status", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "disconnect", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Volume", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Time", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Song name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
