#include "tongket.h"
#include "ui_tongket.h"
#include <string>
#include <QDebug>
#include <QDateTime>
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

void TongKet::Display(int soHoaDon, int tongDoanhThu){

    QDateTime date = QDateTime::currentDateTime();
    QString formattedTime = date.toString("dd/MM/yyyy");

    ui->ngayLabel->setText(formattedTime);
    ui->soHoaDonLabel->setText(QString::fromStdString(to_string(soHoaDon)));
    ui->doanhThuLabel->setText(QString::fromStdString(to_string(tongDoanhThu)));
}
