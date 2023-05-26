//
// Created by admin on 2023/5/26.
//

#ifndef QT_SERIAL_PORT_DEMO_MAINWINDOWS_H
#define QT_SERIAL_PORT_DEMO_MAINWINDOWS_H

#include <QWidget>
#include <QtSerialPort>
#include <QSerialPortInfo>
#include <QMessageBox>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindows; }
QT_END_NAMESPACE

class MainWindows : public QWidget {
Q_OBJECT

public:
    explicit MainWindows(QWidget *parent = nullptr);

    ~MainWindows() override;


private slots:
    void onMsgReady();
private:
    Ui::MainWindows *ui;
    QSerialPort *serialPort;

    void init_serial_port();

    /**
     * 寻找可用的串口
     */
    void find_serial_ports();
};


#endif //QT_SERIAL_PORT_DEMO_MAINWINDOWS_H
