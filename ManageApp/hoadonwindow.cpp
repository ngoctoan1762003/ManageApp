#include "hoadonwindow.h"
#include "ui_hoadonwindow.h"
#include <QDebug>
#include <QString>
#include <string>

HoaDonWindow::HoaDonWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HoaDonWindow)
{
    ui->setupUi(this);
}

HoaDonWindow::~HoaDonWindow()
{
    delete ui;
}

QString changeString(QString in, int sizeNeed){
    QString newString=in;
    for(int i=0; i<sizeNeed; i++){
        if(i>in.size()){
            newString+=" ";
        }
    }
    return newString;
}
void HoaDonWindow::Display(int row, vector<int> soLuong, vector<QString> ten, vector<int> tongTien)
{

    QString chiTiet;
    QString add;
    chiTiet.append("Stt\tTen\t\t\tSoLuong\t\tGia\n");
    for(int i=0; i<row; i++){
        add="";
        //qDebug("hi");
        add.append(changeString(QString::fromStdString(to_string(i+1)),10));
        add.append("\t");
        add.append(changeString(ten[i],25));
        add.append("\t");
        add.append(changeString(QString::fromStdString(to_string(soLuong[i])),20));
        add.append("\t");
        add.append(changeString(QString::fromStdString(to_string(tongTien[i]*soLuong[i])),20));
        add.append("\n");
        qDebug().nospace()<<add;
        chiTiet.append(add);
    }
            qDebug().nospace()<<add;
    ui->chiTietHoaDon->setText(chiTiet);
}
