#include "addbanform.h"
#include "ui_addbanform.h"

AddBanForm::AddBanForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddBanForm)
{
    ui->setupUi(this);
}

AddBanForm::~AddBanForm()
{
    delete ui;
}

void AddBanForm::on_buttonBox_accepted()
{
    emit AddBan(ui->comboBox->currentText());
}

