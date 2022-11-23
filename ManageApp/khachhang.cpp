#include "khachhang.h"


KhachHang::KhachHang()
{
    ma=0;
    ten="";
    diemTichLuy=0;
    tongSoHD=0;
    tongTien=0;
}
void KhachHang::setMa(int newMa)
{
    ma = newMa;
}
void KhachHang::setTen(QString newTen){
    ten = newTen;
}
void KhachHang::setDiem(int diem){
    diemTichLuy=diem;
}
int KhachHang::getMa(){
    return ma;
}
QString KhachHang::getTen(){
    return ten;
}
int KhachHang::getDiem(){
    return diemTichLuy;
}
void KhachHang::addTongHD(){
    tongSoHD++;
}
void KhachHang::addTongTien(int add){
    tongTien+=add;
}
int KhachHang::getTongHD(){
    return tongSoHD;
}
int KhachHang::getTongTien(){
    return tongTien;
}
bool KhachHang::checkMa(QString st){
    for(int i=0; i<maDaDung.GetSize(); i++){
        if(st==maDaDung.GetNode(i)->value) return false;
    }
    QString* addMaDaDung=new QString;
    *addMaDaDung=st;
    Node<QString>* addNodeMa= new Node<QString>;
    addNodeMa->CreateNode();
    addNodeMa->value=new QString;
    *addNodeMa->value=*addMaDaDung;
    maDaDung.AddTail(addNodeMa);
    return true;
}
