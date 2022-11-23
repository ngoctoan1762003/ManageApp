#ifndef KHACHHANG_H
#define KHACHHANG_H

#include <QString>

class KhachHang
{
private:
    int ma;
    QString ten;
    int diemTichLuy;
    int tongSoHD;
    int tongTien;
public:
    KhachHang();
    void setMa(int newMa);
    void setTen(QString newTen);
    void setDiem(int diem);
    int getMa();
    QString getTen();
    int getDiem();
    void addTongHD();
    void addTongTien(int);
    int getTongHD();
    int getTongTien();
};

#endif // KHACHHANG_H
