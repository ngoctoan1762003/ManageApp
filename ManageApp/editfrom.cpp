#include "editfrom.h"
#include "ui_editfrom.h"

EditFrom::EditFrom(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EditFrom)
{
    ui->setupUi(this);
}

EditFrom::~EditFrom()
{
    delete ui;
}
