#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QSerialPort"
#include "QSerialPortInfo"
#include "QMessageBox"
#include <QDebug>
#include "QTimer"
#include<QButtonGroup>

namespace Ui {
class MainWindow;
}

struct dataRec
{
    uint8_t canID1;
    uint8_t canID2;
    uint8_t canID3;
    uint8_t canData0;
    uint8_t canData1;
    uint8_t canData2;
    uint8_t canData3;
    uint8_t canData4;
    uint8_t canData5;
    uint8_t canData6;
    uint8_t canData7;
};
struct dataFCParameter
{
    uint8_t FCID;
    double FCU;
    double FCI;
    double FCTemperature1;
    double FCTemperature2;
};
struct dataFCStatus
{
    uint8_t FCID;
    uint8_t PWM;
    uint16_t Fan1RPM;
    uint16_t Fan2RPM;
    uint8_t InValveStatus;
    uint8_t OutValveStatus;
    uint8_t HydrogenLeaks;
    uint8_t UnderVoltage;
    uint8_t HighTemperature;
    uint8_t FanStatus;
    uint8_t LowPressure;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    //私有变量
    bool serialIsOpen;
    uint8_t powerOnDataSend;
    //私有对象
    QTimer *tim;
    QTimer *timSend;
    QSerialPort serial;
    uint run_time_count;
    QString run_time;
    uint16_t CAN_ID;
    unsigned int ByteCount;
    QButtonGroup* ButtonGroupFC1UnderVoltage;
    QButtonGroup* ButtonGroupFC2UnderVoltage;
    QButtonGroup* ButtonGroupFC1HighTemperature;
    QButtonGroup* ButtonGroupFC2HighTemperature;
    QButtonGroup* ButtonGroupFC1FanStatus;
    QButtonGroup* ButtonGroupFC2FanStatus;
    QButtonGroup* ButtonGroupFC1LowPressure;
    QButtonGroup* ButtonGroupFC2LowPressure;
    QButtonGroup* ButtonGroupFC1InValveStatus;
    QButtonGroup* ButtonGroupFC2InValveStatus;
    QButtonGroup* ButtonGroupFC1OutValveStatus;
    QButtonGroup* ButtonGroupFC2OutValveStatus;
    QButtonGroup* ButtonGroupFC1HydrogenLeaks;
    QButtonGroup* ButtonGroupFC2HydrogenLeaks;
    //私有函数
    bool eventFilter(QObject* watched, QEvent* event);
    uint16_t crc16Calc(uint8_t *data, uint8_t len);
    uint8_t crc8Calc(uint8_t *data, uint8_t len);
    void Refresh(dataRec data);
    void Reslove_Data_Parameter(dataRec data, dataFCParameter &data1);
    void Reslove_Data_Status(dataRec data, dataFCStatus &data1);
    void Refresh_Data_Parameter(dataFCParameter data);
    void Refresh_Data_Status(dataFCStatus data);
    void creatButtonGroup();
private slots:
    void on_pushButtonSerial_clicked(bool checked);
    void on_pushButtonPowerOn_clicked(bool checked);
    void slotrevserialmsg();
    void serialSendData();
    void runtime_acc();
};

#endif // MAINWINDOW_H
