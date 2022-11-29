#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Màn hình chính");
    manager.loadMonHang();
    manager.loadBan();
    manager.loadMaGiamGia();
    manager.loadTaiKhoan();

    ui->minusButton->hide();
    ui->addButton->hide();

    UpdateMH();
    UpdateBan();

    tenHangChon.CreateList();
    soLuong.CreateList();
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString changeQString(QString in, int sizeNeed){
    QString newString=in;
    for(int i=0; i<sizeNeed; i++){
        if(i>in.size()){
            newString+=" ";
        }
    }
    return newString;
}


void MainWindow::Update(){
    ui->tongTienLabel->setText(QString::fromStdString(to_string(sum)));
    finalsum=sum-sum*chietKhau/100-giamGia;
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
            //qDebug()<<"Oke";

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
            //qDebug()<<"Oke3";


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
    //qDebug()<<"ok";
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
                //qDebug()<<"done";
    }
    sum+=*giaHangChon[monHangChon->getChiSoTrongHD()].value;
    Update();
                qDebug()<<"doneadd";
}

void MainWindow::on_thanhToanButton_clicked()
{

    if(banChon!=NULL){
        if(banChon->getState()==true){
            QMessageBox::about(this, "Lỗi", "Bàn đang chọn đang phục vụ khách");
            return;
        }
    }

    if(ui->hoaDon->rowCount()==0){
        QMessageBox::about(this, "Lỗi", "Chưa chọn hàng");
        return;
    }

    tempsl=new LinkedList<int>;
    tempgia=new LinkedList<int>;
    tempmh=new LinkedList<MonHang>;
    tempsl=&soLuong;
    tempgia=&giaHangChon;
    tempmh=&tenHangChon;

    QString maBan;
    if(banChon==NULL) maBan="Không";
    else maBan=ui->banChooseLabel->text();

    if(sum>=mocChietKhau){
        chietKhau=5;
    }


    if(ui->tenLine->text().isEmpty()==false){
        int i=0;
        bool isAvailable=false;
        for(i=0; i<manager.client.GetSize(); i++){
            KhachHang* khachHang = manager.client.GetNode(i)->value;
            if(khachHang->getTen()==ui->tenLine->text()){
                khachHang->addTongHD();
                khachHang->addTongTien(sum);
                khachHang->setDiem(khachHang->getDiem()+sum/1000);
                isAvailable=true;
                if(khachHang->getDiem()>=diemTieuChuan){
                    giamGia+=20000;
                    khachHang->setDiem(khachHang->getDiem()-diemTieuChuan);
                }
                break;
            }
        }
        if(isAvailable==false){
            nodeKhachHang=new Node<KhachHang>;
            nodeKhachHang->CreateNode();
            nodeKhachHang->value=new KhachHang;
            nodeKhachHang->value->setTen(ui->tenLine->text());
            nodeKhachHang->value->setDiem(sum/1000);
            nodeKhachHang->value->addTongHD();
            nodeKhachHang->value->addTongTien(sum);
            manager.client.AddTail(nodeKhachHang);
            if(nodeKhachHang->value->getDiem()>=diemTieuChuan){
                giamGia+=20000;
                nodeKhachHang->value->setDiem(nodeKhachHang->value->getDiem()-diemTieuChuan);
            }
        }
        manager.saveKhachHang();

        if(ui->voucherLine->text().isEmpty()==false){
            for(int j=0; j<manager.maGiamGia.GetSize(); j++){
                if(manager.maGiamGia.GetNode(j)->value==ui->voucherLine->text()){
                    if(manager.client.GetNode(i)->value->checkMa(ui->voucherLine->text())){
                        giamGia+=20000;
                        break;
                    }
                    else{
                        QMessageBox::about(this, "Lỗi", "Quý khách đã dùng mã này");
                    }
                }
            }
        }
    }

    if(ui->noteLine->text().isEmpty()==false){
        note=ui->noteLine->text();
    }

    Update();

    hoaDonWindow=new HoaDonWindow(this);
    hoaDonWindow->resize(650,700+ui->hoaDon->rowCount()*20);
    hoaDonWindow->show();
    hoaDonWindow->Display(note, giamGia, chietKhau, count, maBan, ui->hoaDon->rowCount(), tempsl, tempmh, tempgia);

    Save saveObject;
    saveObject.createNewSaveObject(chietKhau, giamGia, ui->hoaDon->rowCount(), finalsum, tempsl, tempmh);
    nodeSave=new Node<Save>;
    nodeSave->CreateNode();
    nodeSave->value=new Save;
    *nodeSave->value=saveObject;
    qDebug()<<nodeSave->value->GetSaveTongTien();
    saveDay.saveObjectArr.AddTail(nodeSave);

    sumDay+=finalsum;
    tongDoanhThu+=sum;
    tongSoHD++;
    chietKhau=0;
    if(banChon!=NULL){
        manager.GetBan(ui->banChooseLabel->text().toInt())->setState(true);
        UpdateBan();
    }

    tenHangChon.clear();
    giaHangChon.clear();
    soLuong.clear();
    ui->hoaDon->setRowCount(0);
    ui->banChooseLabel->setText("");
    banChon=NULL;
    sum=0;
    giamGia=0;
    numberOfRow=0;
    note="";
    Update();
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
    //count++;
    ofstream outfile;
    outfile.open("./SaleData.txt", std::ios::app);
    manager.addSaveDay=new Node<SaveDay>;
    manager.addSaveDay->CreateNode();
    manager.addSaveDay->value=new SaveDay;
    *manager.addSaveDay->value=saveDay;
    manager.saveDayArr.AddTail(manager.addSaveDay);

    QDateTime date = QDateTime::currentDateTime();
    date.setDate(date.date().addDays(count));
    QString formattedTime = date.toString("dd/MM/yyyy");
    outfile<<"-----Ngay "<<formattedTime.toStdString()<<"-----"<<endl<<endl;
    outfile<<"Tong Doanh Thu: "<<sumDay<<endl<<endl;
    outfile<<"So Luong Hoa Don: "<<saveDay.saveObjectArr.GetSize()<<endl<<endl;
    for(int i=0; i<saveDay.saveObjectArr.GetSize(); i++){
        outfile<<"Hóa Đơn Thứ "<<i+1<<endl;
        outfile<<"Số Lượng Hàng: "<<saveDay.saveObjectArr[i].value->GetSaveSoLuongHang()<<endl;
        //qDebug()<<saveDay.saveObjectArr.GetNode(i)->value->saveSoLuongHang;

        outfile<<"Ten\t\t\t\t";
        outfile<<"SL\t";
        outfile<<"Gia\t\t";
        outfile<<"Don Vi\t\t";
        outfile<<"Tong";
        outfile<<endl;

        for(int j=0; j<saveDay.saveObjectArr.GetNode(i)->value->saveSoLuongHang; j++){
            //qDebug()<<saveDay.saveObjectArr.GetNode(i)->value->saveMonHang.GetNode(j)->value->getTen();
            //qDebug()<<"\t"<<*saveDay.saveObjectArr.GetNode(i)->value->saveSoLuong.GetNode(j)->value;
            outfile<<changeQString(saveDay.saveObjectArr.GetNode(i)->value->saveMonHang.GetNode(j)->value->getTen(),25).toStdString()<<"\t"
                  <<*saveDay.saveObjectArr.GetNode(i)->value->saveSoLuong.GetNode(j)->value<<"\t"
                 <<saveDay.saveObjectArr.GetNode(i)->value->saveMonHang.GetNode(j)->value->getGia()<<"\t\t"
                <<saveDay.saveObjectArr.GetNode(i)->value->saveMonHang.GetNode(j)->value->getDonViTinh()<<"\t\t"
               <<saveDay.saveObjectArr.GetNode(i)->value->saveMonHang.GetNode(j)->value->getGia()*(*saveDay.saveObjectArr.GetNode(i)->value->saveSoLuong.GetNode(j)->value)<<endl;

        }
        outfile<<"\nGiam Gia:\t\t\t\t\t\t\t\t"<<saveDay.saveObjectArr.GetNode(i)->value->saveGiamGia<<endl<<endl;
        outfile<<"ChietKhau:\t\t\t\t\t\t\t\t"<<saveDay.saveObjectArr.GetNode(i)->value->saveChietKhau<<"%"<<endl<<endl;
        outfile<<"Tong Tien:\t\t\t\t\t\t\t\t"<<saveDay.saveObjectArr.GetNode(i)->value->saveTongTien<<endl<<endl;
    }

    tongKet=new TongKet(this);
    tongKet->resize(650,600+ui->hoaDon->rowCount()*20);
    tongKet->show();
        //qDebug()<<"okeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee1";
    int soHoaDon=saveDay.saveObjectArr.GetSize();
    //qDebug()<<soHoaDon;
    tongKet->Display(soHoaDon, sumDay);
    //qDebug()<<"okeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee";

    soNgay++;
    saveDay.saveObjectArr.clear();
    sumDay=0;
    count++;
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
    ui->stackedMenu->setCurrentIndex(3);
}

