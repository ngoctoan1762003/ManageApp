#include "tongket.h"
#include "ui_tongket.h"
#include <string>
#include <QDebug>
using namespace std;
TongKet::TongKet(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TongKet)
{
    ui->setupUi(this);
}

TongKet::~TongKet()
{
    delete ui;
}

void TongKet::Display(int soHoaDon, int tongDoanhThu, int ngay){
    qDebug()<<"called";
    QString ngayText="Ngày ";
    ngayText.append(QString::fromStdString(to_string(ngay)));
    ui->ngayLabel->setText(ngayText);
    ui->soHoaDonLabel->setText(QString::fromStdString(to_string(soHoaDon)));
    ui->doanhThuLabel->setText(QString::fromStdString(to_string(tongDoanhThu)));
}
