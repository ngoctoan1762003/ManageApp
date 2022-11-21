#include "review.h"
#include "ui_review.h"

Review::Review(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Review)
{
    ui->setupUi(this);
}

Review::~Review()
{
    delete ui;
}

void Review::Display(QString ngay, QString soHD, QString tongDT){
    ui->ngayText->setText(ngay);
    ui->soHDText->setText(soHD);
    ui->doanhThuText->setText(tongDT);
}