void MainWindow::on_pushButtonCoffee_clicked()
{
    ui->stackedMenu->setCurrentIndex(2);
}

void MainWindow::on_pushButtonGasDrink_clicked()
{
    ui->stackedMenu->setCurrentIndex(1);
}

void MainWindow::on_pushButtonDrink_clicked()
{
    ui->stackedMenu->setCurrentIndex(0);
}

void MainWindow::addMonHang(MonHang* mh){
    mh->setMa(manager.monHang.GetSize()+1);
    manager.addMonHangToArr(mh);
    UpdateMH();
}

void MainWindow::deleteMonHang(string name){
    int index=-1;
    for(int i=0; i<manager.monHang.GetSize(); i++){
        if(manager.monHang.GetNode(i)->value->getTen().toStdString()==name){
            index=i;
            break;
        }
    }
    qDebug()<<QString::fromStdString(name);
    qDebug()<<index;
    manager.monHang.RemoveAfterIndex(index-1);
    UpdateMH();
    manager.saveMonHang();
}

void MainWindow::editMonHang(int index, MonHang* mh){
    MonHang* newMH=manager.monHang.GetNode(index)->value;
    newMH->setTen(mh->getTen());
    newMH->setGia(mh->getGia());
    newMH->setDonViTinh(mh->getDonViTinh());
    newMH->setLoaiHang(mh->getLoaiHang());
    UpdateMH();
    manager.saveMonHang();
}


