#include "edittaikhoan.h"
#include "ui_edittaikhoan.h"

EditTaiKhoan::EditTaiKhoan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditTaiKhoan)
{
    ui->setupUi(this);
}

EditTaiKhoan::~EditTaiKhoan()
{
    delete ui;
}
void EditTaiKhoan::Display(){
    ui->ten->setText(person->getTen());
    ui->tuoi->setText(QString::number(person->getTuoi()));
    ui->gioiTinh->setCurrentText(person->getGioiTinh());
    ui->taiKhoan->setText(person->getTaiKhoan());
    ui->matKhau->setText(person->getMatKhau());
}

void EditTaiKhoan::on_buttonBox_accepted()
{
    person->setTen(ui->ten->text());
    person->setTuoi(ui->tuoi->text().toInt());
    person->setGioiTinh(ui->gioiTinh->currentText());
    person->setTaiKhoan(ui->taiKhoan->text());
    person->setMatKhau(ui->matKhau->text());
    emit(Edit(person));
}

