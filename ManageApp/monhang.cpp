#include "monhang.h"


MonHang::MonHang(int ma, int gia, QString ten, string donViTinh, string loaiHang)
{
    this->ma=ma;
    this->gia=gia;
    this->ten=ten;
    this->donViTinh=donViTinh;
    this->loaiHang=loaiHang;
}
bool MonHang::operator!=(MonHang m){
    if(this->ma==m.ma) return false;
    return true;
}
