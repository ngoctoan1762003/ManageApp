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
void HoaDonWindow::Display(QString note, int giamGia, int chietKhau, int count, QString maBan, int row, LinkedList<int>*& soLuong, LinkedList<MonHang>*& ten, LinkedList<int>*& tongTien)
{

    QString chiTiet="";
    QString add;
    int sum=0;
    chiTiet.append("Bàn: ");
    chiTiet.append(maBan);
    chiTiet.append("\t\t\t");
    chiTiet.append("\nThời gian: ");

    QDateTime date = QDateTime::currentDateTime();
    date.setDate(date.date().addDays(count));
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

    chiTiet.append("\n\nThành tiền: \t\t\t\t\t");
    chiTiet.append(QString::fromStdString(to_string(sum)));
    chiTiet.append("\n\nChiết khấu: \t\t\t\t\t");
    chiTiet.append(QString::fromStdString(to_string(chietKhau)));
    chiTiet.append("%");
    chiTiet.append("\n\nGiảm giá: \t\t\t\t\t");
    chiTiet.append(QString::fromStdString(to_string(giamGia)));
    chiTiet.append("\n\nPhụ phí\t\t\t\t\t\t");
    chiTiet.append(QString::fromStdString(to_string(0)));
    chiTiet.append("\n\nTổng phải trả\t\t\t\t\t");
    chiTiet.append(QString::fromStdString(to_string(sum-sum*chietKhau/100-giamGia)));
    chiTiet.append("\n\nGhi chú\n");
    chiTiet.append(note);
    chiTiet.append("\n\n\t\tXin chân thành cảm ơn quý khách\t\t");
    ui->chiTietHoaDon->setText(chiTiet);

}



