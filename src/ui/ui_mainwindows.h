/********************************************************************************
** Form generated from reading UI file 'mainwindows.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWS_H
#define UI_MAINWINDOWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindows
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *tb_received_msg;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QComboBox *cb_serial_ports;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QComboBox *cb_baud_rate;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QComboBox *cb_data_bits;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_4;
    QComboBox *cb_stop_bit;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_5;
    QComboBox *cb_parity;
    QCheckBox *cb_open_serial_port;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_4;
    QTextEdit *te_message;
    QPushButton *btn_send;

    void setupUi(QWidget *MainWindows)
    {
        if (MainWindows->objectName().isEmpty())
            MainWindows->setObjectName(QString::fromUtf8("MainWindows"));
        MainWindows->resize(735, 568);
        verticalLayout_2 = new QVBoxLayout(MainWindows);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(MainWindows);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tb_received_msg = new QTextBrowser(groupBox);
        tb_received_msg->setObjectName(QString::fromUtf8("tb_received_msg"));

        verticalLayout_3->addWidget(tb_received_msg);


        horizontalLayout_2->addLayout(verticalLayout_3);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(MainWindows);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_5 = new QVBoxLayout(groupBox_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(20);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(8, 8, 8, 8);
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(label_2);

        cb_serial_ports = new QComboBox(groupBox_2);
        cb_serial_ports->setObjectName(QString::fromUtf8("cb_serial_ports"));

        horizontalLayout_5->addWidget(cb_serial_ports);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 2);

        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(8, 8, 8, 8);
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_7->addWidget(label_3);

        cb_baud_rate = new QComboBox(groupBox_2);
        cb_baud_rate->addItem(QString());
        cb_baud_rate->addItem(QString());
        cb_baud_rate->addItem(QString());
        cb_baud_rate->addItem(QString());
        cb_baud_rate->setObjectName(QString::fromUtf8("cb_baud_rate"));

        horizontalLayout_7->addWidget(cb_baud_rate);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 2);

        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(8, 8, 8, 8);
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_6->addWidget(label);

        cb_data_bits = new QComboBox(groupBox_2);
        cb_data_bits->addItem(QString());
        cb_data_bits->addItem(QString());
        cb_data_bits->addItem(QString());
        cb_data_bits->addItem(QString());
        cb_data_bits->setObjectName(QString::fromUtf8("cb_data_bits"));

        horizontalLayout_6->addWidget(cb_data_bits);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 2);

        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(8, 8, 8, 8);
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_8->addWidget(label_4);

        cb_stop_bit = new QComboBox(groupBox_2);
        cb_stop_bit->setObjectName(QString::fromUtf8("cb_stop_bit"));

        horizontalLayout_8->addWidget(cb_stop_bit);

        horizontalLayout_8->setStretch(0, 1);
        horizontalLayout_8->setStretch(1, 2);

        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(8, 8, 8, 8);
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_9->addWidget(label_5);

        cb_parity = new QComboBox(groupBox_2);
        cb_parity->setObjectName(QString::fromUtf8("cb_parity"));

        horizontalLayout_9->addWidget(cb_parity);

        horizontalLayout_9->setStretch(0, 1);
        horizontalLayout_9->setStretch(1, 2);

        verticalLayout_4->addLayout(horizontalLayout_9);

        cb_open_serial_port = new QCheckBox(groupBox_2);
        cb_open_serial_port->setObjectName(QString::fromUtf8("cb_open_serial_port"));

        verticalLayout_4->addWidget(cb_open_serial_port);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        verticalLayout_5->addLayout(verticalLayout_4);


        horizontalLayout->addWidget(groupBox_2);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox_3 = new QGroupBox(MainWindows);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        te_message = new QTextEdit(groupBox_3);
        te_message->setObjectName(QString::fromUtf8("te_message"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(te_message->sizePolicy().hasHeightForWidth());
        te_message->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(te_message);

        btn_send = new QPushButton(groupBox_3);
        btn_send->setObjectName(QString::fromUtf8("btn_send"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btn_send->sizePolicy().hasHeightForWidth());
        btn_send->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(btn_send);


        horizontalLayout_3->addWidget(groupBox_3);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalLayout->setStretch(0, 5);
        verticalLayout->setStretch(1, 1);

        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(MainWindows);

        QMetaObject::connectSlotsByName(MainWindows);
    } // setupUi

    void retranslateUi(QWidget *MainWindows)
    {
        MainWindows->setWindowTitle(QCoreApplication::translate("MainWindows", "\344\270\262\345\217\243\350\260\203\350\257\225\345\267\245\345\205\267", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindows", "\346\216\245\346\224\266", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindows", "\344\270\262\345\217\243\345\217\202\346\225\260", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindows", "\344\270\262\345\217\243 \357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindows", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        cb_baud_rate->setItemText(0, QCoreApplication::translate("MainWindows", "4800", nullptr));
        cb_baud_rate->setItemText(1, QCoreApplication::translate("MainWindows", "9600", nullptr));
        cb_baud_rate->setItemText(2, QCoreApplication::translate("MainWindows", "19200", nullptr));
        cb_baud_rate->setItemText(3, QCoreApplication::translate("MainWindows", "38400", nullptr));

        cb_baud_rate->setCurrentText(QCoreApplication::translate("MainWindows", "4800", nullptr));
        label->setText(QCoreApplication::translate("MainWindows", "\346\225\260\346\215\256\344\275\215\357\274\232", nullptr));
        cb_data_bits->setItemText(0, QCoreApplication::translate("MainWindows", "5", nullptr));
        cb_data_bits->setItemText(1, QCoreApplication::translate("MainWindows", "6", nullptr));
        cb_data_bits->setItemText(2, QCoreApplication::translate("MainWindows", "7", nullptr));
        cb_data_bits->setItemText(3, QCoreApplication::translate("MainWindows", "8", nullptr));

        cb_data_bits->setCurrentText(QCoreApplication::translate("MainWindows", "8", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindows", "\345\201\234\346\255\242\344\275\215\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindows", "\346\240\241\351\252\214\344\275\215\357\274\232", nullptr));
        cb_open_serial_port->setText(QCoreApplication::translate("MainWindows", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindows", "\346\214\207\344\273\244", nullptr));
        btn_send->setText(QCoreApplication::translate("MainWindows", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindows: public Ui_MainWindows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWS_H
