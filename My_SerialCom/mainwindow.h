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
    void qtimeSlot();
    void on_pushButton_clicked();
    void on_pushButton_18_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_10_clicked();
    void on_pushButton_14_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_11_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_12_clicked();
    void on_pushButton_16_clicked();
};

#endif // MAINWINDOW_H
