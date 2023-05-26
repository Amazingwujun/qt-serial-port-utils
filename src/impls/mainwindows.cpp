//
// Created by admin on 2023/5/26.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainWindows.h" resolved

#include "../headers/mainwindows.h"
#include "../ui/ui_MainWindows.h"


MainWindows::MainWindows(QWidget *parent) :
        QWidget(parent), ui(new Ui::MainWindows) {
    ui->setupUi(this);
    this->serialPort = new QSerialPort(this);

    find_serial_ports();

    // 信号与槽处理
    connect(ui->cb_open_serial_port, &QCheckBox::toggled, [this](bool checked) {
        if (checked) {
            this->init_serial_port();
        }
    });

    // 接收
    connect(this->serialPort, SIGNAL(readyRead()), this, SLOT(onMsgReady()));

    // 发送
    connect(ui->btn_send, &QPushButton::clicked, [this]() {
        if (!this->serialPort->isOpen()) {
            QMessageBox::warning(nullptr, "警告", "当前串口未开启");
            return;
        }

        // 发送内容
        auto msg = this->ui->te_message->toPlainText();
        if (msg.isEmpty()) {
            return;
        }
        this->serialPort->write(QByteArray::fromHex(msg.toLatin1()));
        ui->tb_received_msg->insertPlainText(
                QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss") + " [send] " + msg + "\n");
    });
}

MainWindows::~MainWindows() {
    delete ui;
}

void MainWindows::init_serial_port() {
    // 关闭之前的串口
    this->serialPort->close();


    // 重新开启
    this->serialPort->setPortName(ui->cb_serial_ports->currentText());
    if (!this->serialPort->open(QIODevice::ReadWrite)) {
        QMessageBox::warning(nullptr, "警告", QStringLiteral("串口打开失败"));
        return;
    }

    // 波特率，数据为，停止位，校验位配置
    this->serialPort->setBaudRate(ui->cb_baud_rate->currentText().toInt());

    auto dataBits = ui->cb_data_bits->currentText().toInt();
    switch (dataBits) {
        case 5: {
            this->serialPort->setDataBits(QSerialPort::Data5);
            break;
        }
        case 6: {
            this->serialPort->setDataBits(QSerialPort::Data6);
            break;
        }
        case 7: {
            this->serialPort->setDataBits(QSerialPort::Data7);
            break;
        }
        case 8: {
            this->serialPort->setDataBits(QSerialPort::Data8);
            break;
        }
        default: {
            auto msg = "非法的数据位: " + std::to_string(dataBits);
            QMessageBox::critical(nullptr, "警告", msg.c_str());
            return;
        }
    }

    auto stopBit = ui->cb_stop_bit->currentText().toInt();
    if (stopBit == 1) {
        this->serialPort->setStopBits(QSerialPort::OneStop);
    } else {
        this->serialPort->setStopBits(QSerialPort::TwoStop);
    }

    auto parity = ui->cb_parity->currentText();
    if (parity == "奇") {
        this->serialPort->setParity(QSerialPort::OddParity);
    } else if (parity == "偶") {
        this->serialPort->setParity(QSerialPort::EvenParity);
    } else {
        this->serialPort->setParity(QSerialPort::NoParity);
    }
}

void MainWindows::find_serial_ports() {
    auto lst = QSerialPortInfo::availablePorts();
    if (lst.empty()) {
        QMessageBox::warning(nullptr, "警告", "找不到空闲串口");
    } else {
        for (const auto &item: lst) {
            ui->cb_serial_ports->addItem(item.portName());
        }
    }
}

void MainWindows::onMsgReady() {
    auto msg = this->serialPort->readAll();

    ui->tb_received_msg->insertPlainText(
            QDateTime::currentDateTime().toString("") + "[received]: " + msg.toHex().data() + "\n");
}
