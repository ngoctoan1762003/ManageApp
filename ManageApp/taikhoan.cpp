#include "taikhoan.h"

TaiKhoan::TaiKhoan()
{
    taiKhoan="";
    matKhau="";
}
void TaiKhoan::setTaiKhoan(QString tk){
    taiKhoan=tk;
}
void TaiKhoan::setMatKhau(QString mk){
    matKhau=mk;
}
QString TaiKhoan::getTaiKhoan(){
    return taiKhoan;
}
QString TaiKhoan::getMatKhau(){
    return matKhau;
}
bool TaiKhoan::check(QString tk, QString mk){
    if(tk==taiKhoan && mk==matKhau) return true;
    return false;
}
