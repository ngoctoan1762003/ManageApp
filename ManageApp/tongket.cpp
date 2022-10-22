#include "tongket.h"
#include "ui_tongket.h"

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