void MainWindow::on_reviewButton_clicked()
{
    Review* review=new Review(this);
    review->show();
    LinkedList<KhachHang>* temp=&manager.client;
    review->Display(QString::fromStdString(to_string(soNgay)), QString::fromStdString(to_string(tongSoHD)),QString::fromStdString(to_string(tongDoanhThu)), temp);
}

void MainWindow::UpdateMH(){
    ui->traList->clear();
    ui->nuocNgotList->clear();
    ui->caPheList->clear();
    ui->doAnList->clear();
    for(int i=0; i<manager.monHang.GetSize(); i++){
        if(manager.monHang.GetNode(i)->value->getLoaiHang()=="Tra"){
            ui->traList->addItem(manager.monHang.GetNode(i)->value->getTen());
        }
        if(manager.monHang.GetNode(i)->value->getLoaiHang()=="NuocNgot"){
            ui->nuocNgotList->addItem(manager.monHang.GetNode(i)->value->getTen());
        }
        if(manager.monHang.GetNode(i)->value->getLoaiHang()=="CaPhe"){
            ui->caPheList->addItem(manager.monHang.GetNode(i)->value->getTen());
        }
        if(manager.monHang.GetNode(i)->value->getLoaiHang()=="DoAn"){
            ui->doAnList->addItem(manager.monHang.GetNode(i)->value->getTen());
        }
    }
}

