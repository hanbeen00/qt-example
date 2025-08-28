#pragma once

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QTextEdit>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();      // Rescan
    void on_pushButton_2_clicked();    // Connect
    void on_pushButton_3_clicked();
    void readSerialData();             // 시리얼 데이터 읽기
    void disconnectSerial();
    void updateVolumeGraph();

private:
    Ui::MainWindow *ui;
    QSerialPort *serial;
    QTextEdit *logTextEdit;            // scrollArea에 넣을 QTextEdit
    QString serialBuffer; // 클래스 멤버로 추가

    QString clcdLabelDefault;
    QString ntpLabelDefault;

    int currentVolume = 0;  // 최신 볼륨 저장
    QTimer *updateTimer;
};
