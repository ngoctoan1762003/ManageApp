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
    QPixmap *pixmap;
    pixmap=new QPixmap("D:/ManageApp/ManageApp/Image/trasua.jfif");
    QIcon *ButtonIcon;
    ButtonIcon= new QIcon(*pixmap);
    ui->traSuaChoose->setIcon(*ButtonIcon);
    ui->traSuaChoose->setIconSize(pixmap->rect().size()/2);
    ui->traSuaChoose->setCheckable(true);
    pixmap=new QPixmap("D:/ManageApp/ManageApp/Image/tratac.png");
    ButtonIcon= new QIcon(*pixmap);
    ui->traTacChoose->setIcon(*ButtonIcon);
    ui->traTacChoose->setIconSize(pixmap->rect().size()/8);
    ui->traTacChoose->setCheckable(true);
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

void MainWindow::on_traTacChoose_toggled(bool checked)
{
    if(checked){
        monHangChon=traTac;
        ui->minusButton->show();
        ui->addButton->show();
        QPixmap pixmap("D:/ManageApp/ManageApp/Image/tratac.png");
        ui->traTacChoose->setIconSize(pixmap.rect().size()/6);
    }
    else{
        monHangChon=NULL;
        ui->minusButton->hide();
        ui->addButton->hide();
        QPixmap pixmap("D:/ManageApp/ManageApp/Image/tratac.png");
        ui->traTacChoose->setIconSize(pixmap.rect().size()/8);
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

void MainWindow::Update(){
    ui->tongTienLabel->setText(QString::fromStdString(to_string(sum)));
    finalsum=sum*(1+0.05);
    ui->tongTienCuoiLabel->setText(QString::fromStdString(to_string((int)finalsum)));
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
    Update();
}

void MainWindow::writeFile(){


}

void MainWindow::readFile(){
    ifstream infile;
    infile.open("./SaleData.txt", std::ios::app);
    int n;
    infile>>n;
    for(int i=0; i<n; i++){
        string tenHang;
        infile>>tenHang;
        tenHangChon.push_back(QString::fromStdString(tenHang));
        int so;
        infile>>so;
        soLuong.push_back(so);
    }
    infile.close();
}

void MainWindow::on_thanhToanButton_clicked()
{
    hoaDonWindow=new HoaDonWindow(this);
    hoaDonWindow->resize(650,500+soLuong.size()*20);
    hoaDonWindow->show();
    hoaDonWindow->Display(ui->hoaDon->rowCount(), soLuong, tenHangChon, giaHangChon);

    //qDebug()<<soLuong.size();

    Save saveObject;
    saveObject.createNewSaveObject(soLuong.size(), finalsum, soLuong, tenHangChon);
    saveDay.saveObjectArr.push_back(saveObject);
}


void MainWindow::on_minusButton_clicked()
{
    int minusIndex=-1;
    for(int i=0; i<=ui->hoaDon->rowCount(); i++){
        QAbstractItemModel *model = ui->hoaDon->model();

        QModelIndex index = model->index(i, 0);
        if(index.data().toString()==monHangChon->getTen()){
            minusIndex=i;
            soLuong[monHangChon->getChiSoTrongHD()]--;

            if(soLuong[monHangChon->getChiSoTrongHD()]==0){
                numberOfRow--;
                tenHangChon.erase(tenHangChon.begin() + monHangChon->getChiSoTrongHD());
                giaHangChon.erase(giaHangChon.begin() + monHangChon->getChiSoTrongHD());
                soLuong.erase(soLuong.begin() + monHangChon->getChiSoTrongHD());
            }

            break;
        }
    }

    if(minusIndex!=-1){
        ui->hoaDon->setRowCount(numberOfRow);
        QTableWidgetItem *item;
        for(int j=minusIndex; j<ui->hoaDon->rowCount(); j++){
            for(int i=0; i<ui->hoaDon->columnCount(); i++){
                item= new QTableWidgetItem;
                if(i==0) item->setText(tenHangChon[j]);
                if(i==1) item->setText(QString::fromStdString(to_string(soLuong[j])));
                if(i==2) item->setText(QString::fromStdString(to_string(giaHangChon[j])));
                if(i==3) item->setText(QString::fromStdString(to_string(giaHangChon[j]*soLuong[j])));
                ui->hoaDon->setItem(j,i,item);
            }
        }

        sum-=giaHangChon[monHangChon->getChiSoTrongHD()];
        Update();
    }
}


void MainWindow::on_finishDayButton_clicked()
{
    count++;
    ofstream outfile;
    outfile.open("./SaleData.txt", std::ios::app);
    manager.saveDayArr.push_back(saveDay);
    outfile<<"-----Ngay "<<count<<"-----"<<endl<<endl;
    for(int i=0; i<saveDay.saveObjectArr.size(); i++){
        outfile<<"So Luong :"<<saveDay.saveObjectArr[i].GetSoLuongHang()<<endl;
        vector<int> soLuongHang=saveDay.saveObjectArr[i].GetSaveSoLuong();
        vector<QString> tenHang=saveDay.saveObjectArr[i].GetSaveTenHang();
        for(int j=0; j<soLuongHang.size(); j++){
            outfile<<tenHang[j].toStdString()<<" "<<soLuongHang[j]<<endl;
        }
        outfile<<endl;
    }
    saveDay.saveObjectArr.clear();
    outfile.close();
}


void MainWindow::on_taoMoiButton_clicked()
{
    tenHangChon.clear();
    giaHangChon.clear();
    soLuong.clear();
    ui->hoaDon->setRowCount(0);
    sum=0;
    numberOfRow=0;
    Update();
    //ui->hoaDon->clear();
}


void MainWindow::on_pushButtonFood_clicked()
{
    ui->stackedMenu->setCurrentIndex(1);
}


void MainWindow::on_pushButtonDrink_clicked()
{
    ui->stackedMenu->setCurrentIndex(0);
}

