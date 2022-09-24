#ifndef MONHANG_H
#define MONHANG_H

#include <string>
#include <QString>
using namespace std;

class MonHang
{
    int gia;
    QString ten;
    int chiSoTrongHD;
public:
    MonHang(int gia, QString ten);
    int getGia(){
        return gia;
    }
    QString getTen(){
        return ten;
    }
    int getChiSoTrongHD(){
        return chiSoTrongHD;
    }
    void setChiSoTrongHD(int index){
        chiSoTrongHD=index;
    }
};

#endif // MONHANG_H
