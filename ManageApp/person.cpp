#include "person.h"

Person::Person()
{
    taiKhoan="";
    matKhau="";
}
void Person::setRole(QString role){
    this->role=role;
}
void Person::setTaiKhoan(QString tk){
    taiKhoan=tk;
}
void Person::setMatKhau(QString mk){
    matKhau=mk;
}
void Person::setTen(QString ten){
    this->ten=ten;
}
void Person::setTuoi(int tuoi){
    this->tuoi=tuoi;
}
void Person::setGioiTinh(QString gioiTinh){
    this->gioiTinh=gioiTinh;
}
QString Person::getTaiKhoan(){
    return taiKhoan;
}
QString Person::getMatKhau(){
    return matKhau;
}
QString Person::getRole(){
    return role;
}
QString Person::getTen(){
    return ten;
}
int Person::getTuoi(){
    return tuoi;
}
QString Person::getGioiTinh(){
    return gioiTinh;
}
bool Person::check(QString tk, QString mk){
    if(tk==taiKhoan && mk==matKhau) return true;
    return false;
}


