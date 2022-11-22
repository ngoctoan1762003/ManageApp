#include "editbanform.h"
#include "ui_editbanform.h"

EditBanForm::EditBanForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditBanForm)
{
    ui->setupUi(this);
}

EditBanForm::~EditBanForm()
{
    delete ui;
}
