#include "editbanform.h"
#include "ui_editbanform.h"
#include <QDebug>

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

void EditBanForm::on_ngoaiSanButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void EditBanForm::on_trongNhaButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void EditBanForm::on_lau2Button_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void EditBanForm::Display(LinkedList<Ban>*& ban){
    for(int i=0; i<ban->GetSize(); i++){
        if(ban->GetNode(i)->value->getViTri()=="NgoaiSan"){
            ui->ngoaiSanList->addItem(QString::number(ban->GetNode(i)->value->getMa()));
        }
        if(ban->GetNode(i)->value->getViTri()=="TrongNha"){
            ui->trongNhaList->addItem(QString::number(ban->GetNode(i)->value->getMa()));
        }
        if(ban->GetNode(i)->value->getViTri()=="Tang2"){
            ui->lau2List->addItem(QString::number(ban->GetNode(i)->value->getMa()));
        }
    }
}

void EditBanForm::AddBan(QString viTri){
    int ma;
    if(viTri=="NgoaiSan") {
        ma=ui->ngoaiSanList->item(ui->ngoaiSanList->count()-1)->text().toInt();
        ma++;
        ui->ngoaiSanList->addItem(QString::number(ma));
    }
    if(viTri=="TrongNha") {
        ma=ui->trongNhaList->item(ui->trongNhaList->count()-1)->text().toInt();
        ma++;
        ui->trongNhaList->addItem(QString::number(ma));
    }
    if(viTri=="Tang2") {
        ma=ui->lau2List->item(ui->lau2List->count()-1)->text().toInt();
        ma++;
        ui->lau2List->addItem(QString::number(ma));
    }
    emit AddBanToArr(ma, viTri);
}
void EditBanForm::on_addButton_clicked()
{
    AddBanForm *addBanForm=new AddBanForm;
    QObject::connect(addBanForm, SIGNAL(AddBan(QString)), this, SLOT(AddBan(QString)));
    addBanForm->show();
}


void EditBanForm::on_DeleteButton_clicked()
{
    if(ui->stackedWidget->currentIndex()==1){
        QString deletedBan=ui->trongNhaList->takeItem(ui->trongNhaList->count()-1)->text();
        emit DeleteBan(deletedBan.toInt());
    }
    else if(ui->stackedWidget->currentIndex()==0){
        QString deletedBan=ui->ngoaiSanList->takeItem(ui->ngoaiSanList->count()-1)->text();
        emit DeleteBan(deletedBan.toInt());
    }
    else if(ui->stackedWidget->currentIndex()==2){
        QString deletedBan=ui->lau2List->takeItem(ui->lau2List->count()-1)->text();
        emit DeleteBan(deletedBan.toInt());
    }
}

