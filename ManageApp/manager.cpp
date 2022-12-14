#include "manager.h"
#include <QDebug>
Manager::Manager()
{

}
int Manager::tongDoanhThu=0;
void Manager::loadMonHang(){

    ifstream infile;
    infile.open("./MonHangInput.txt", std::ios::in);
    //int n;
    int ma;
    string ten;
    int gia;
    string donViTinh;
    string loaiHang;
    infile>>size;
    for(int i=0; i<size; i++){
        addMonHang=new MonHang;
        infile>>ma;
        addMonHang->setMa(ma);
        infile>>ten;
        addMonHang->setTen(QString::fromStdString(ten));
        infile>>gia;
        addMonHang->setGia(gia);
        infile>>donViTinh;
        addMonHang->setDonViTinh(donViTinh);
        infile>>loaiHang;
        addMonHang->setLoaiHang(loaiHang);

        addNodeMonHang=new Node<MonHang>;
        addNodeMonHang->CreateNode();
        addNodeMonHang->value=new MonHang;
        *addNodeMonHang->value=*addMonHang;

        monHang.AddTail(addNodeMonHang);
    }
    infile.close();
}
void Manager::saveMonHang(){
    ofstream outfile("./MonHangInput.txt", std::ios::ate);
    outfile<<monHang.GetSize();
    outfile<<endl;
    for(int i=0; i<monHang.GetSize(); i++){
        MonHang* temp = monHang.GetNode(i)->value;
        outfile<<i+1;
        outfile<<endl;
        outfile<<temp->getTen().toStdString();
        outfile<<endl;
        outfile<<temp->getGia();
        outfile<<endl;
        outfile<<temp->getDonViTinh();
        outfile<<endl;
        outfile<<temp->getLoaiHang();
        outfile<<endl;
    }
    outfile.close();
}
void Manager::saveBan(){
    ofstream outfile("./BanInput.txt", std::ios::ate);
    outfile<<ban.GetSize();
    outfile<<endl;
    for(int i=0; i<ban.GetSize(); i++){
        Ban* temp = ban.GetNode(i)->value;
        outfile<<temp->getMa();
        outfile<<endl;
        outfile<<temp->getViTri().toStdString();
        outfile<<endl;
    }
    outfile.close();
}
void Manager::saveTaiKhoan(){
    ofstream outfile("./TaiKhoanQLy.txt", std::ios::ate);
    outfile<<employer.GetSize();
    outfile<<endl;
    for(int i=0; i<employer.GetSize(); i++){
        Employer* temp = employer.GetNode(i)->value;
        outfile<<temp->getTaiKhoan().toStdString();
        outfile<<endl;
        outfile<<temp->getMatKhau().toStdString();
        outfile<<endl;
        outfile<<temp->getTen().toStdString();
        outfile<<endl;
        outfile<<std::to_string(temp->getTuoi());
        outfile<<endl;
        outfile<<temp->getGioiTinh().toStdString();
        outfile<<endl;
    }
    outfile.close();

    outfile.open("./TaiKhoanNhanVien.txt", std::ios::ate);
    outfile<<employee.GetSize();
    outfile<<endl;
    for(int i=0; i<employee.GetSize(); i++){
        Employee* temp = employee.GetNode(i)->value;
        outfile<<temp->getTaiKhoan().toStdString();
        outfile<<endl;
        outfile<<temp->getMatKhau().toStdString();
        outfile<<endl;
        outfile<<temp->getTen().toStdString();
        outfile<<endl;
        outfile<<std::to_string(temp->getTuoi());
        outfile<<endl;
        outfile<<temp->getGioiTinh().toStdString();
        outfile<<endl;
        outfile<<temp->getNgayVaoLam().toStdString();
        outfile<<endl;
    }
    outfile.close();
}
void Manager::saveKhachHang(){
    ofstream outfile("./KhachHangInput.txt", std::ios::ate);
    outfile<<client.GetSize();
    outfile<<endl;
    for(int i=0; i<client.GetSize(); i++){
        KhachHang* temp = client.GetNode(i)->value;
        outfile<<temp->getTen().toStdString();
        outfile<<endl;
        outfile<<temp->getDiem();
        outfile<<endl;
    }
    outfile.close();
}
void Manager::loadBan(){
    ifstream infile("./BanInput.txt", std::ios::in);

    infile>>SLBan;
    int ma;
    string viTri;
    for(int i=0; i<SLBan; i++){
        addBan=new Ban;
        infile>>ma;
        addBan->setMa(ma);
        infile>>viTri;
        addBan->setViTri(QString::fromStdString(viTri));

        addNodeBan=new Node<Ban>;
        addNodeBan->CreateNode();
        addNodeBan->value=new Ban;
        *addNodeBan->value=*addBan;

        ban.AddTail(addNodeBan);
    }
    infile.close();
}
void Manager::loadTaiKhoan(){
    ifstream infile("./TaiKhoanQLy.txt", std::ios::in);
    int size;
    string tk;
    string mk;
    string ten;
    int tuoi;
    string gioiTinh;
    string ngayVaoLam;
    infile>>size;

    //Load employer account
    for(int i=0; i<size; i++){
        Employer *addTaiKhoan=new Employer;
        infile>>tk;
        addTaiKhoan->setTaiKhoan(QString::fromStdString(tk));
        infile>>mk;
        addTaiKhoan->setMatKhau(QString::fromStdString(mk));
        infile>>ten;
        addTaiKhoan->setTen(QString::fromStdString(ten));
        infile>>tuoi;
        addTaiKhoan->setTuoi(tuoi);
        infile>>gioiTinh;
        addTaiKhoan->setGioiTinh(QString::fromStdString(gioiTinh));

        Node<Employer> *addNodeTaiKhoan=new Node<Employer>;
        addNodeTaiKhoan->CreateNode();
        addNodeTaiKhoan->value=new Employer;
        *addNodeTaiKhoan->value=*addTaiKhoan;

        employer.AddTail(addNodeTaiKhoan);
    }
    infile.close();

    //Load employee account
    infile.open("./TaiKhoanNhanVien.txt", std::ios::in);
    infile>>size;
    for(int i=0; i<size; i++){
        Employee *addTaiKhoan=new Employee;
        infile>>tk;
        addTaiKhoan->setTaiKhoan(QString::fromStdString(tk));
        infile>>mk;
        addTaiKhoan->setMatKhau(QString::fromStdString(mk));
        infile>>ten;
        addTaiKhoan->setTen(QString::fromStdString(ten));
        infile>>tuoi;
        addTaiKhoan->setTuoi(tuoi);
        infile>>gioiTinh;
        addTaiKhoan->setGioiTinh(QString::fromStdString(gioiTinh));
        infile>>ngayVaoLam;
        addTaiKhoan->setNgayVaoLam(QString::fromStdString(ngayVaoLam));

        Node<Employee> *addNodeTaiKhoan=new Node<Employee>;
        addNodeTaiKhoan->CreateNode();
        addNodeTaiKhoan->value=new Employee;
        *addNodeTaiKhoan->value=*addTaiKhoan;

        employee.AddTail(addNodeTaiKhoan);
    }
    infile.close();
}
void Manager::loadMaGiamGia(){
    ifstream infile("./MaGiamGia.txt", std::ios::in);
    int size;
    string ma;
    infile>>size;
    for(int i=0; i<size; i++){
        addMa=new QString;
        infile>>ma;
        *addMa=QString::fromStdString(ma);

        addNodeMa=new Node<QString>;
        addNodeMa->CreateNode();
        addNodeMa->value=new QString;
        *addNodeMa->value=*addMa;

        maGiamGia.AddTail(addNodeMa);
    }
    infile.close();
}
void Manager::addMonHangToArr(MonHang* mh){
    size++;
    addNodeMonHang=new Node<MonHang>;
    addNodeMonHang->CreateNode();
    addNodeMonHang->value=new MonHang;
    addNodeMonHang->value->setMa(mh->getMa());
    addNodeMonHang->value->setTen(mh->getTen());
    addNodeMonHang->value->setGia(mh->getGia());
    addNodeMonHang->value->setDonViTinh(mh->getDonViTinh());
    addNodeMonHang->value->setLoaiHang(mh->getLoaiHang());

    monHang.AddTail(addNodeMonHang);

    saveMonHang();
}
MonHang* Manager::GetMonHang(string name){
    for(int i=0; i<this->size; i++){
        if(name==monHang.GetNode(i)->value->getTen().toStdString()) {
            return monHang.GetNode(i)->value;
        }
    }
    qDebug()<<"ko";
    return NULL;
}
Ban* Manager::GetBan(int ma){
    for(int i=0; i<SLBan; i++){
        if(ban.GetNode(i)->value->getMa()==ma) return ban.GetNode(i)->value;
    }
    return NULL;
}



