#include "searchform.h"
#include "ui_searchform.h"
#include <QDebug>

SearchForm::SearchForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchForm)
{
    ui->setupUi(this);
}

SearchForm::~SearchForm()
{
    delete ui;
}

void SearchForm::on_buttonBox_accepted()
{
    if(ui->lineEdit->text().isEmpty()==false){
        emit Search(ui->lineEdit->text());
    }
    else {
        emit Search("");
    }
}

