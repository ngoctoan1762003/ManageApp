#include "hoadonwindow.h"
#include "ui_hoadonwindow.h"
#include <QDebug>
#include <iostream>
#include <QString>
#include <string>
#include <QFile>
#include <QDebug>
#include <QMessageBox>
#include <QDateTime>

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
void HoaDonWindow::Display(int row, LinkedList<int>*& soLuong, LinkedList<MonHang>*& ten, LinkedList<int>*& tongTien)
{

    QString chiTiet="";
    QString add;
    int sum=0;
    chiTiet.append("Ban");
    chiTiet.append("1");
    chiTiet.append("\t\t\t");
    chiTiet.append("\nTime: ");

    QDateTime date = QDateTime::currentDateTime();
    QString formattedTime = date.toString("dd/MM/yyyy hh:mm:ss");
    chiTiet.append(formattedTime);
    chiTiet.append("\n\n");
    //qDebug() << "Date:"+formattedTime;

    chiTiet.append("Stt\tTen\t\t\tSoLuong\t\tGia\n");
    for(int i=0; i<row; i++){
        add="";

        add.append(changeString(QString::fromStdString(to_string(i+1)),10));
        add.append("\t");
        QString addName=ten->GetNode(i)->value->getTen();
        add.append(changeString(addName,25));
        add.append("\t");

        add.append(changeString(QString::fromStdString(to_string(*soLuong->GetNode(i)->value)),20));
        add.append("\t");

        add.append(changeString(QString::fromStdString(to_string((*tongTien->GetNode(i)->value)*(*soLuong->GetNode(i)->value))),20));
        sum=sum+(*tongTien->GetNode(i)->value)*(*soLuong->GetNode(i)->value);
        add.append("\n");

        chiTiet.append(add);
    }

    chiTiet.append("\n\nThanh tien: \t\t\t\t\t");
    chiTiet.append(QString::fromStdString(to_string(sum)));
    chiTiet.append("\n\nPhu phi\t\t\t\t\t\t");
    chiTiet.append(QString::fromStdString(to_string(sum/10)));
    chiTiet.append("\n\nTong phai tra\t\t\t\t\t");
    chiTiet.append(QString::fromStdString(to_string(sum+sum/10)));
    chiTiet.append("\n\n\t\tXin chan thanh cam on quy khach\t\t");
    ui->chiTietHoaDon->setText(chiTiet);

                                qDebug("hidonereal");
}



