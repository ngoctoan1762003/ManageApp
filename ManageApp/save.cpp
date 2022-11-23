#include "save.h"
#include <QDebug>
Save::Save()
{

}

void Save::createNewSaveObject(int chietKhau, int giamGia, int soLuongHang, int tongTien, LinkedList<int>*& saveSoLuong, LinkedList<MonHang>*& saveMonHang){
    //Save newSave;
    this->saveSoLuongHang=soLuongHang;
    this->saveTongTien=tongTien;
    this->saveChietKhau=chietKhau;
    this->saveGiamGia=giamGia;
    for(int i=0; i<soLuongHang; i++){
            this->saveSoLuong.AddTail(saveSoLuong->GetNode(i));
            this->saveMonHang.AddTail(saveMonHang->GetNode(i));
    }

    //return newSave;
}
int Save::GetSaveSoLuongHang(){
    return this->saveSoLuongHang;
}
int Save::GetSaveTongTien(){
    return this->saveTongTien;
}
void Save::GetSaveSoLuong(LinkedList<int>*& a){
    for(int i=0; i<saveSoLuongHang; i++){
        *a->GetNode(i)->value=*saveSoLuong[i].value;
    }
}
void Save::GetSaveMonHang(LinkedList<MonHang>*& a){
    for(int i=0; i<saveSoLuongHang; i++){
        *a->GetNode(i)->value=*saveSoLuong[i].value;
    }
}
int Save::GetSaveGiamGia(){
    return saveGiamGia;
}
int Save::GetSaveChietKhau(){
   return saveChietKhau;
}
