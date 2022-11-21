#include "resetprop.h"
#include "ui_resetprop.h"

ReSetProp::ReSetProp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReSetProp)
{
    ui->setupUi(this);
}

ReSetProp::~ReSetProp()
{
    delete ui;
}

void ReSetProp::Display(QString name, QString gia, QString donVi, QString loai){
    ui->tenLine->setText(name);
    ui->giaLine->setText(gia);
    ui->donViTinhBox->setCurrentText(donVi);
    ui->loaiHangBox->setCurrentText(loai);
}

void ReSetProp::on_buttonBox_accepted()
{
    MonHang* addMonHang=new MonHang;
    addMonHang->setTen(ui->tenLine->text());
    addMonHang->setGia(std::stoi(ui->giaLine->text().toStdString()));
    addMonHang->setDonViTinh(ui->donViTinhBox->currentText().toStdString());
    addMonHang->setLoaiHang(ui->loaiHangBox->currentText().toStdString());

    emit ResetProp(addMonHang);
}

