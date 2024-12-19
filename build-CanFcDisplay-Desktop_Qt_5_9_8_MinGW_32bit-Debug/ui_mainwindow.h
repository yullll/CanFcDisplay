/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGroupBox *gridGroupOpen;
    QGridLayout *gridLayout_6;
    QSpacerItem *horizontalSpacer_18;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonPowerOn;
    QLabel *label_31;
    QLineEdit *runtime;
    QGroupBox *gridGroupBox;
    QGridLayout *gridLayout_9;
    QGroupBox *gridGroupFCParameter2;
    QGridLayout *gridLayout_12;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_20;
    QLineEdit *fc2_temp1;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_19;
    QLineEdit *fc2_u;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_22;
    QLineEdit *fc2_i;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_21;
    QLineEdit *fc2_temp2;
    QSpacerItem *horizontalSpacer_12;
    QGroupBox *GroupBoxFCStatus2;
    QGridLayout *gridLayout_10;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_14;
    QRadioButton *FC2UnderVoltage0;
    QRadioButton *FC2UnderVoltage1;
    QRadioButton *FC2UnderVoltage2;
    QRadioButton *FC2UnderVoltageError;
    QSpacerItem *verticalSpacer_9;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_15;
    QRadioButton *FC2HighTemperature0;
    QRadioButton *FC2HighTemperature1;
    QRadioButton *FC2HighTemperature2;
    QRadioButton *FC2HighTemperatureError;
    QSpacerItem *verticalSpacer_10;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_30;
    QRadioButton *FC2LowPressure0;
    QRadioButton *FC2LowPressure1;
    QRadioButton *FC2LowPressure2;
    QRadioButton *FC2LowPressureError;
    QSpacerItem *verticalSpacer_16;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_29;
    QRadioButton *FC2FanStatus0;
    QRadioButton *FC2FanStatus1;
    QRadioButton *FC2FanStatusError;
    QSpacerItem *verticalSpacer_15;
    QSpacerItem *horizontalSpacer_19;
    QGroupBox *GroupBoxFan2;
    QGridLayout *gridLayout_13;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_24;
    QLineEdit *fc2_fan1RPM;
    QSpacerItem *horizontalSpacer_14;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_23;
    QLineEdit *fc2_PWM;
    QSpacerItem *horizontalSpacer_13;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_25;
    QLineEdit *fc2_fan2RPM;
    QSpacerItem *horizontalSpacer_15;
    QGroupBox *GroupBoxValve2;
    QGridLayout *gridLayout_14;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_17;
    QRadioButton *FC2OutValveStatus0;
    QRadioButton *FC2OutValveStatus1;
    QRadioButton *FC2OutValveStatusError;
    QSpacerItem *verticalSpacer_7;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_18;
    QRadioButton *FC2HydrogenLeaks0;
    QRadioButton *FC2HydrogenLeaks1;
    QRadioButton *FC2HydrogenLeaks2;
    QRadioButton *FC2HydrogenLeaksError;
    QSpacerItem *verticalSpacer_8;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_16;
    QRadioButton *FC2InValveStatus0;
    QRadioButton *FC2InValveStatus1;
    QRadioButton *FC2InValveStatusError;
    QSpacerItem *verticalSpacer_6;
    QGroupBox *GroupBoxSeries;
    QGridLayout *gridLayout_4;
    QLabel *label_26;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *comboBoxSerial;
    QPushButton *pushButtonSerial;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *ByteAcc;
    QGroupBox *gridGroupBox1;
    QGridLayout *gridLayout_11;
    QGroupBox *gridGroupFCParameter1;
    QGridLayout *gridLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLineEdit *fc1_u;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLineEdit *fc1_i;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *fc1_temp1;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QLineEdit *fc1_temp2;
    QSpacerItem *horizontalSpacer_7;
    QGroupBox *GroupBoxFan1;
    QGridLayout *gridLayout_8;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QLineEdit *fc1_fan1RPM;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QLineEdit *fc1_PWM;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QLineEdit *fc1_fan2RPM;
    QSpacerItem *horizontalSpacer_8;
    QGroupBox *GroupBoxFCStatus1;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QRadioButton *FC1UnderVoltage0;
    QRadioButton *FC1UnderVoltage1;
    QRadioButton *FC1UnderVoltage2;
    QRadioButton *FC1UnderVoltageError;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QRadioButton *FC1HighTemperature0;
    QRadioButton *FC1HighTemperature1;
    QRadioButton *FC1HighTemperature2;
    QRadioButton *FC1HighTemperatureError;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_27;
    QRadioButton *FC1FanStatus0;
    QRadioButton *FC1FanStatus1;
    QRadioButton *FC1FanStatusError;
    QSpacerItem *verticalSpacer_13;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_28;
    QRadioButton *FC1LowPressure0;
    QRadioButton *FC1LowPressure1;
    QRadioButton *FC1LowPressure2;
    QRadioButton *FC1LowPressureError;
    QSpacerItem *verticalSpacer_14;
    QSpacerItem *horizontalSpacer_17;
    QGroupBox *GroupBoxValve1;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_11;
    QRadioButton *FC1InValveStatus0;
    QRadioButton *FC1InValveStatus1;
    QRadioButton *FC1InValveStatusError;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_13;
    QRadioButton *FC1HydrogenLeaks0;
    QRadioButton *FC1HydrogenLeaks1;
    QRadioButton *FC1HydrogenLeaks2;
    QRadioButton *FC1HydrogenLeaksError;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_12;
    QRadioButton *FC1OutValveStatus0;
    QRadioButton *FC1OutValveStatus1;
    QRadioButton *FC1OutValveStatusError;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_16;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1027, 513);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridGroupOpen = new QGroupBox(centralWidget);
        gridGroupOpen->setObjectName(QStringLiteral("gridGroupOpen"));
        gridLayout_6 = new QGridLayout(gridGroupOpen);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_18, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButtonPowerOn = new QPushButton(gridGroupOpen);
        pushButtonPowerOn->setObjectName(QStringLiteral("pushButtonPowerOn"));

        horizontalLayout->addWidget(pushButtonPowerOn);


        gridLayout_6->addLayout(horizontalLayout, 0, 0, 1, 1);

        label_31 = new QLabel(gridGroupOpen);
        label_31->setObjectName(QStringLiteral("label_31"));

        gridLayout_6->addWidget(label_31, 0, 2, 1, 1);

        runtime = new QLineEdit(gridGroupOpen);
        runtime->setObjectName(QStringLiteral("runtime"));

        gridLayout_6->addWidget(runtime, 0, 3, 1, 1);


        gridLayout->addWidget(gridGroupOpen, 2, 3, 1, 1);

        gridGroupBox = new QGroupBox(centralWidget);
        gridGroupBox->setObjectName(QStringLiteral("gridGroupBox"));
        gridLayout_9 = new QGridLayout(gridGroupBox);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridGroupFCParameter2 = new QGroupBox(gridGroupBox);
        gridGroupFCParameter2->setObjectName(QStringLiteral("gridGroupFCParameter2"));
        gridLayout_12 = new QGridLayout(gridGroupFCParameter2);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_20 = new QLabel(gridGroupFCParameter2);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_12->addWidget(label_20);

        fc2_temp1 = new QLineEdit(gridGroupFCParameter2);
        fc2_temp1->setObjectName(QStringLiteral("fc2_temp1"));

        horizontalLayout_12->addWidget(fc2_temp1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_11);


        gridLayout_12->addLayout(horizontalLayout_12, 2, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_19 = new QLabel(gridGroupFCParameter2);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_10->addWidget(label_19);

        fc2_u = new QLineEdit(gridGroupFCParameter2);
        fc2_u->setObjectName(QStringLiteral("fc2_u"));

        horizontalLayout_10->addWidget(fc2_u);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_9);


        gridLayout_12->addLayout(horizontalLayout_10, 0, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_22 = new QLabel(gridGroupFCParameter2);
        label_22->setObjectName(QStringLiteral("label_22"));

        horizontalLayout_11->addWidget(label_22);

        fc2_i = new QLineEdit(gridGroupFCParameter2);
        fc2_i->setObjectName(QStringLiteral("fc2_i"));

        horizontalLayout_11->addWidget(fc2_i);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_10);


        gridLayout_12->addLayout(horizontalLayout_11, 1, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_21 = new QLabel(gridGroupFCParameter2);
        label_21->setObjectName(QStringLiteral("label_21"));

        horizontalLayout_13->addWidget(label_21);

        fc2_temp2 = new QLineEdit(gridGroupFCParameter2);
        fc2_temp2->setObjectName(QStringLiteral("fc2_temp2"));

        horizontalLayout_13->addWidget(fc2_temp2);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_12);


        gridLayout_12->addLayout(horizontalLayout_13, 3, 0, 1, 1);


        gridLayout_9->addWidget(gridGroupFCParameter2, 1, 0, 1, 1);

        GroupBoxFCStatus2 = new QGroupBox(gridGroupBox);
        GroupBoxFCStatus2->setObjectName(QStringLiteral("GroupBoxFCStatus2"));
        gridLayout_10 = new QGridLayout(GroupBoxFCStatus2);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_14 = new QLabel(GroupBoxFCStatus2);
        label_14->setObjectName(QStringLiteral("label_14"));

        verticalLayout_7->addWidget(label_14);

        FC2UnderVoltage0 = new QRadioButton(GroupBoxFCStatus2);
        FC2UnderVoltage0->setObjectName(QStringLiteral("FC2UnderVoltage0"));

        verticalLayout_7->addWidget(FC2UnderVoltage0);

        FC2UnderVoltage1 = new QRadioButton(GroupBoxFCStatus2);
        FC2UnderVoltage1->setObjectName(QStringLiteral("FC2UnderVoltage1"));

        verticalLayout_7->addWidget(FC2UnderVoltage1);

        FC2UnderVoltage2 = new QRadioButton(GroupBoxFCStatus2);
        FC2UnderVoltage2->setObjectName(QStringLiteral("FC2UnderVoltage2"));

        verticalLayout_7->addWidget(FC2UnderVoltage2);

        FC2UnderVoltageError = new QRadioButton(GroupBoxFCStatus2);
        FC2UnderVoltageError->setObjectName(QStringLiteral("FC2UnderVoltageError"));

        verticalLayout_7->addWidget(FC2UnderVoltageError);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_9);


        gridLayout_10->addLayout(verticalLayout_7, 0, 0, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_15 = new QLabel(GroupBoxFCStatus2);
        label_15->setObjectName(QStringLiteral("label_15"));

        verticalLayout_8->addWidget(label_15);

        FC2HighTemperature0 = new QRadioButton(GroupBoxFCStatus2);
        FC2HighTemperature0->setObjectName(QStringLiteral("FC2HighTemperature0"));

        verticalLayout_8->addWidget(FC2HighTemperature0);

        FC2HighTemperature1 = new QRadioButton(GroupBoxFCStatus2);
        FC2HighTemperature1->setObjectName(QStringLiteral("FC2HighTemperature1"));

        verticalLayout_8->addWidget(FC2HighTemperature1);

        FC2HighTemperature2 = new QRadioButton(GroupBoxFCStatus2);
        FC2HighTemperature2->setObjectName(QStringLiteral("FC2HighTemperature2"));

        verticalLayout_8->addWidget(FC2HighTemperature2);

        FC2HighTemperatureError = new QRadioButton(GroupBoxFCStatus2);
        FC2HighTemperatureError->setObjectName(QStringLiteral("FC2HighTemperatureError"));

        verticalLayout_8->addWidget(FC2HighTemperatureError);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_10);


        gridLayout_10->addLayout(verticalLayout_8, 0, 3, 1, 1);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        label_30 = new QLabel(GroupBoxFCStatus2);
        label_30->setObjectName(QStringLiteral("label_30"));

        verticalLayout_14->addWidget(label_30);

        FC2LowPressure0 = new QRadioButton(GroupBoxFCStatus2);
        FC2LowPressure0->setObjectName(QStringLiteral("FC2LowPressure0"));

        verticalLayout_14->addWidget(FC2LowPressure0);

        FC2LowPressure1 = new QRadioButton(GroupBoxFCStatus2);
        FC2LowPressure1->setObjectName(QStringLiteral("FC2LowPressure1"));

        verticalLayout_14->addWidget(FC2LowPressure1);

        FC2LowPressure2 = new QRadioButton(GroupBoxFCStatus2);
        FC2LowPressure2->setObjectName(QStringLiteral("FC2LowPressure2"));

        verticalLayout_14->addWidget(FC2LowPressure2);

        FC2LowPressureError = new QRadioButton(GroupBoxFCStatus2);
        FC2LowPressureError->setObjectName(QStringLiteral("FC2LowPressureError"));

        verticalLayout_14->addWidget(FC2LowPressureError);

        verticalSpacer_16 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_16);


        gridLayout_10->addLayout(verticalLayout_14, 0, 5, 1, 1);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        label_29 = new QLabel(GroupBoxFCStatus2);
        label_29->setObjectName(QStringLiteral("label_29"));

        verticalLayout_15->addWidget(label_29);

        FC2FanStatus0 = new QRadioButton(GroupBoxFCStatus2);
        FC2FanStatus0->setObjectName(QStringLiteral("FC2FanStatus0"));

        verticalLayout_15->addWidget(FC2FanStatus0);

        FC2FanStatus1 = new QRadioButton(GroupBoxFCStatus2);
        FC2FanStatus1->setObjectName(QStringLiteral("FC2FanStatus1"));

        verticalLayout_15->addWidget(FC2FanStatus1);

        FC2FanStatusError = new QRadioButton(GroupBoxFCStatus2);
        FC2FanStatusError->setObjectName(QStringLiteral("FC2FanStatusError"));

        verticalLayout_15->addWidget(FC2FanStatusError);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_15->addItem(verticalSpacer_15);


        gridLayout_10->addLayout(verticalLayout_15, 0, 4, 1, 1);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_19, 0, 6, 1, 1);


        gridLayout_9->addWidget(GroupBoxFCStatus2, 0, 0, 1, 1);

        GroupBoxFan2 = new QGroupBox(gridGroupBox);
        GroupBoxFan2->setObjectName(QStringLiteral("GroupBoxFan2"));
        gridLayout_13 = new QGridLayout(GroupBoxFan2);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_24 = new QLabel(GroupBoxFan2);
        label_24->setObjectName(QStringLiteral("label_24"));

        horizontalLayout_15->addWidget(label_24);

        fc2_fan1RPM = new QLineEdit(GroupBoxFan2);
        fc2_fan1RPM->setObjectName(QStringLiteral("fc2_fan1RPM"));

        horizontalLayout_15->addWidget(fc2_fan1RPM);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_14);


        gridLayout_13->addLayout(horizontalLayout_15, 1, 0, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_23 = new QLabel(GroupBoxFan2);
        label_23->setObjectName(QStringLiteral("label_23"));

        horizontalLayout_14->addWidget(label_23);

        fc2_PWM = new QLineEdit(GroupBoxFan2);
        fc2_PWM->setObjectName(QStringLiteral("fc2_PWM"));

        horizontalLayout_14->addWidget(fc2_PWM);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_13);


        gridLayout_13->addLayout(horizontalLayout_14, 0, 0, 1, 1);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_25 = new QLabel(GroupBoxFan2);
        label_25->setObjectName(QStringLiteral("label_25"));

        horizontalLayout_16->addWidget(label_25);

        fc2_fan2RPM = new QLineEdit(GroupBoxFan2);
        fc2_fan2RPM->setObjectName(QStringLiteral("fc2_fan2RPM"));

        horizontalLayout_16->addWidget(fc2_fan2RPM);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_15);


        gridLayout_13->addLayout(horizontalLayout_16, 2, 0, 1, 1);


        gridLayout_9->addWidget(GroupBoxFan2, 2, 0, 1, 1);

        GroupBoxValve2 = new QGroupBox(gridGroupBox);
        GroupBoxValve2->setObjectName(QStringLiteral("GroupBoxValve2"));
        gridLayout_14 = new QGridLayout(GroupBoxValve2);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_17 = new QLabel(GroupBoxValve2);
        label_17->setObjectName(QStringLiteral("label_17"));

        verticalLayout_10->addWidget(label_17);

        FC2OutValveStatus0 = new QRadioButton(GroupBoxValve2);
        FC2OutValveStatus0->setObjectName(QStringLiteral("FC2OutValveStatus0"));

        verticalLayout_10->addWidget(FC2OutValveStatus0);

        FC2OutValveStatus1 = new QRadioButton(GroupBoxValve2);
        FC2OutValveStatus1->setObjectName(QStringLiteral("FC2OutValveStatus1"));

        verticalLayout_10->addWidget(FC2OutValveStatus1);

        FC2OutValveStatusError = new QRadioButton(GroupBoxValve2);
        FC2OutValveStatusError->setObjectName(QStringLiteral("FC2OutValveStatusError"));

        verticalLayout_10->addWidget(FC2OutValveStatusError);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_7);


        gridLayout_14->addLayout(verticalLayout_10, 1, 0, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_18 = new QLabel(GroupBoxValve2);
        label_18->setObjectName(QStringLiteral("label_18"));

        verticalLayout_9->addWidget(label_18);

        FC2HydrogenLeaks0 = new QRadioButton(GroupBoxValve2);
        FC2HydrogenLeaks0->setObjectName(QStringLiteral("FC2HydrogenLeaks0"));

        verticalLayout_9->addWidget(FC2HydrogenLeaks0);

        FC2HydrogenLeaks1 = new QRadioButton(GroupBoxValve2);
        FC2HydrogenLeaks1->setObjectName(QStringLiteral("FC2HydrogenLeaks1"));

        verticalLayout_9->addWidget(FC2HydrogenLeaks1);

        FC2HydrogenLeaks2 = new QRadioButton(GroupBoxValve2);
        FC2HydrogenLeaks2->setObjectName(QStringLiteral("FC2HydrogenLeaks2"));

        verticalLayout_9->addWidget(FC2HydrogenLeaks2);

        FC2HydrogenLeaksError = new QRadioButton(GroupBoxValve2);
        FC2HydrogenLeaksError->setObjectName(QStringLiteral("FC2HydrogenLeaksError"));

        verticalLayout_9->addWidget(FC2HydrogenLeaksError);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_8);


        gridLayout_14->addLayout(verticalLayout_9, 2, 0, 1, 1);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_16 = new QLabel(GroupBoxValve2);
        label_16->setObjectName(QStringLiteral("label_16"));

        verticalLayout_11->addWidget(label_16);

        FC2InValveStatus0 = new QRadioButton(GroupBoxValve2);
        FC2InValveStatus0->setObjectName(QStringLiteral("FC2InValveStatus0"));

        verticalLayout_11->addWidget(FC2InValveStatus0);

        FC2InValveStatus1 = new QRadioButton(GroupBoxValve2);
        FC2InValveStatus1->setObjectName(QStringLiteral("FC2InValveStatus1"));

        verticalLayout_11->addWidget(FC2InValveStatus1);

        FC2InValveStatusError = new QRadioButton(GroupBoxValve2);
        FC2InValveStatusError->setObjectName(QStringLiteral("FC2InValveStatusError"));

        verticalLayout_11->addWidget(FC2InValveStatusError);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_6);


        gridLayout_14->addLayout(verticalLayout_11, 0, 0, 1, 1);


        gridLayout_9->addWidget(GroupBoxValve2, 0, 1, 3, 1);


        gridLayout->addWidget(gridGroupBox, 3, 3, 1, 1);

        GroupBoxSeries = new QGroupBox(centralWidget);
        GroupBoxSeries->setObjectName(QStringLiteral("GroupBoxSeries"));
        gridLayout_4 = new QGridLayout(GroupBoxSeries);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_26 = new QLabel(GroupBoxSeries);
        label_26->setObjectName(QStringLiteral("label_26"));

        gridLayout_4->addWidget(label_26, 0, 2, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(GroupBoxSeries);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        comboBoxSerial = new QComboBox(GroupBoxSeries);
        comboBoxSerial->setObjectName(QStringLiteral("comboBoxSerial"));

        horizontalLayout_4->addWidget(comboBoxSerial);

        pushButtonSerial = new QPushButton(GroupBoxSeries);
        pushButtonSerial->setObjectName(QStringLiteral("pushButtonSerial"));
        pushButtonSerial->setStyleSheet(QStringLiteral(""));

        horizontalLayout_4->addWidget(pushButtonSerial);


        gridLayout_4->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        ByteAcc = new QLineEdit(GroupBoxSeries);
        ByteAcc->setObjectName(QStringLiteral("ByteAcc"));

        gridLayout_4->addWidget(ByteAcc, 0, 3, 1, 1);


        gridLayout->addWidget(GroupBoxSeries, 2, 0, 1, 2);

        gridGroupBox1 = new QGroupBox(centralWidget);
        gridGroupBox1->setObjectName(QStringLiteral("gridGroupBox1"));
        gridLayout_11 = new QGridLayout(gridGroupBox1);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridGroupFCParameter1 = new QGroupBox(gridGroupBox1);
        gridGroupFCParameter1->setObjectName(QStringLiteral("gridGroupFCParameter1"));
        gridLayout_7 = new QGridLayout(gridGroupFCParameter1);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label = new QLabel(gridGroupFCParameter1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_6->addWidget(label);

        fc1_u = new QLineEdit(gridGroupFCParameter1);
        fc1_u->setObjectName(QStringLiteral("fc1_u"));

        horizontalLayout_6->addWidget(fc1_u);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        gridLayout_7->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_5 = new QLabel(gridGroupFCParameter1);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_7->addWidget(label_5);

        fc1_i = new QLineEdit(gridGroupFCParameter1);
        fc1_i->setObjectName(QStringLiteral("fc1_i"));

        horizontalLayout_7->addWidget(fc1_i);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);


        gridLayout_7->addLayout(horizontalLayout_7, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_6 = new QLabel(gridGroupFCParameter1);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        fc1_temp1 = new QLineEdit(gridGroupFCParameter1);
        fc1_temp1->setObjectName(QStringLiteral("fc1_temp1"));

        horizontalLayout_5->addWidget(fc1_temp1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);


        gridLayout_7->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_7 = new QLabel(gridGroupFCParameter1);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_8->addWidget(label_7);

        fc1_temp2 = new QLineEdit(gridGroupFCParameter1);
        fc1_temp2->setObjectName(QStringLiteral("fc1_temp2"));

        horizontalLayout_8->addWidget(fc1_temp2);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);


        gridLayout_7->addLayout(horizontalLayout_8, 3, 0, 1, 1);


        gridLayout_11->addWidget(gridGroupFCParameter1, 1, 0, 1, 1);

        GroupBoxFan1 = new QGroupBox(gridGroupBox1);
        GroupBoxFan1->setObjectName(QStringLiteral("GroupBoxFan1"));
        gridLayout_8 = new QGridLayout(GroupBoxFan1);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_9 = new QLabel(GroupBoxFan1);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_3->addWidget(label_9);

        fc1_fan1RPM = new QLineEdit(GroupBoxFan1);
        fc1_fan1RPM->setObjectName(QStringLiteral("fc1_fan1RPM"));

        horizontalLayout_3->addWidget(fc1_fan1RPM);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        gridLayout_8->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_8 = new QLabel(GroupBoxFan1);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_2->addWidget(label_8);

        fc1_PWM = new QLineEdit(GroupBoxFan1);
        fc1_PWM->setObjectName(QStringLiteral("fc1_PWM"));

        horizontalLayout_2->addWidget(fc1_PWM);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout_8->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_10 = new QLabel(GroupBoxFan1);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_9->addWidget(label_10);

        fc1_fan2RPM = new QLineEdit(GroupBoxFan1);
        fc1_fan2RPM->setObjectName(QStringLiteral("fc1_fan2RPM"));

        horizontalLayout_9->addWidget(fc1_fan2RPM);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_8);


        gridLayout_8->addLayout(horizontalLayout_9, 2, 0, 1, 1);


        gridLayout_11->addWidget(GroupBoxFan1, 2, 0, 1, 1);

        GroupBoxFCStatus1 = new QGroupBox(gridGroupBox1);
        GroupBoxFCStatus1->setObjectName(QStringLiteral("GroupBoxFCStatus1"));
        gridLayout_2 = new QGridLayout(GroupBoxFCStatus1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(GroupBoxFCStatus1);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        FC1UnderVoltage0 = new QRadioButton(GroupBoxFCStatus1);
        FC1UnderVoltage0->setObjectName(QStringLiteral("FC1UnderVoltage0"));

        verticalLayout->addWidget(FC1UnderVoltage0);

        FC1UnderVoltage1 = new QRadioButton(GroupBoxFCStatus1);
        FC1UnderVoltage1->setObjectName(QStringLiteral("FC1UnderVoltage1"));

        verticalLayout->addWidget(FC1UnderVoltage1);

        FC1UnderVoltage2 = new QRadioButton(GroupBoxFCStatus1);
        FC1UnderVoltage2->setObjectName(QStringLiteral("FC1UnderVoltage2"));

        verticalLayout->addWidget(FC1UnderVoltage2);

        FC1UnderVoltageError = new QRadioButton(GroupBoxFCStatus1);
        FC1UnderVoltageError->setObjectName(QStringLiteral("FC1UnderVoltageError"));

        verticalLayout->addWidget(FC1UnderVoltageError);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_4 = new QLabel(GroupBoxFCStatus1);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_3->addWidget(label_4);

        FC1HighTemperature0 = new QRadioButton(GroupBoxFCStatus1);
        FC1HighTemperature0->setObjectName(QStringLiteral("FC1HighTemperature0"));

        verticalLayout_3->addWidget(FC1HighTemperature0);

        FC1HighTemperature1 = new QRadioButton(GroupBoxFCStatus1);
        FC1HighTemperature1->setObjectName(QStringLiteral("FC1HighTemperature1"));

        verticalLayout_3->addWidget(FC1HighTemperature1);

        FC1HighTemperature2 = new QRadioButton(GroupBoxFCStatus1);
        FC1HighTemperature2->setObjectName(QStringLiteral("FC1HighTemperature2"));

        verticalLayout_3->addWidget(FC1HighTemperature2);

        FC1HighTemperatureError = new QRadioButton(GroupBoxFCStatus1);
        FC1HighTemperatureError->setObjectName(QStringLiteral("FC1HighTemperatureError"));

        verticalLayout_3->addWidget(FC1HighTemperatureError);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);


        gridLayout_2->addLayout(verticalLayout_3, 0, 1, 1, 1);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        label_27 = new QLabel(GroupBoxFCStatus1);
        label_27->setObjectName(QStringLiteral("label_27"));

        verticalLayout_12->addWidget(label_27);

        FC1FanStatus0 = new QRadioButton(GroupBoxFCStatus1);
        FC1FanStatus0->setObjectName(QStringLiteral("FC1FanStatus0"));

        verticalLayout_12->addWidget(FC1FanStatus0);

        FC1FanStatus1 = new QRadioButton(GroupBoxFCStatus1);
        FC1FanStatus1->setObjectName(QStringLiteral("FC1FanStatus1"));

        verticalLayout_12->addWidget(FC1FanStatus1);

        FC1FanStatusError = new QRadioButton(GroupBoxFCStatus1);
        FC1FanStatusError->setObjectName(QStringLiteral("FC1FanStatusError"));

        verticalLayout_12->addWidget(FC1FanStatusError);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_13);


        gridLayout_2->addLayout(verticalLayout_12, 0, 2, 1, 1);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        label_28 = new QLabel(GroupBoxFCStatus1);
        label_28->setObjectName(QStringLiteral("label_28"));

        verticalLayout_13->addWidget(label_28);

        FC1LowPressure0 = new QRadioButton(GroupBoxFCStatus1);
        FC1LowPressure0->setObjectName(QStringLiteral("FC1LowPressure0"));

        verticalLayout_13->addWidget(FC1LowPressure0);

        FC1LowPressure1 = new QRadioButton(GroupBoxFCStatus1);
        FC1LowPressure1->setObjectName(QStringLiteral("FC1LowPressure1"));

        verticalLayout_13->addWidget(FC1LowPressure1);

        FC1LowPressure2 = new QRadioButton(GroupBoxFCStatus1);
        FC1LowPressure2->setObjectName(QStringLiteral("FC1LowPressure2"));

        verticalLayout_13->addWidget(FC1LowPressure2);

        FC1LowPressureError = new QRadioButton(GroupBoxFCStatus1);
        FC1LowPressureError->setObjectName(QStringLiteral("FC1LowPressureError"));

        verticalLayout_13->addWidget(FC1LowPressureError);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_14);


        gridLayout_2->addLayout(verticalLayout_13, 0, 3, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_17, 0, 4, 1, 1);


        gridLayout_11->addWidget(GroupBoxFCStatus1, 0, 0, 1, 1);

        GroupBoxValve1 = new QGroupBox(gridGroupBox1);
        GroupBoxValve1->setObjectName(QStringLiteral("GroupBoxValve1"));
        gridLayout_3 = new QGridLayout(GroupBoxValve1);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_11 = new QLabel(GroupBoxValve1);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_4->addWidget(label_11);

        FC1InValveStatus0 = new QRadioButton(GroupBoxValve1);
        FC1InValveStatus0->setObjectName(QStringLiteral("FC1InValveStatus0"));

        verticalLayout_4->addWidget(FC1InValveStatus0);

        FC1InValveStatus1 = new QRadioButton(GroupBoxValve1);
        FC1InValveStatus1->setObjectName(QStringLiteral("FC1InValveStatus1"));

        verticalLayout_4->addWidget(FC1InValveStatus1);

        FC1InValveStatusError = new QRadioButton(GroupBoxValve1);
        FC1InValveStatusError->setObjectName(QStringLiteral("FC1InValveStatusError"));

        verticalLayout_4->addWidget(FC1InValveStatusError);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);


        gridLayout_5->addLayout(verticalLayout_4, 0, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_13 = new QLabel(GroupBoxValve1);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_5->addWidget(label_13);

        FC1HydrogenLeaks0 = new QRadioButton(GroupBoxValve1);
        FC1HydrogenLeaks0->setObjectName(QStringLiteral("FC1HydrogenLeaks0"));

        verticalLayout_5->addWidget(FC1HydrogenLeaks0);

        FC1HydrogenLeaks1 = new QRadioButton(GroupBoxValve1);
        FC1HydrogenLeaks1->setObjectName(QStringLiteral("FC1HydrogenLeaks1"));

        verticalLayout_5->addWidget(FC1HydrogenLeaks1);

        FC1HydrogenLeaks2 = new QRadioButton(GroupBoxValve1);
        FC1HydrogenLeaks2->setObjectName(QStringLiteral("FC1HydrogenLeaks2"));

        verticalLayout_5->addWidget(FC1HydrogenLeaks2);

        FC1HydrogenLeaksError = new QRadioButton(GroupBoxValve1);
        FC1HydrogenLeaksError->setObjectName(QStringLiteral("FC1HydrogenLeaksError"));

        verticalLayout_5->addWidget(FC1HydrogenLeaksError);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        gridLayout_5->addLayout(verticalLayout_5, 2, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_12 = new QLabel(GroupBoxValve1);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_6->addWidget(label_12);

        FC1OutValveStatus0 = new QRadioButton(GroupBoxValve1);
        FC1OutValveStatus0->setObjectName(QStringLiteral("FC1OutValveStatus0"));

        verticalLayout_6->addWidget(FC1OutValveStatus0);

        FC1OutValveStatus1 = new QRadioButton(GroupBoxValve1);
        FC1OutValveStatus1->setObjectName(QStringLiteral("FC1OutValveStatus1"));

        verticalLayout_6->addWidget(FC1OutValveStatus1);

        FC1OutValveStatusError = new QRadioButton(GroupBoxValve1);
        FC1OutValveStatusError->setObjectName(QStringLiteral("FC1OutValveStatusError"));

        verticalLayout_6->addWidget(FC1OutValveStatusError);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);


        gridLayout_5->addLayout(verticalLayout_6, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_5, 1, 0, 1, 1);


        gridLayout_11->addWidget(GroupBoxValve1, 0, 1, 3, 1);


        gridLayout->addWidget(gridGroupBox1, 3, 0, 1, 2);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_16, 3, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        gridGroupOpen->setTitle(QApplication::translate("MainWindow", "\345\274\200\346\234\272\346\216\247\345\210\266", Q_NULLPTR));
        pushButtonPowerOn->setText(QApplication::translate("MainWindow", "\347\202\271\345\207\273\345\274\200\346\234\272", Q_NULLPTR));
        label_31->setText(QApplication::translate("MainWindow", "\347\224\265\345\240\206\350\277\220\350\241\214\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        gridGroupBox->setTitle(QApplication::translate("MainWindow", "4\345\217\267\347\224\265\345\240\206", Q_NULLPTR));
        gridGroupFCParameter2->setTitle(QApplication::translate("MainWindow", "\347\224\265\345\240\206\345\217\202\346\225\260", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "\346\270\251\345\272\2461\357\274\232", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "\347\224\265\345\216\213\357\274\232", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "\347\224\265\346\265\201\357\274\232", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "\346\270\251\345\272\2462\357\274\232", Q_NULLPTR));
        GroupBoxFCStatus2->setTitle(QApplication::translate("MainWindow", "\347\224\265\345\240\206\347\212\266\346\200\201", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "\347\224\265\345\240\206\346\254\240\345\216\213\347\212\266\346\200\201", Q_NULLPTR));
        FC2UnderVoltage0->setText(QApplication::translate("MainWindow", "\346\255\243\345\270\270", Q_NULLPTR));
        FC2UnderVoltage1->setText(QApplication::translate("MainWindow", "\351\242\204\350\255\246", Q_NULLPTR));
        FC2UnderVoltage2->setText(QApplication::translate("MainWindow", "\346\225\205\351\232\234", Q_NULLPTR));
        FC2UnderVoltageError->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\274\202\345\270\270", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "\347\224\265\345\240\206\351\253\230\346\270\251\347\212\266\346\200\201", Q_NULLPTR));
        FC2HighTemperature0->setText(QApplication::translate("MainWindow", "\346\255\243\345\270\270", Q_NULLPTR));
        FC2HighTemperature1->setText(QApplication::translate("MainWindow", "\351\242\204\350\255\246", Q_NULLPTR));
        FC2HighTemperature2->setText(QApplication::translate("MainWindow", "\346\225\205\351\232\234", Q_NULLPTR));
        FC2HighTemperatureError->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\274\202\345\270\270", Q_NULLPTR));
        label_30->setText(QApplication::translate("MainWindow", "\346\260\242\346\260\224\347\223\266\345\216\213\345\212\233\347\212\266\346\200\201", Q_NULLPTR));
        FC2LowPressure0->setText(QApplication::translate("MainWindow", "\346\255\243\345\270\270", Q_NULLPTR));
        FC2LowPressure1->setText(QApplication::translate("MainWindow", "\351\242\204\350\255\246", Q_NULLPTR));
        FC2LowPressure2->setText(QApplication::translate("MainWindow", "\346\225\205\351\232\234", Q_NULLPTR));
        FC2LowPressureError->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\274\202\345\270\270", Q_NULLPTR));
        label_29->setText(QApplication::translate("MainWindow", "\351\243\216\346\211\207\347\212\266\346\200\201", Q_NULLPTR));
        FC2FanStatus0->setText(QApplication::translate("MainWindow", "\346\255\243\345\270\270", Q_NULLPTR));
        FC2FanStatus1->setText(QApplication::translate("MainWindow", "\351\242\204\350\255\246", Q_NULLPTR));
        FC2FanStatusError->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\274\202\345\270\270", Q_NULLPTR));
        GroupBoxFan2->setTitle(QApplication::translate("MainWindow", "\347\224\265\345\240\206\351\243\216\346\211\207", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "\351\243\216\346\211\2071\350\275\254\351\200\237\357\274\232", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "\351\243\216\346\211\207PWM\357\274\232", Q_NULLPTR));
        label_25->setText(QApplication::translate("MainWindow", "\351\243\216\346\211\2072\350\275\254\351\200\237\357\274\232", Q_NULLPTR));
        GroupBoxValve2->setTitle(QApplication::translate("MainWindow", "\351\230\200\351\227\250\347\212\266\346\200\201", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "\345\207\272\346\260\224\351\230\200\347\212\266\346\200\201", Q_NULLPTR));
        FC2OutValveStatus0->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", Q_NULLPTR));
        FC2OutValveStatus1->setText(QApplication::translate("MainWindow", "\345\274\200\345\220\257", Q_NULLPTR));
        FC2OutValveStatusError->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\274\202\345\270\270", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "\346\260\242\346\260\224\346\263\204\351\234\262\346\225\205\351\232\234", Q_NULLPTR));
        FC2HydrogenLeaks0->setText(QApplication::translate("MainWindow", "\346\255\243\345\270\270", Q_NULLPTR));
        FC2HydrogenLeaks1->setText(QApplication::translate("MainWindow", "\351\242\204\350\255\246", Q_NULLPTR));
        FC2HydrogenLeaks2->setText(QApplication::translate("MainWindow", "\346\225\205\351\232\234", Q_NULLPTR));
        FC2HydrogenLeaksError->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\274\202\345\270\270", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "\350\277\233\346\260\224\351\230\200\347\212\266\346\200\201", Q_NULLPTR));
        FC2InValveStatus0->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", Q_NULLPTR));
        FC2InValveStatus1->setText(QApplication::translate("MainWindow", "\345\274\200\345\220\257", Q_NULLPTR));
        FC2InValveStatusError->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\274\202\345\270\270", Q_NULLPTR));
        GroupBoxSeries->setTitle(QApplication::translate("MainWindow", "\344\270\262\345\217\243\350\256\276\347\275\256", Q_NULLPTR));
        label_26->setText(QApplication::translate("MainWindow", "\346\216\245\346\224\266\345\255\227\350\212\202\346\225\260\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\344\270\262\345\217\243", Q_NULLPTR));
        pushButtonSerial->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
        gridGroupBox1->setTitle(QApplication::translate("MainWindow", "1\345\217\267\347\224\265\345\240\206", Q_NULLPTR));
        gridGroupFCParameter1->setTitle(QApplication::translate("MainWindow", "\347\224\265\345\240\206\345\217\202\346\225\260", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\347\224\265\345\216\213\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\347\224\265\346\265\201\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\346\270\251\345\272\2461\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\346\270\251\345\272\2462\357\274\232", Q_NULLPTR));
        GroupBoxFan1->setTitle(QApplication::translate("MainWindow", "\347\224\265\345\240\206\351\243\216\346\211\207", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "\351\243\216\346\211\2071\350\275\254\351\200\237\357\274\232", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\351\243\216\346\211\207PWM\357\274\232", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "\351\243\216\346\211\2072\350\275\254\351\200\237\357\274\232", Q_NULLPTR));
        GroupBoxFCStatus1->setTitle(QApplication::translate("MainWindow", "\347\224\265\345\240\206\347\212\266\346\200\201", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\347\224\265\345\240\206\346\254\240\345\216\213\347\212\266\346\200\201", Q_NULLPTR));
        FC1UnderVoltage0->setText(QApplication::translate("MainWindow", "\346\255\243\345\270\270", Q_NULLPTR));
        FC1UnderVoltage1->setText(QApplication::translate("MainWindow", "\351\242\204\350\255\246", Q_NULLPTR));
        FC1UnderVoltage2->setText(QApplication::translate("MainWindow", "\346\225\205\351\232\234", Q_NULLPTR));
        FC1UnderVoltageError->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\274\202\345\270\270", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\347\224\265\345\240\206\351\253\230\346\270\251\347\212\266\346\200\201", Q_NULLPTR));
        FC1HighTemperature0->setText(QApplication::translate("MainWindow", "\346\255\243\345\270\270", Q_NULLPTR));
        FC1HighTemperature1->setText(QApplication::translate("MainWindow", "\351\242\204\350\255\246", Q_NULLPTR));
        FC1HighTemperature2->setText(QApplication::translate("MainWindow", "\346\225\205\351\232\234", Q_NULLPTR));
        FC1HighTemperatureError->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\274\202\345\270\270", Q_NULLPTR));
        label_27->setText(QApplication::translate("MainWindow", "\351\243\216\346\211\207\347\212\266\346\200\201", Q_NULLPTR));
        FC1FanStatus0->setText(QApplication::translate("MainWindow", "\346\255\243\345\270\270", Q_NULLPTR));
        FC1FanStatus1->setText(QApplication::translate("MainWindow", "\351\242\204\350\255\246", Q_NULLPTR));
        FC1FanStatusError->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\274\202\345\270\270", Q_NULLPTR));
        label_28->setText(QApplication::translate("MainWindow", "\346\260\242\346\260\224\347\223\266\345\216\213\345\212\233\347\212\266\346\200\201", Q_NULLPTR));
        FC1LowPressure0->setText(QApplication::translate("MainWindow", "\346\255\243\345\270\270", Q_NULLPTR));
        FC1LowPressure1->setText(QApplication::translate("MainWindow", "\351\242\204\350\255\246", Q_NULLPTR));
        FC1LowPressure2->setText(QApplication::translate("MainWindow", "\346\225\205\351\232\234", Q_NULLPTR));
        FC1LowPressureError->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\274\202\345\270\270", Q_NULLPTR));
        GroupBoxValve1->setTitle(QApplication::translate("MainWindow", "\351\230\200\351\227\250\347\212\266\346\200\201", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "\350\277\233\346\260\224\351\230\200\347\212\266\346\200\201", Q_NULLPTR));
        FC1InValveStatus0->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", Q_NULLPTR));
        FC1InValveStatus1->setText(QApplication::translate("MainWindow", "\345\274\200\345\220\257", Q_NULLPTR));
        FC1InValveStatusError->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\274\202\345\270\270", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "\346\260\242\346\260\224\346\263\204\351\234\262\346\225\205\351\232\234", Q_NULLPTR));
        FC1HydrogenLeaks0->setText(QApplication::translate("MainWindow", "\346\255\243\345\270\270", Q_NULLPTR));
        FC1HydrogenLeaks1->setText(QApplication::translate("MainWindow", "\351\242\204\350\255\246", Q_NULLPTR));
        FC1HydrogenLeaks2->setText(QApplication::translate("MainWindow", "\346\225\205\351\232\234", Q_NULLPTR));
        FC1HydrogenLeaksError->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\274\202\345\270\270", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "\345\207\272\346\260\224\351\230\200\347\212\266\346\200\201", Q_NULLPTR));
        FC1OutValveStatus0->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", Q_NULLPTR));
        FC1OutValveStatus1->setText(QApplication::translate("MainWindow", "\345\274\200\345\220\257", Q_NULLPTR));
        FC1OutValveStatusError->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\274\202\345\270\270", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
