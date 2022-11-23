#include "review.h"
#include "ui_review.h"

Review::Review(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Review)
{
    ui->setupUi(this);
}

Review::~Review()
{
    delete ui;
}

void Review::Display(QString ngay, QString soHD, QString tongDT, LinkedList<KhachHang>*& kh){
    ui->ngayText->setText(ngay);
    ui->soHDText->setText(soHD);
    ui->doanhThuText->setText(tongDT);

    ui->tableWidget->setRowCount(kh->GetSize());
    QTableWidgetItem *item;
    for(int addIndex=0; addIndex<kh->GetSize(); addIndex++){
        for(int i=0; i<ui->tableWidget->columnCount(); i++){
            item= new QTableWidgetItem;
            //if(i==0) item->setText(QString::fromStdString(to_string(addIndex)));
            if(i==0) item->setText(kh->GetNode(addIndex)->value->getTen());
            if(i==1) item->setText(QString::number(kh->GetNode(addIndex)->value->getTongHD()));
            if(i==2) item->setText(QString::number(kh->GetNode(addIndex)->value->getTongTien()));
            if(i==3) item->setText(QString::number(kh->GetNode(addIndex)->value->getDiem()));
            ui->tableWidget->setItem(addIndex,i,item);
        }
    }
}

void Review::on_statusButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void Review::on_clientButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

