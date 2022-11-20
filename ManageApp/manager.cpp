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
    qDebug()<<size;
    for(int i=0; i<size; i++){
        addMonHang=new MonHang;
        infile>>ma;
        addMonHang->setMa(ma);
        infile>>ten;
        //QDebug()<<QString::fromStdString(ten);
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
}
MonHang* Manager::GetMonHang(string name){
    //qDebug()<<this->size;
    for(int i=0; i<this->size; i++){

        if(name==monHang.GetNode(i)->value->getTen().toStdString()) {
                //qDebug()<<"oke";
            return monHang.GetNode(i)->value;
        }
    }
    qDebug()<<"ko";
    return NULL;
}

