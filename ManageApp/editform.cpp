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
        monHang.AddTail(mh->GetNode(addIndex));
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
    emit newMonHang(mh);
}

void EditForm::EditMonHangToTable(MonHang* mh){
    emit editMonHang(ui->monHangTable->item(ui->monHangTable->currentRow(), 0)->text(), mh);
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

void EditForm::Update(){
    ui->monHangTable->setRowCount(selected.GetSize());
    QTableWidgetItem *item;
    for(int addIndex=0; addIndex<selected.GetSize(); addIndex++){
        for(int i=0; i<ui->monHangTable->columnCount(); i++){
            item= new QTableWidgetItem;
            if(i==0) item->setText(selected.GetNode(addIndex)->value->getTen());
            if(i==1) item->setText(QString::fromStdString(to_string(selected.GetNode(addIndex)->value->getGia())));
            if(i==2) item->setText(QString::fromStdString(selected.GetNode(addIndex)->value->getDonViTinh()));
            if(i==3) item->setText(QString::fromStdString(selected.GetNode(addIndex)->value->getLoaiHang()));
            ui->monHangTable->setItem(addIndex,i,item);
        }
    }
}

void EditForm::on_findButton_clicked()
{
    SearchForm *searchForm=new SearchForm(this);
    searchForm->show();
    QObject::connect(searchForm, SIGNAL(Search(QString)), this, SLOT(Search(QString)));
}

bool EditForm::Compare(QString first, QString second){
    for(int i=0; i<first.length(); i++){
        if(first.length()-i<second.length()) return false;
        if(first.at(i).toLower()==second.at(0).toLower()){

            int k=1;
            int j=i+1;
            while(k<second.length()){
                if(first.at(j).toLower()!=second.at(k).toLower()){

                    break;
                }

                k++;
                j++;
            }

            if(k>=second.length()) return true;
        }
    }
    return false;
}

void EditForm::Search(QString name){
    selected.clear();

    if(name=="") {
        for(int i=0; i<monHang.GetSize(); i++){
             selected.AddTail(monHang.GetNode(i));
        }
    }
    else {
        for(int i=0; i<monHang.GetSize(); i++){

            if(Compare(monHang.GetNode(i)->value->getTen(), name)){
                Node<MonHang> *node=new Node<MonHang>;
                node->CreateNode();
                node->value=new MonHang;
                *node->value=*monHang.GetNode(i)->value;
                selected.AddTail(node);

            }

        }

    }
    Update();

}