void MainWindow::UpdateBan(){
    ui->ngoaiSanBanList->clear();
    ui->banTrongNhaList->clear();
    ui->lau2BanList->clear();
    for(int i=0; i<manager.ban.GetSize(); i++){
        if(manager.ban.GetNode(i)->value->getViTri()=="NgoaiSan"){
            ui->ngoaiSanBanList->addItem(QString::number(manager.ban.GetNode(i)->value->getMa()));
            if(manager.ban.GetNode(i)->value->getState()==true) {
                ui->ngoaiSanBanList->item(ui->ngoaiSanBanList->count()-1)->setBackground(Qt::red);
            }
        }
        if(manager.ban.GetNode(i)->value->getViTri()=="TrongNha"){
            ui->banTrongNhaList->addItem(QString::number(manager.ban.GetNode(i)->value->getMa()));
            if(manager.ban.GetNode(i)->value->getState()==true) {
                ui->banTrongNhaList->item(ui->banTrongNhaList->count()-1)->setBackground(Qt::red);
            }
        }
        if(manager.ban.GetNode(i)->value->getViTri()=="Tang2"){
            ui->lau2BanList->addItem(QString::number(manager.ban.GetNode(i)->value->getMa()));
            if(manager.ban.GetNode(i)->value->getState()==true) {
                ui->lau2BanList->item(ui->lau2BanList->count()-1)->setBackground(Qt::red);
            }
        }
    }
}

void MainWindow::on_traList_itemClicked(QListWidgetItem *item)
{
    monHangChon=manager.GetMonHang(item->text().toStdString());
    ui->minusButton->show();
    ui->addButton->show();
}


void MainWindow::on_nuocNgotList_itemClicked(QListWidgetItem *item)
{
    monHangChon=manager.GetMonHang(item->text().toStdString());
    ui->minusButton->show();
    ui->addButton->show();
}

void MainWindow::on_caPheList_itemClicked(QListWidgetItem *item)
{
    monHangChon=manager.GetMonHang(item->text().toStdString());
    ui->minusButton->show();
    ui->addButton->show();
}

void MainWindow::on_doAnList_itemClicked(QListWidgetItem *item)
{
    monHangChon=manager.GetMonHang(item->text().toStdString());
    ui->minusButton->show();
    ui->addButton->show();
}

void MainWindow::on_banTrongNhaList_itemClicked(QListWidgetItem *item)
{
    banChon=manager.GetBan(item->text().toInt());
}

void MainWindow::on_lau2BanList_itemClicked(QListWidgetItem *item)
{
    banChon=manager.GetBan(item->text().toInt());
}

void MainWindow::on_ngoaiSanBanList_itemClicked(QListWidgetItem *item)
{
    banChon=manager.GetBan(item->text().toInt());
}

void MainWindow::on_chonBanButton_clicked()
{
    if(banChon!=NULL && banChon->getState()==false){
        ui->banChooseLabel->setText(QString::number(banChon->getMa()));
    }
}

void MainWindow::on_huyChonBanButton_clicked()
{
    banChon=NULL;
    ui->banChooseLabel->setText("");
}

void MainWindow::on_traBanButton_clicked()
{
    if(banChon!=NULL){
        banChon->setState(false);
        UpdateBan();
    }
}


void MainWindow::on_action_ng_xu_t_triggered()
{
    LogInForm* logInForm=new LogInForm;
    logInForm->resize(600,350);
    logInForm->show();
    this->close();
}


