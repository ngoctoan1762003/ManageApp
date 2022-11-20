#include "addform.h"
#include "ui_addform.h"

AddForm::AddForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddForm)
{
    ui->setupUi(this);
}

AddForm::~AddForm()
{
    delete ui;
}

void AddForm::on_buttonBox_accepted()
{
    MonHang* addMonHang=new MonHang;
    addMonHang->setTen(ui->tenLine->text());
    addMonHang->setGia(std::stoi(ui->giaLine->text().toStdString()));
    addMonHang->setDonViTinh(ui->donViBox->currentText().toStdString());
    addMonHang->setLoaiHang(ui->loaiHangBox->currentText().toStdString());

    emit addMH(addMonHang);
}


void AddForm::on_buttonBox_rejected()
{
    this->close();
}

