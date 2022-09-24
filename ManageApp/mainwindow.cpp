#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->minusButton->hide();
    ui->addButton->hide();
    QPixmap pixmap("D:/ManageApp/ManageApp/Image/trasua.jfif");
    QIcon ButtonIcon(pixmap);
    ui->traSuaChoose->setIcon(ButtonIcon);
    ui->traSuaChoose->setIconSize(pixmap.rect().size()/2);
    ui->traSuaChoose->setCheckable(true);
    ui->kemCheeseChoose->setCheckable(true);
    ui->traDaoChoose->setCheckable(true);
    //ui->traSuaChoose->setIconSize(pixmap.rect().size());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_traSuaChoose_toggled(bool checked)
{
    if(checked){
        monHangChon=traSua;
        ui->minusButton->show();
        ui->addButton->show();
        QPixmap pixmap("D:/ManageApp/ManageApp/Image/trasua.jfif");
        ui->traSuaChoose->setIconSize(pixmap.rect().size()/1.5);
    }
    else{
        monHangChon=NULL;
        ui->minusButton->hide();
        ui->addButton->hide();
        QPixmap pixmap("D:/ManageApp/ManageApp/Image/trasua.jfif");
        ui->traSuaChoose->setIconSize(pixmap.rect().size()/2);
    }
}

void MainWindow::on_kemCheeseChoose_toggled(bool checked)
{
    if(checked){
        monHangChon=kemCheese;
        ui->minusButton->show();
        ui->addButton->show();
        QPixmap pixmap("D:/ManageApp/ManageApp/Image/trasua.jfif");
        ui->kemCheeseChoose->setIconSize(pixmap.rect().size()/1.5);
    }
    else{
        monHangChon=NULL;
        ui->minusButton->hide();
        ui->addButton->hide();
        QPixmap pixmap("D:/ManageApp/ManageApp/Image/trasua.jfif");
        ui->kemCheeseChoose->setIconSize(pixmap.rect().size()/2);
    }
}

void MainWindow::on_traDaoChoose_toggled(bool checked)
{
    if(checked){
        monHangChon=traDao;
        ui->minusButton->show();
        ui->addButton->show();
        QPixmap pixmap("D:/ManageApp/ManageApp/Image/trasua.jfif");
        ui->traDaoChoose->setIconSize(pixmap.rect().size()/1.5);
    }
    else{
        monHangChon=NULL;
        ui->minusButton->hide();
        ui->addButton->hide();
        QPixmap pixmap("D:/ManageApp/ManageApp/Image/trasua.jfif");
        ui->traDaoChoose->setIconSize(pixmap.rect().size()/2);
    }
}

void MainWindow::on_addButton_clicked()
{
    int addIndex=0;
    for(int i=0; i<=ui->hoaDon->rowCount(); i++){
        QAbstractItemModel *model = ui->hoaDon->model();

        QModelIndex index = model->index(i, 0);
        if(index.data().toString()==monHangChon->getTen()){
            addIndex=i;
            soLuong[monHangChon->getChiSoTrongHD()]++;

            break;
        }
        if(i==ui->hoaDon->rowCount() && index.data().toString()!=monHangChon->getTen()){
            addIndex=i;
            numberOfRow++;

            monHangChon->setChiSoTrongHD(tenHangChon.size());

            tenHangChon.push_back(monHangChon->getTen());
            giaHangChon.push_back(monHangChon->getGia());
            soLuong.push_back(1);
            break;
        }
    }

    ui->hoaDon->setRowCount(numberOfRow);
    QTableWidgetItem *item;
    for(int i=0; i<ui->hoaDon->columnCount(); i++){
        item= new QTableWidgetItem;
        if(i==0) item->setText(monHangChon->getTen());
        if(i==1) item->setText(QString::fromStdString(to_string(soLuong[monHangChon->getChiSoTrongHD()])));
        if(i==2) item->setText(QString::fromStdString(to_string(giaHangChon[monHangChon->getChiSoTrongHD()])));
        if(i==3) item->setText(QString::fromStdString(to_string(giaHangChon[monHangChon->getChiSoTrongHD()]*soLuong[monHangChon->getChiSoTrongHD()])));
        ui->hoaDon->setItem(addIndex,i,item);
    }
    sum+=giaHangChon[monHangChon->getChiSoTrongHD()];
    ui->tongTienLabel->setText(QString::fromStdString(to_string(sum)));
    finalsum=sum*(1+0.05);
    ui->tongTienCuoiLabel->setText(QString::fromStdString(to_string((int)finalsum)));
    //qDebug()<<ui->hoaDon->rowCount();
}

void MainWindow::on_thanhToanButton_clicked()
{
    //HoaDonWindow hoaDonwWinDow;
    //hoaDonwWinDow.setModal(true);
    //hoaDonwWinDow.exec();
    hoaDonWindow=new HoaDonWindow(this);
    hoaDonWindow->show();
    hoaDonWindow->Display(ui->hoaDon->rowCount(), soLuong, tenHangChon, giaHangChon);
}