void MainWindow::on_actionB_n_triggered()
{
    editBanForm=new EditBanForm(this);
    QObject::connect(editBanForm, SIGNAL(AddBanToArr(int,QString)), this, SLOT(AddBanToArr(int,QString)));
    QObject::connect(editBanForm, SIGNAL(DeleteBan(int)), this, SLOT(DeleteBanToArr(int)));
    editBanForm->show();
    LinkedList<Ban>* temp=&manager.ban;
    editBanForm->Display(temp);
}


void MainWindow::on_actionM_t_h_ng_triggered()
{
    editForm = new EditForm(this);
    QObject::connect(editForm, SIGNAL(newMonHang(MonHang*)), this, SLOT(addMonHang(MonHang*)));
    QObject::connect(editForm, SIGNAL(deleteMonHang(string)), this, SLOT(deleteMonHang(string)));
    QObject::connect(editForm, SIGNAL(editMonHang(int,MonHang*)), this, SLOT(editMonHang(int,MonHang*)));
    editForm->show();
    LinkedList<MonHang>* temp = &manager.monHang;
    editForm->Display(manager.monHang.GetSize(), temp);
}


void MainWindow::on_actionT_i_kho_n_triggered()
{
    taiKhoanForm=new TaiKhoanForm(this);
    QObject::connect(taiKhoanForm, SIGNAL(AddTaiKhoanToArr(Person*)), this, SLOT(AddTaiKhoanToArr(Person*)));
    taiKhoanForm->show();
    LinkedList<Employer> *tempEmployer=&manager.employer;
    LinkedList<Employee> *tempEmployee=&manager.employee;
    taiKhoanForm->Display(tempEmployer, tempEmployee);
}

void MainWindow::setPermit(QString i){
    if(i=="Employee"){
        ui->actionB_n->setEnabled(false);
        ui->actionM_t_h_ng->setEnabled(false);
        ui->actionT_i_kho_n->setEnabled(false);
    }
}

void MainWindow::AddBanToArr(int ma, QString viTri){
    Node<Ban>* ban=new Node<Ban>;
    ban->CreateNode();
    ban->value=new Ban;
    ban->value->setMa(ma);
    ban->value->setViTri(viTri);
    manager.ban.AddTail(ban);
    UpdateBan();
    manager.saveBan();
}

void MainWindow::DeleteBanToArr(int ma){
    int index;
    for(int i=0; i<manager.ban.GetSize(); i++){
        if(manager.ban.GetNode(i)->value->getMa()==ma){
            index=i;
            break;
        }
    }
    manager.ban.RemoveAfterIndex(index-1);
    UpdateBan();
    manager.saveBan();
}

void MainWindow::AddTaiKhoanToArr(Person *person){
    if(person->getRole()=="Employer"){
        Employer *employer=new Employer;
        employer->setTen(person->getTen());
        employer->setTuoi(person->getTuoi());
        employer->setGioiTinh(person->getGioiTinh());
        employer->setTaiKhoan(person->getTaiKhoan());
        employer->setMatKhau(person->getMatKhau());

        Node<Employer> *nodeEmployer=new Node<Employer>;
        nodeEmployer->CreateNode();
        nodeEmployer->value=new Employer;
        nodeEmployer->value=employer;

        manager.employer.AddTail(nodeEmployer);
    }
    else{
        Employee *employee=new Employee;
        employee->setTen(person->getTen());
        employee->setTuoi(person->getTuoi());
        employee->setGioiTinh(person->getGioiTinh());
        employee->setTaiKhoan(person->getTaiKhoan());
        employee->setMatKhau(person->getMatKhau());
        QDateTime date = QDateTime::currentDateTime();
        QString formattedTime = date.toString("dd/MM/yyyy");
        employee->setNgayVaoLam(formattedTime);

        Node<Employee> *nodeEmployee=new Node<Employee>;
        nodeEmployee->CreateNode();
        nodeEmployee->value=new Employee;
        nodeEmployee->value=employee;

        manager.employee.AddTail(nodeEmployee);
    }
    manager.saveTaiKhoan();
    qDebug()<<"oke";
}
