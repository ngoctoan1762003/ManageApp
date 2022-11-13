#ifndef MONHANG_H
#define MONHANG_H

#include <string>
#include <QString>
using namespace std;

class MonHang
{
    int ma;
    int gia;
    QString ten;
    int chiSoTrongHD;
    string donViTinh;
    string loaiHang;
public:
    MonHang(int ma=0, int gia=0, QString ten="Missing", string donViTinh="Missing", string loaiHang="Missing");
    int getMa(){
        return ma;
    }
    int getGia(){
        return gia;
    }
    QString getTen(){
        return ten;
    }
    int getChiSoTrongHD(){
        return chiSoTrongHD;
    }
    string getDonViTinh(){
        return donViTinh;
    }
    string getLoaiHang(){
        return loaiHang;
    }
    void setChiSoTrongHD(int index){
        chiSoTrongHD=index;
    }
    void setMa(int ma){
        this->ma=ma;
    }
    void setTen(QString ten){
        this->ten=ten;
    }
    void setGia(int gia){
        this->gia=gia;
    }
    void setDonViTinh(string donVi){
        this->donViTinh=donVi;
    }
    void setLoaiHang(string loaiHang){
        this->loaiHang=loaiHang;
    }
    bool operator!=(MonHang);
};

#endif // MONHANG_H
