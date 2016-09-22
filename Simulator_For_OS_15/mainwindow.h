#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDateTime>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QByteArray QString2Hex(QString str);
    char ConvertHexChar(char ch);
private:
    Ui::MainWindow *ui;
    QSerialPort *my_serialport;

private slots:
    void my_readuart();//串口接收数据槽函数
    void qtimeSlot();//时间改变槽函数
    void on_pushButton_clicked();//打开串口槽函数

};

#endif // MAINWINDOW_H
