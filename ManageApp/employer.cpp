#include "employer.h"

Employer::Employer()
{
    role="Employer";
    taiKhoan="";
    matKhau="";
}
QString Employer::getThongTin(){
    QString temp="";
    temp.append("Tên: ");
    temp.append(ten);
    temp.append("\nTuổi: ");
    temp.append(QString::number(tuoi));
    temp.append("\nGiới tính: ");
    temp.append(QString::number(tuoi));
    temp.append("\nTài khoản: ");
    temp.append(taiKhoan);
    temp.append("\nMật khẩu: ");
    temp.append(matKhau);
    return temp;
}
