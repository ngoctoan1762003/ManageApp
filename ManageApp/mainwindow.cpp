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

    tenHangChon.CreateList();
    soLuong.CreateList();
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
        qDebug()<<"Vong lap";
        //qDebug()<<monHangChon->getTen();
        if(index.data().toString()==monHangChon->getTen()){
            addIndex=i;
            qDebug()<<"index"<<monHangChon->getChiSoTrongHD();
                        qDebug()<<"index"<<tenHangChon[i].value->getTen();

            *soLuong[monHangChon->getChiSoTrongHD()].value+=1;
            qDebug()<<"so luong: "<<*soLuong[monHangChon->getChiSoTrongHD()].value;
            break;
        }


        if(i==ui->hoaDon->rowCount() && index.data().toString()!=monHangChon->getTen()){
            addIndex=i;
            numberOfRow++;
            qDebug()<<"Oke";

            monHangChon->setChiSoTrongHD(ui->hoaDon->rowCount());

            //static Node<MonHang> node;
            node= new Node<MonHang>;
            node->CreateNode();
            node->value=new MonHang;
            *node->value=*monHangChon;

            tenHangChon.AddTail(node);
            //delete node;
                        qDebug()<<"Oke2";


            //static Node<int> nodei;
            nodei=new Node<int>;
            nodei->CreateNode();
            nodei->value=new int;
            *nodei->value=1;
            soLuong.AddTail(nodei);
            //delete nodei;
            qDebug()<<"Oke3";


            nodegia=new Node<int>;
            nodegia->CreateNode();
            nodegia->value=new int;
            *nodegia->value=monHangChon->getGia();
            qDebug()<<*nodegia->value;
            giaHangChon.AddTail(nodegia);
            //qDebug()<<*giaHangChon[monHangChon->getChiSoTrongHD()].value;

            break;
        }
    }
    qDebug()<<"ok";
    ui->hoaDon->setRowCount(numberOfRow);
    QTableWidgetItem *item;
    for(int i=0; i<ui->hoaDon->columnCount(); i++){
        item= new QTableWidgetItem;
        if(i==0) item->setText(monHangChon->getTen());
        if(i==1) item->setText(QString::fromStdString(to_string(*soLuong[monHangChon->getChiSoTrongHD()].value)));
        if(i==2) item->setText(QString::fromStdString(to_string(*giaHangChon[monHangChon->getChiSoTrongHD()].value)));
        if(i==3) {
            int tong=(*giaHangChon[monHangChon->getChiSoTrongHD()].value)*(*soLuong[monHangChon->getChiSoTrongHD()].value);
            item->setText(QString::fromStdString(to_string(tong)));
        }
        ui->hoaDon->setItem(addIndex,i,item);
                qDebug()<<"done";
    }
    sum+=*giaHangChon[monHangChon->getChiSoTrongHD()].value;
    Update();
                qDebug()<<"doneadd";
}

void MainWindow::readFile(){
    ifstream infile;
    infile.open("./SaleData.txt", std::ios::app);
    int n;
    infile>>n;
    for(int i=0; i<n; i++){
        string tenHang;
        infile>>tenHang;
        //tenHangChon.AddTail(QString::fromStdString(tenHang));
        int so;
        infile>>so;
        //soLuong.push_back(so);
    }
    infile.close();
}

void MainWindow::on_thanhToanButton_clicked()
{
    hoaDonWindow=new HoaDonWindow(this);
    hoaDonWindow->resize(650,500+ui->hoaDon->rowCount()*20);
    hoaDonWindow->show();
    tempsl=new LinkedList<int>;
    tempgia=new LinkedList<int>;
    tempmh=new LinkedList<MonHang>;
    tempsl=&soLuong;
    tempgia=&giaHangChon;
    tempmh=&tenHangChon;
    hoaDonWindow->Display(ui->hoaDon->rowCount(), tempsl, tempmh, tempgia);

    //qDebug()<<soLuong.size();

    Save saveObject;
    saveObject.createNewSaveObject(ui->hoaDon->rowCount(), finalsum, tempsl, tempmh);
    nodeSave=new Node<Save>;
    nodeSave->CreateNode();
    nodeSave->value=new Save;
    *nodeSave->value=saveObject;
    qDebug()<<nodeSave->value->GetSaveTongTien();
    saveDay.saveObjectArr.AddTail(nodeSave);
    sumDay+=sum;
}


void MainWindow::on_minusButton_clicked()
{
    int minusIndex=-1;
    for(int i=0; i<=ui->hoaDon->rowCount(); i++){
        QAbstractItemModel *model = ui->hoaDon->model();

        QModelIndex index = model->index(i, 0);
        if(index.data().toString()==monHangChon->getTen()){
            minusIndex=i;
            soLuong[monHangChon->getChiSoTrongHD()].value--;

            if(soLuong[monHangChon->getChiSoTrongHD()].value==0){
                numberOfRow--;
                //tenHangChon.RemoveAfterIndex(monHangChon->getChiSoTrongHD());
                //giaHangChon.RemoveAfterIndex(monHangChon->getChiSoTrongHD()-1);
                //soLuong.RemoveAfterIndex(monHangChon->getChiSoTrongHD());
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
                if(i==0) item->setText(tenHangChon[j].value->getTen());
                if(i==1) item->setText(QString::fromStdString(to_string(*soLuong[j].value)));
                //if(i==2) item->setText(QString::fromStdString(to_string(*giaHangChon[j].value)));
                //if(i==3) item->setText(QString::fromStdString(to_string(*giaHangChon[j].value*(*soLuong[j].value))));
                ui->hoaDon->setItem(j,i,item);
            }
        }

        //sum-=*giaHangChon[monHangChon->getChiSoTrongHD()].value;
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
    outfile<<"So Luong Hoa Don: "<<saveDay.saveObjectArr.GetSize()<<endl<<endl;
    for(int i=0; i<saveDay.saveObjectArr.GetSize(); i++){
        outfile<<"Hóa Đơn Thứ "<<i+1<<endl;
        outfile<<"Số Lượng Hàng: "<<saveDay.saveObjectArr[i].value->GetSaveSoLuongHang()<<endl;
        for(int j=0; j<saveDay.saveObjectArr.GetSize(); j++){
            outfile<<saveDay.saveObjectArr.GetNode(j)->value->saveMonHang.GetNode(j)->value->getTen().toStdString()<<"\t"<<*saveDay.saveObjectArr.GetNode(j)->value->saveSoLuong.GetNode(j)->value<<endl;
        }
        outfile<<endl;
    }

    tongKet=new TongKet(this);
    tongKet->resize(650,500+ui->hoaDon->rowCount()*20);
    tongKet->show();
        qDebug()<<"okeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee1";
    int soHoaDon=saveDay.saveObjectArr.GetSize();
    qDebug()<<soHoaDon;
    tongKet->Display(soHoaDon, sumDay, count);
    qDebug()<<"okeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee";

    saveDay.saveObjectArr.clear();
    sumDay=0;
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

