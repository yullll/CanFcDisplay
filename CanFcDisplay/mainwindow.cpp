#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDateTime"
#include "QDebug"
#include "QDir"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    setWindowTitle("无人机电堆监控");
    setWindowIcon(QIcon(":/img/logo.ico"));
    //串口相关
    serialIsOpen = false;
    foreach(const QSerialPortInfo &info,QSerialPortInfo::availablePorts())
    {
        ui->comboBoxSerial->addItem(info.portName());
    }
    ui->pushButtonSerial->setCheckable(true);
    ui->comboBoxSerial->installEventFilter(this);
    connect(&serial,SIGNAL(readyRead()),this,SLOT(slotrevserialmsg()));
    //新建定时器，用于统计程序运行时间
    tim = new QTimer();
    tim->setInterval(1000);
    run_time_count = 0;
    connect(tim,SIGNAL(timeout()),this,SLOT(runtime_acc()));
    //统计字节数
    ByteCount = 0;
    //新建定时器，用于自动发送串口数据
    powerOnDataSend = 0x00;
    timSend = new QTimer();
    timSend->setInterval(100);
    connect(timSend,SIGNAL(timeout()),this,SLOT(serialSendData()));
    //按钮组
    creatButtonGroup();
    //开关机按钮
    ui->pushButtonPowerOn->setCheckable(true);
    //发送数组初始化
    dataSendByteArray.resize(8);
    for (int i = 0; i < dataSendByteArray.size(); i++)
    {
        dataSendByteArray[i] = 0x00;
    }
    //开关机重复确认
    PowerOnFlag = 3;
    PowerOffFlag = 3;
    //保存数据相关
    FCParameterNewFlag = 0;
    FCStatusNewFlag = 0;

}
//创建按钮组
void MainWindow::creatButtonGroup()
{
    //按钮组
    //电堆欠压状态  UnderVoltage
    ButtonGroupFC1UnderVoltage = new QButtonGroup();
    ButtonGroupFC1UnderVoltage->setExclusive(true);                 //设置这个按钮组为互斥模式
    ButtonGroupFC1UnderVoltage->addButton(ui->FC1UnderVoltage0, 0);
    ButtonGroupFC1UnderVoltage->addButton(ui->FC1UnderVoltage1, 1);
    ButtonGroupFC1UnderVoltage->addButton(ui->FC1UnderVoltage2, 2);
    ButtonGroupFC1UnderVoltage->addButton(ui->FC1UnderVoltageError, 3);

    ButtonGroupFC2UnderVoltage = new QButtonGroup();
    ButtonGroupFC2UnderVoltage->setExclusive(true);
    ButtonGroupFC2UnderVoltage->addButton(ui->FC2UnderVoltage0, 0);
    ButtonGroupFC2UnderVoltage->addButton(ui->FC2UnderVoltage1, 1);
    ButtonGroupFC2UnderVoltage->addButton(ui->FC2UnderVoltage2, 2);
    ButtonGroupFC2UnderVoltage->addButton(ui->FC2UnderVoltageError, 3);

    //电堆高温状态  HighTemperature
    ButtonGroupFC1HighTemperature = new QButtonGroup();
    ButtonGroupFC1HighTemperature->setExclusive(true);
    ButtonGroupFC1HighTemperature->addButton(ui->FC1HighTemperature0, 0);
    ButtonGroupFC1HighTemperature->addButton(ui->FC1HighTemperature1, 1);
    ButtonGroupFC1HighTemperature->addButton(ui->FC1HighTemperature2, 2);
    ButtonGroupFC1HighTemperature->addButton(ui->FC1HighTemperatureError, 3);

    ButtonGroupFC2HighTemperature = new QButtonGroup();
    ButtonGroupFC2HighTemperature->setExclusive(true);
    ButtonGroupFC2HighTemperature->addButton(ui->FC2HighTemperature0, 0);
    ButtonGroupFC2HighTemperature->addButton(ui->FC2HighTemperature1, 1);
    ButtonGroupFC2HighTemperature->addButton(ui->FC2HighTemperature2, 2);
    ButtonGroupFC2HighTemperature->addButton(ui->FC2HighTemperatureError, 3);

    //风扇状态  FanStatus
    ButtonGroupFC1FanStatus = new QButtonGroup();
    ButtonGroupFC1FanStatus->setExclusive(true);
    ButtonGroupFC1FanStatus->addButton(ui->FC1FanStatus0, 0);
    ButtonGroupFC1FanStatus->addButton(ui->FC1FanStatus1, 1);
    ButtonGroupFC1FanStatus->addButton(ui->FC1FanStatusError, 2);

    ButtonGroupFC2FanStatus = new QButtonGroup();
    ButtonGroupFC2FanStatus->setExclusive(true);
    ButtonGroupFC2FanStatus->addButton(ui->FC2FanStatus0, 0);
    ButtonGroupFC2FanStatus->addButton(ui->FC2FanStatus1, 1);
    ButtonGroupFC2FanStatus->addButton(ui->FC2FanStatusError, 2);

    //氢气瓶压力状态  LowPressure
    ButtonGroupFC1LowPressure = new QButtonGroup();
    ButtonGroupFC1LowPressure->setExclusive(true);
    ButtonGroupFC1LowPressure->addButton(ui->FC1LowPressure0, 0);
    ButtonGroupFC1LowPressure->addButton(ui->FC1LowPressure1, 1);
    ButtonGroupFC1LowPressure->addButton(ui->FC1LowPressure2, 2);
    ButtonGroupFC1LowPressure->addButton(ui->FC1LowPressureError, 3);

    ButtonGroupFC2LowPressure = new QButtonGroup();
    ButtonGroupFC2LowPressure->setExclusive(true);
    ButtonGroupFC2LowPressure->addButton(ui->FC2LowPressure0, 0);
    ButtonGroupFC2LowPressure->addButton(ui->FC2LowPressure1, 1);
    ButtonGroupFC2LowPressure->addButton(ui->FC2LowPressure2, 2);
    ButtonGroupFC2LowPressure->addButton(ui->FC2LowPressureError, 3);

    //进气阀状态  InValveStatus
    ButtonGroupFC1InValveStatus = new QButtonGroup();
    ButtonGroupFC1InValveStatus->setExclusive(true);
    ButtonGroupFC1InValveStatus->addButton(ui->FC1InValveStatus0, 0);
    ButtonGroupFC1InValveStatus->addButton(ui->FC1InValveStatus1, 1);
    ButtonGroupFC1InValveStatus->addButton(ui->FC1InValveStatusError, 2);

    ButtonGroupFC2InValveStatus = new QButtonGroup();
    ButtonGroupFC2InValveStatus->setExclusive(true);
    ButtonGroupFC2InValveStatus->addButton(ui->FC2InValveStatus0, 0);
    ButtonGroupFC2InValveStatus->addButton(ui->FC2InValveStatus1, 1);
    ButtonGroupFC2InValveStatus->addButton(ui->FC2InValveStatusError, 2);

    //出气阀状态  InValveStatus
    ButtonGroupFC1OutValveStatus = new QButtonGroup();
    ButtonGroupFC1OutValveStatus->setExclusive(true);
    ButtonGroupFC1OutValveStatus->addButton(ui->FC1OutValveStatus0, 0);
    ButtonGroupFC1OutValveStatus->addButton(ui->FC1OutValveStatus1, 1);
    ButtonGroupFC1OutValveStatus->addButton(ui->FC1OutValveStatusError, 2);

    ButtonGroupFC2OutValveStatus = new QButtonGroup();
    ButtonGroupFC2OutValveStatus->setExclusive(true);
    ButtonGroupFC2OutValveStatus->addButton(ui->FC2OutValveStatus0, 0);
    ButtonGroupFC2OutValveStatus->addButton(ui->FC2OutValveStatus1, 1);
    ButtonGroupFC2OutValveStatus->addButton(ui->FC2OutValveStatusError, 2);

    //氢气泄露状态  HydrogenLeaks
    ButtonGroupFC1HydrogenLeaks = new QButtonGroup();
    ButtonGroupFC1HydrogenLeaks->setExclusive(true);
    ButtonGroupFC1HydrogenLeaks->addButton(ui->FC1HydrogenLeaks0, 0);
    ButtonGroupFC1HydrogenLeaks->addButton(ui->FC1HydrogenLeaks1, 1);
    ButtonGroupFC1HydrogenLeaks->addButton(ui->FC1HydrogenLeaks2, 2);
    ButtonGroupFC1HydrogenLeaks->addButton(ui->FC1HydrogenLeaksError, 3);

    ButtonGroupFC2HydrogenLeaks = new QButtonGroup();
    ButtonGroupFC2HydrogenLeaks->setExclusive(true);
    ButtonGroupFC2HydrogenLeaks->addButton(ui->FC2HydrogenLeaks0, 0);
    ButtonGroupFC2HydrogenLeaks->addButton(ui->FC2HydrogenLeaks1, 1);
    ButtonGroupFC2HydrogenLeaks->addButton(ui->FC2HydrogenLeaks2, 2);
    ButtonGroupFC2HydrogenLeaks->addButton(ui->FC2HydrogenLeaksError, 3);
}
//过滤器
bool MainWindow::eventFilter(QObject* watched, QEvent* event)
{
    if(watched==ui->comboBoxSerial&&event->type()==QEvent::MouseButtonPress)
    {
        ui->comboBoxSerial->clear();
        foreach(const QSerialPortInfo &info,QSerialPortInfo::availablePorts())
        {
            ui->comboBoxSerial->addItem(info.portName());
        }
    }
}
//串口发送数据
void MainWindow::serialSendData()
{
    for (int i = 0; i < dataSendByteArray.size(); i++)
    {
        dataSendByteArray[i] = powerOnDataSend;
    }
//    dataSendByteArray[0] = powerOnDataSend;
//    qDebug()<<"上位机进气阀状态："<<int(powerOnDataSend);
    serial.write(dataSendByteArray);
}
//串口接收数据
void MainWindow::slotrevserialmsg()
{
    static QByteArray msg;
    dataRec data;
    dataFCParameter dataParameter;
    dataFCStatus dataStatus;
    msg.append(serial.readAll());
    ByteCount += msg.count();
    try{
        if(msg.size() >= sizeof(dataRec))
        {
            //可能需要强制类型转换
            if((msg.data()[0]==0x08) && (msg.data()[1]==0x01))
            {
                memcpy(&data,msg.data(),sizeof(dataRec));
                //这个还需要改
                if((msg.data()[2] & 0x03) == 0x01){
                    Reslove_Data_Parameter(data,dataParameter);
                    Refresh_Data_Parameter(dataParameter);
                    FCParameterNewFlag = 1;
                }else if ((msg.data()[2] & 0x03) == 0x02) {
                    Reslove_Data_Status(data,dataStatus);
    //                qDebug()<<"风扇状态："<<dataStatus.FanStatus<<"气瓶氢压低："<<dataStatus.LowPressure<<"低压状态："<<dataStatus.UnderVoltage
    //                       <<"氢气泄露："<<dataStatus.HydrogenLeaks<<"进气阀："<<dataStatus.InValveStatus<<"出气阀："<<dataStatus.OutValveStatus
    //                      <<"高温状态："<<dataStatus.HighTemperature;
                    Refresh_Data_Status(dataStatus);
                    FCStatusNewFlag = 1;
                }
                if((FCParameterNewFlag == 1) && (FCStatusNewFlag == 1) && (dataParameter.FCID == dataStatus.FCID)){
                    SaveDatatoCsv(dataParameter,dataStatus);
                    FCParameterNewFlag = 0;
                    FCStatusNewFlag = 0;
                }
                msg.remove(0,sizeof(dataRec));
            }else {
                msg.remove(0,1);
            }
        }
    }catch (const std::exception &e) {
        qDebug() << "捕获到接收数据异常:" << e.what();
    } catch (...) {
        qDebug() << "捕获到未知异常";
    }
    ui->ByteAcc->setText(QString::number(ByteCount));
}
//处理接收数据(FC参数)
void MainWindow::Reslove_Data_Parameter(dataRec data,dataFCParameter &data1)
{
    #pragma pack(1)//设定为1字节对齐
    union Swap1
    {
        uint8_t a[2];
        unsigned short b;
    };
    #pragma pack(0)//设定为1字节对齐
    Swap1 swap;

    data1.FCID = data.canID3 >> 4;

    swap.a[0] = data.canData1;
    swap.a[1] = data.canData0;
    data1.FCU = swap.b/10.00;

    swap.a[0] = data.canData3;
    swap.a[1] = data.canData2;
    data1.FCI = swap.b/10.00;

    swap.a[0] = data.canData5;
    swap.a[1] = data.canData4;
    data1.FCTemperature1 = swap.b/10.00 - 40;

    swap.a[0] = data.canData7;
    swap.a[1] = data.canData6;
    data1.FCTemperature2 = swap.b/10.00 - 40;
}
//处理接收数据(FC状态)
void MainWindow::Reslove_Data_Status(dataRec data,dataFCStatus &data1)
{
    #pragma pack(1)//设定为1字节对齐
    union Swap
    {
        uint8_t a[2];
        unsigned short b;
    };
    #pragma pack(0)//设定为1字节对齐
    Swap swap;

    data1.FCID = data.canID3 >> 4;

    data1.PWM = data.canData0;

    swap.a[0] = data.canData2;
    swap.a[1] = data.canData1;
    data1.Fan1RPM = swap.b;

    swap.a[0] = data.canData4;
    swap.a[1] = data.canData3;
    data1.Fan2RPM = swap.b;

    data1.InValveStatus = data.canData5 & 0x01;

    data1.OutValveStatus = (data.canData5 >> 1) & 0x01;

    data1.HydrogenLeaks = (data.canData5 >> 2) & 0x03;
    if((data1.HydrogenLeaks == 2) || (data1.HydrogenLeaks == 3)){
        data1.HydrogenLeaks = data1.HydrogenLeaks - 1;
    }

    data1.UnderVoltage = data.canData7 & 0x03;

    data1.HighTemperature = (data.canData7 >> 2) & 0x03;

    data1.FanStatus = (data.canData7 >> 4) & 0x03;

    data1.LowPressure = (data.canData7 >> 7) & 0x03;
}
//刷新电堆参数数据(FC参数)
void MainWindow::Refresh_Data_Parameter(dataFCParameter data)
{
    if(data.FCID == 1){
        ui->fc1_u->setText(QString::number(data.FCU,'f',2));
        ui->fc1_i->setText(QString::number(data.FCI,'f',2));
        ui->fc1_temp1->setText(QString::number(data.FCTemperature1,'f',2));
        ui->fc1_temp2->setText(QString::number(data.FCTemperature2,'f',2));
    }else {
        ui->fc2_u->setText(QString::number(data.FCU,'f',2));
        ui->fc2_i->setText(QString::number(data.FCI,'f',2));
        ui->fc2_temp1->setText(QString::number(data.FCTemperature1,'f',2));
        ui->fc2_temp2->setText(QString::number(data.FCTemperature2,'f',2));
    }
}
//刷新电堆状态(FC状态)
void MainWindow::Refresh_Data_Status(dataFCStatus data)
{
    if(data.FCID == 1){
        ButtonGroupFC1UnderVoltage->button((data.UnderVoltage > 2) ? 3 : data.UnderVoltage)->setChecked(true);
        ButtonGroupFC1HighTemperature->button((data.HighTemperature > 2) ? 3 : data.HighTemperature)->setChecked(true);
        ButtonGroupFC1FanStatus->button((data.FanStatus > 1) ? 2 : data.FanStatus)->setChecked(true);
        ButtonGroupFC1LowPressure->button((data.LowPressure > 2) ? 3 : data.LowPressure)->setChecked(true);
        ButtonGroupFC1InValveStatus->button((data.InValveStatus > 1) ? 2 : data.InValveStatus)->setChecked(true);
        ButtonGroupFC1OutValveStatus->button((data.OutValveStatus > 1) ? 2 : data.OutValveStatus)->setChecked(true);
        ButtonGroupFC1HydrogenLeaks->button((data.HydrogenLeaks > 2) ? 3 : data.HydrogenLeaks)->setChecked(true);
        ui->fc1_PWM->setText(QString::number(data.PWM));
        ui->fc1_fan1RPM->setText(QString::number(data.Fan1RPM));
        ui->fc1_fan2RPM->setText(QString::number(data.Fan2RPM));
    }else {
        ButtonGroupFC2UnderVoltage->button((data.UnderVoltage > 2) ? 3 : data.UnderVoltage)->setChecked(true);
        ButtonGroupFC2HighTemperature->button((data.HighTemperature > 2) ? 3 : data.HighTemperature)->setChecked(true);
        ButtonGroupFC2FanStatus->button((data.FanStatus > 1) ? 2 : data.FanStatus)->setChecked(true);
        ButtonGroupFC2LowPressure->button((data.LowPressure > 2) ? 3 : data.LowPressure)->setChecked(true);
        ButtonGroupFC2InValveStatus->button((data.InValveStatus > 1) ? 2 : data.InValveStatus)->setChecked(true);
        ButtonGroupFC2OutValveStatus->button((data.OutValveStatus > 1) ? 2 : data.OutValveStatus)->setChecked(true);
        ButtonGroupFC2HydrogenLeaks->button((data.HydrogenLeaks > 2) ? 3 : data.HydrogenLeaks)->setChecked(true);
        ui->fc2_PWM->setText(QString::number(data.PWM));
        ui->fc2_fan1RPM->setText(QString::number(data.Fan1RPM));
        ui->fc2_fan2RPM->setText(QString::number(data.Fan2RPM));
    }
}
//串口打开按钮设置
void MainWindow::on_pushButtonSerial_clicked(bool checked)
{
    if(checked==true)
    {
        serial.setPortName(ui->comboBoxSerial->currentText());//设置串口号
        serial.setBaudRate(115200);//设置波特率
        serial.setDataBits(QSerialPort::Data8);//设置串口数据位8
        serial.setParity(QSerialPort::NoParity);//无校验位
        serial.setStopBits(QSerialPort::OneStop);//1位停止位
        serial.setFlowControl(QSerialPort::NoFlowControl);
        if(!serial.open(QIODevice::ReadWrite))
        {
            QMessageBox::critical(nullptr,"提示","串口打开失败");
            if(file_.isOpen())
            {
                file_.close();
            }
            ui->pushButtonSerial->setChecked(false);
        }
        else {
            serialIsOpen = true;
            run_time_count =0;
            ByteCount = 0;
            timSend->start();
            QMessageBox::information(nullptr,"提示","串口打开成功");
            ui->pushButtonSerial->setText("点击关闭");
            QString path;
            path=QApplication::applicationDirPath()+"/SaveData";
            QDir dir(path); //文件路径
            if(!dir.exists()) //判断文件是否存在，不存在则创建
            {
                qDebug() << "no such dir";
                if(dir.mkpath(dir.absolutePath()))
                {
                   qDebug() << "creat dir success:" << dir.absolutePath();
                }
                else
                {
                    qDebug() << "creat dir failed" << dir.absolutePath();
                }
            }
           path=QApplication::applicationDirPath()+"/SaveData/"+QDateTime::currentDateTime().toString("yyyyMMddhhmmss")+".csv";
           file_.setFileName(path);
           if(!file_.open(QIODevice::Append))
           {
               //ReadOnly文件不存在，打开失败
               //WriteOnly文件不存在，会自动创建文件
               //ReadWrite文件不存在，会自动创建文件
               //Append文件不存在，会自动创建文件
               //Truncate文件不存在，打开失败
               //Text文件不存在，打开失败
               //Unbuffered文件不存在，打开失败
               qDebug()<<"文件打开失败";
           }
           QTextStream stream(&file_);
           stream.setCodec(QTextCodec::codecForName("utf-8"));
           stream<<QString(u8"时间,")<<QString(u8"电堆ID,")<<QString(u8"FC电压,")<<QString(u8"FC电流,")<<QString(u8"FC温度1,")<<QString(u8"FC温度2,")
                <<QString(u8"风扇PWM,")<<QString(u8"风扇1转速,")<<QString(u8"风扇2转速,")<<QString(u8"电堆欠压状态,")<<QString(u8"电堆高温状态,")
               <<QString(u8"风扇状态,")<<QString(u8"氢气瓶压力状态,")<<QString(u8"进气阀状态")<<QString(u8"出气阀状态")<<QString(u8"氢气泄露故障")<<endl;

        }
    }else {
        serial.close();
        serialIsOpen = false;
        timSend->stop();
        ui->pushButtonSerial->setText("打开");
        ByteCount = 0;
        if(file_.isOpen())
        {
            file_.close();
        }
     }
}
//开机按钮设置
void MainWindow::on_pushButtonPowerOn_clicked(bool checked)
{
    if(serialIsOpen==true){
        if(checked==true){
            if(--PowerOnFlag){
                ui->pushButtonPowerOn->setChecked(false);
                QString poweronString = QString("未开机，再点击 %1 次开机").arg(PowerOnFlag);
                ui->pushButtonPowerOn->setText(poweronString);
            }else {
                ui->pushButtonPowerOn->setText("已开机，点击 3 次关机");
                ui->pushButtonPowerOn->setChecked(true);
                powerOnDataSend = 0x01;
                run_time_count = 0;
                PowerOnFlag = 3;
                tim->start();
                QMessageBox::information(nullptr,"提示","开机成功");
            }
        }
        else {
            if(--PowerOffFlag){
                ui->pushButtonPowerOn->setChecked(true);
                QString poweroffString = QString("已开机，再点击 %1 次关机").arg(PowerOffFlag);
                ui->pushButtonPowerOn->setText(poweroffString);
            }else {
                tim->stop();
                run_time_count = 0;
                powerOnDataSend = 0x00;
                ui->pushButtonPowerOn->setText("点击 3 次开机");
                ui->pushButtonPowerOn->setChecked(false);
                PowerOffFlag = 3;
                QMessageBox::information(nullptr,"提示","关机成功");
            }
        }
    }
    else {
        ui->pushButtonPowerOn->setChecked(false);
        QMessageBox::information(nullptr,"提示","开机失败，串口未打开");
    }
}
//保存数据
void MainWindow::SaveDatatoCsv(dataFCParameter dataP,dataFCStatus dataS)
{
    try{
    if(file_.isOpen())
    {
        QTextStream stream(&file_);
        stream.setCodec(QTextCodec::codecForName("utf-8"));
        stream<<QDateTime::currentDateTime().toString("yyyy/MM/dd hh:mm:ss")+",";
        stream<<dataP.FCID<<",";
        stream<<dataP.FCU<<",";
        stream<<dataP.FCI<<",";
        stream<<dataP.FCTemperature1<<",";
        stream<<dataP.FCTemperature2<<",";
        stream<<dataS.PWM<<",";
        stream<<dataS.Fan1RPM<<",";
        stream<<dataS.Fan2RPM<<",";
        stream<<dataS.UnderVoltage<<",";
        stream<<dataS.HighTemperature<<",";
        stream<<dataS.FanStatus<<",";
        stream<<dataS.LowPressure<<",";
        stream<<dataS.InValveStatus<<",";
        stream<<dataS.OutValveStatus<<",";
        stream<<dataS.HydrogenLeaks<<"\n";
    }
    }catch (const std::exception &e) {
        qDebug() << "捕获到文件异常:" << e.what();
    } catch (...) {
        qDebug() << "捕获到未知异常";
    }

}
//定时器计算时间槽函数
void MainWindow::runtime_acc()
{
    run_time_count += 1;
    //将秒数转化为时分秒格式
    uint H = run_time_count / (60*60);
    uint M = (run_time_count- (H * 60 * 60)) / 60;
    uint S = (run_time_count - (H * 60 * 60)) - M * 60;
    QString hour = QString::number(H);
    if (hour.length() == 1) hour = "0" + hour;
    QString min = QString::number(M);
    if (min.length() == 1) min = "0" + min;
    QString sec = QString::number(S);
    if (sec.length() == 1) sec = "0" + sec;
    run_time = hour + ":" + min + ":" + sec;
    ui->runtime->setText(run_time);
}
//16位CRC校验
uint16_t MainWindow::crc16Calc(uint8_t *data, uint8_t len) {
    uint16_t crc_buf, crc16;
    crc16 = 0xFFFF;
    for(int i=0; i< len;i++){
        crc_buf = data[i] & 0x00FF;
        crc16 ^= crc_buf;
        for(int j = 0; j<8; j++){
            if(crc16 & 0x0001){
                crc16 >>=1;
                crc16 ^= 0xA001;
            }else{
                crc16 >>= 1;
            }
        }
    }
    return crc16;
}
//8位CRC校验
uint8_t MainWindow::crc8Calc(uint8_t *data, uint8_t len) {
    uint8_t crc8 = 0x00;
    for (uint8_t byte=0; byte<len;byte++) {
        crc8 ^= data[byte];
        for (int i = 0; i < 8; ++i) {
            if (crc8 & 0x80) {
                crc8 = uint8_t((crc8 << 1) ^ 0x31);
            } else {
                crc8 <<= 1;
            }
        }
    }
    return crc8;
}
//析构函数
MainWindow::~MainWindow()
{
    delete ui;
    delete tim;
    delete timSend;
}
