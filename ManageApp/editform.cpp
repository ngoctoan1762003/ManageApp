#include "editform.h"
#include "ui_editform.h"
#include<QDebug>
EditForm::EditForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditForm)
{
    ui->setupUi(this);


}

EditForm::~EditForm()
{
    delete ui;
}

void EditForm::Display(int soLuong, LinkedList<MonHang> *&mh){
    ui->monHangTable->setRowCount(soLuong);
    QTableWidgetItem *item;
    for(int addIndex=0; addIndex<soLuong; addIndex++){
        for(int i=0; i<ui->monHangTable->columnCount(); i++){
            item= new QTableWidgetItem;
            //if(i==0) item->setText(QString::fromStdString(to_string(addIndex)));
            if(i==0) item->setText(mh->GetNode(addIndex)->value->getTen());
            if(i==1) item->setText(QString::fromStdString(to_string(mh->GetNode(addIndex)->value->getGia())));
            if(i==2) item->setText(QString::fromStdString(mh->GetNode(addIndex)->value->getDonViTinh()));
            if(i==3) item->setText(QString::fromStdString(mh->GetNode(addIndex)->value->getLoaiHang()));
            ui->monHangTable->setItem(addIndex,i,item);
        }
    }
}

void EditForm::on_addButton_clicked()
{
    addForm=new AddForm(this);
    QObject::connect(addForm, SIGNAL(addMH(MonHang*)), this, SLOT(AddMonHangToTable(MonHang*)));
    addForm->show();
}

void EditForm::AddMonHangToTable(MonHang* mh){
    ui->monHangTable->setRowCount(ui->monHangTable->rowCount()+1);
    QTableWidgetItem *item;
    for(int i=0; i<ui->monHangTable->columnCount(); i++){
        item= new QTableWidgetItem;
        //if(i==0) item->setText(QString::fromStdString(to_string(addIndex)));
        if(i==0) item->setText(mh->getTen());
        if(i==1) item->setText(QString::fromStdString(to_string(mh->getGia())));
        if(i==2) item->setText(QString::fromStdString(mh->getDonViTinh()));
        if(i==3) item->setText(QString::fromStdString(mh->getLoaiHang()));
        ui->monHangTable->setItem(ui->monHangTable->rowCount()-1,i,item);
    }
    qDebug()<<"oke";
    emit newMonHang(mh);
}

void EditForm::EditMonHangToTable(MonHang* mh){
    QTableWidgetItem *item;
    for(int i=0; i<ui->monHangTable->columnCount(); i++){
        item= new QTableWidgetItem;
        //if(i==0) item->setText(QString::fromStdString(to_string(addIndex)));
        if(i==0) item->setText(mh->getTen());
        if(i==1) item->setText(QString::fromStdString(to_string(mh->getGia())));
        if(i==2) item->setText(QString::fromStdString(mh->getDonViTinh()));
        if(i==3) item->setText(QString::fromStdString(mh->getLoaiHang()));
        ui->monHangTable->setItem(ui->monHangTable->currentRow(),i,item);
    }
    emit editMonHang(ui->monHangTable->currentRow(), mh);
    qDebug()<<"done";
}

void EditForm::on_exitButton_clicked()
{
    this->close();
}


void EditForm::on_minusButton_clicked()
{
    if(ui->monHangTable->currentItem()!=NULL){
        emit deleteMonHang(ui->monHangTable->item(ui->monHangTable->currentRow(),0)->text().toStdString());

        QTableWidgetItem *item;
        for(int index=ui->monHangTable->currentRow(); index<ui->monHangTable->rowCount()-1; index++){
            //qDebug()<<index;
            for(int i=0; i<ui->monHangTable->columnCount(); i++){
                item= new QTableWidgetItem;
                item->setText(ui->monHangTable->item(index+1, i)->text());
                ui->monHangTable->setItem(index,i,item);
            }
        }
        ui->monHangTable->setRowCount(ui->monHangTable->rowCount()-1);
    }
}


void EditForm::on_editButton_clicked()
{
    resetProp=new ReSetProp(this);
    QObject::connect(resetProp, SIGNAL(ResetProp(MonHang*)), this, SLOT(EditMonHangToTable(MonHang*)));
    resetProp->show();
    resetProp->Display(ui->monHangTable->item(ui->monHangTable->currentRow(), 0)->text(),ui->monHangTable->item(ui->monHangTable->currentRow(), 1)->text(),
                       ui->monHangTable->item(ui->monHangTable->currentRow(), 2)->text(),ui->monHangTable->item(ui->monHangTable->currentRow(), 3)->text());
}

