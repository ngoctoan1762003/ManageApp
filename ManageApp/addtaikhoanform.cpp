#include "addtaikhoanform.h"
#include "ui_addtaikhoanform.h"

AddTaiKhoanForm::AddTaiKhoanForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddTaiKhoanForm)
{
    ui->setupUi(this);
}

AddTaiKhoanForm::~AddTaiKhoanForm()
{
    delete ui;
}

void AddTaiKhoanForm::on_buttonBox_accepted()
{
    if(ui->loaiTaiKhoan->currentText()=="Quản lý"){
        person=new Employer;
        person->setTen(ui->ten->text());
        person->setTuoi(ui->tuoi->text().toInt());
        person->setGioiTinh(ui->gioiTinh->currentText());
        person->setTaiKhoan(ui->taiKhoan->text());
        person->setMatKhau(ui->matKhau->text());
    }
    else{
        person=new Employee;
        person->setTen(ui->ten->text());
        person->setTuoi(ui->tuoi->text().toInt());
        person->setGioiTinh(ui->gioiTinh->currentText());
        person->setTaiKhoan(ui->taiKhoan->text());
        person->setMatKhau(ui->matKhau->text());
    }
    emit(AddTaiKhoan(person));
}


