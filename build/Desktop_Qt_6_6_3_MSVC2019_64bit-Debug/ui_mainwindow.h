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
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
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
        ntpLabel->setGeometry(QRect(30, 110, 141, 31));
        clcdLabel = new QLabel(centralwidget);
        clcdLabel->setObjectName("clcdLabel");
        clcdLabel->setGeometry(QRect(30, 150, 141, 31));
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(430, 350, 351, 201));
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
        label->setText(QCoreApplication::translate("MainWindow", "port", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "baudrate", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "System Log", nullptr));
        ntpLabel->setText(QCoreApplication::translate("MainWindow", "Network status", nullptr));
        clcdLabel->setText(QCoreApplication::translate("MainWindow", "MP3 status", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "disconnect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
