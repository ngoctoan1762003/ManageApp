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
