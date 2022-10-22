#include "save.h"
#include <QDebug>
Save::Save()
{

}

void Save::createNewSaveObject(int soLuongHang, int tongTien, vector<int> saveSoLuong, vector<QString> saveTenHang){
    //Save newSave;
    this->soLuongHang=soLuongHang;
    this->tongTien=tongTien;
    this->saveSoLuong=saveSoLuong;
    this->saveTenHang=saveTenHang;
    //return newSave;
}
int Save::GetSoLuongHang(){
    return this->soLuongHang;
}
int Save::GetTongTien(){
    return this->tongTien;
}
vector<int> Save::GetSaveSoLuong(){
    return this->saveSoLuong;
}
vector<QString> Save::GetSaveTenHang(){
    return this->saveTenHang;
}
