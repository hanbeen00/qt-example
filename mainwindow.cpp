#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QSerialPortInfo>
#include <QVBoxLayout>
#include <QScrollBar>
#include <QDate>
#include <QTime>
#include <QRegularExpression>
#include <QTimer>
#include <QDateTime>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // QScrollArea 안에 QTextEdit 생성
    logTextEdit = new QTextEdit;
    logTextEdit->setReadOnly(true);
    QVBoxLayout *layout = new QVBoxLayout(ui->scrollArea->widget());
    layout->addWidget(logTextEdit);

    // 시리얼 포트 초기화
    serial = new QSerialPort(this);
    connect(serial, &QSerialPort::readyRead, this, &MainWindow::readSerialData);

    // 기본 baudrate 설정
    ui->comboBox_2->setCurrentText("115200");

    // LED 색상 설정
    ui->ledIndicator->setOnColor(QColor(255,0,0), QColor(192,0,0));
    ui->ledIndicator->setOffColor(QColor(28,0,0), QColor(128,0,0));

    ui->ledIndicator_2->setOnColor(QColor(255,255,0), QColor(192,192,0));
    ui->ledIndicator_2->setOffColor(QColor(28,28,0), QColor(128,128,0));

    clcdLabelDefault = ui->clcdLabel->text();
    ntpLabelDefault = ui->ntpLabel->text();

    ui->calendarWidget->setEnabled(false);
    ui->ledIndicator->setEnabled(false);
    ui->ledIndicator_2->setEnabled(false);
    ui->ledIndicator_3->setEnabled(false);
    ui->ledIndicator_4->setEnabled(false);

    // QCustomPlot 초기화
    ui->widget->addGraph();
    ui->widget->xAxis->setLabel("Time");
    ui->widget->yAxis->setLabel("Volume");
    ui->widget->yAxis->setRange(0, 250);

    QSharedPointer<QCPAxisTickerDateTime> dateTicker(new QCPAxisTickerDateTime);
    dateTicker->setDateTimeFormat("hh:mm:ss");
    ui->widget->xAxis->setTicker(dateTicker);

    // 0.1초 타이머로 그래프 업데이트
    updateTimer = new QTimer(this);
    connect(updateTimer, &QTimer::timeout, this, &MainWindow::updateVolumeGraph);
    updateTimer->start(10);
}

MainWindow::~MainWindow()
{
    disconnectSerial();
    delete ui;
}

// -----------------------------
// 시리얼 연결/해제
// -----------------------------
void MainWindow::on_pushButton_clicked() // Rescan
{
    ui->comboBox->clear();
    const auto ports = QSerialPortInfo::availablePorts();
    for (const QSerialPortInfo &info : ports) {
        ui->comboBox->addItem(info.portName());
    }
}

void MainWindow::on_pushButton_2_clicked() // Connect
{
    if (serial->isOpen())
        disconnectSerial();

    QString portName = ui->comboBox->currentText();
    qint32 baudRate = ui->comboBox_2->currentText().toInt();

    serial->setPortName(portName);
    serial->setBaudRate(baudRate);

    if (serial->open(QIODevice::ReadWrite)) {
        logTextEdit->append(QString("Connected to %1 at %2 baud").arg(portName).arg(baudRate));
    } else {
        logTextEdit->append(QString("Failed to connect to %1").arg(portName));
    }
}

void MainWindow::on_pushButton_3_clicked() // Disconnect
{
    disconnectSerial();
}

void MainWindow::disconnectSerial()
{
    if (serial->isOpen()) {
        serial->close();
        logTextEdit->append("Serial disconnected");

        ui->ledIndicator->setChecked(false);
        ui->ledIndicator_2->setChecked(false);
        ui->clcdLabel->setText(clcdLabelDefault);
        ui->ntpLabel->setText(ntpLabelDefault);
    }
}

// -----------------------------
// 시리얼 데이터 처리
// -----------------------------
void MainWindow::readSerialData()
{
    serialBuffer += QString::fromUtf8(serial->readAll());

    int index;
    while ((index = serialBuffer.indexOf('\n')) != -1) {
        QString line = serialBuffer.left(index).trimmed();
        serialBuffer.remove(0, index + 1);

        logTextEdit->append(line);

        // TIME Task
        QRegularExpression reTime("\\[TIME Task\\]\\s+(\\d{4}-\\d{2}-\\d{2})\\s+(\\d{2}:\\d{2}:\\d{2})");
        QRegularExpressionMatch matchTime = reTime.match(line);
        if (matchTime.hasMatch()) {
            QString dateStr = matchTime.captured(1);
            QString timeStr = matchTime.captured(2);
            QDate date = QDate::fromString(dateStr, "yyyy-MM-dd");
            if (date.isValid())
                ui->calendarWidget->setSelectedDate(date);

            QTime time = QTime::fromString(timeStr, "hh:mm:ss");
            if (time.isValid()) {
                ui->clcdNumber->setDigitCount(8);
                ui->clcdNumber->setSegmentStyle(QLCDNumber::Flat);
                ui->clcdNumber->display(time.toString("hh:mm:ss"));
            }
        }

        // NTP Task
        QRegularExpression reNtp("\\[NTP Task\\]\\s+(.+)");
        QRegularExpressionMatch matchNtp = reNtp.match(line);
        if (matchNtp.hasMatch()) {
            ui->ntpLabel->setText(matchNtp.captured(1));
        }

        // CLCD Task + MP3 LED
        QRegularExpression reClcd("\\[CLCD Task\\]\\s+(.+)");
        QRegularExpressionMatch matchClcd = reClcd.match(line);
        if (matchClcd.hasMatch()) {
            QString msg = matchClcd.captured(1);
            ui->clcdLabel->setText(msg);

            ui->ledIndicator->setChecked(msg == "MP3 playing");
        }

        // FATFS Task NEXT track LED toggle
        QRegularExpression reFatfs("\\[FATFS Task\\]\\s+NEXT track");
        QRegularExpressionMatch matchFatfs = reFatfs.match(line);
        if (matchFatfs.hasMatch()) {
            ui->ledIndicator_2->setChecked(!ui->ledIndicator_2->isChecked());
        }

        // ADC Task (Volume) - 최신 볼륨 저장
        QRegularExpression reAdc("\\[ADC Task\\]\\s+Volume set to:\\s*(\\d+)");
        QRegularExpressionMatch matchAdc = reAdc.match(line);
        if (matchAdc.hasMatch()) {
            currentVolume = matchAdc.captured(1).toInt();  // 0 ~ 250
        }
    }

    logTextEdit->verticalScrollBar()->setValue(logTextEdit->verticalScrollBar()->maximum());
}

// -----------------------------
// 0.1초마다 그래프 및 ProgressBar 업데이트
// -----------------------------
void MainWindow::updateVolumeGraph()
{
    // 밀리초 단위로 x값
    double key = QDateTime::currentDateTime().toMSecsSinceEpoch() / 1000.0;

    // ProgressBar 업데이트
    ui->progressBar->setValue(currentVolume);

    // 그래프 업데이트
    ui->widget->graph(0)->addData(key, currentVolume);

    // 최근 60초 데이터만 표시
    ui->widget->xAxis->setRange(key - 5, key);
    ui->widget->graph(0)->data()->removeBefore(key - 5);

    ui->widget->replot();
}
