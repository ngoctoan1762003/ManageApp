#include "hoadonwindow.h"
#include "ui_hoadonwindow.h"
#include <QDebug>
#include <iostream>
#include <QString>
#include <string>
#include <QFile>
#include <QDebug>
#include <QMessageBox>

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
    int sum=0;
    chiTiet.append("Ban");
    chiTiet.append("1");
    chiTiet.append("\t\t\t");
    chiTiet.append("Time\n\n");

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
        sum+=tongTien[i]*soLuong[i];
        add.append("\n");
        //qDebug().nospace()<<add;
        chiTiet.append(add);
    }
    chiTiet.append("\n\nThanh tien: \t\t\t\t\t");
    chiTiet.append(QString::fromStdString(to_string(sum)));
    chiTiet.append("\n\nPhu phi\t\t\t\t\t\t");
    chiTiet.append("phu");
    chiTiet.append("\n\nTong phai tra\t\t\t\t\t");
    chiTiet.append("Tong");
    chiTiet.append("\n\n\t\tXin chan thanh cam on quy khach\t\t");
    ui->chiTietHoaDon->setText(chiTiet);
}



