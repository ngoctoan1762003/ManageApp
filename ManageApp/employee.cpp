#include "employee.h"
#include <QDebug>

Employee::Employee()
{
    role="Employee";
    taiKhoan="";
    matKhau="";
}
void Employee::setNgayVaoLam(QString ngay){
    ngayVaoLam=ngay;
}
QString Employee::getNgayVaoLam(){
    return ngayVaoLam;
}
QString Employee::getThongTin(){
    QString temp="";
    temp.append("Tên: ");
    temp.append(ten);
    temp.append("\nTuổi: ");
    qDebug()<<tuoi;
    temp.append(QString::number(tuoi));
    temp.append("\nGiới tính: ");
    temp.append(gioiTinh);
    temp.append("\nNgày vào làm: ");
    temp.append(ngayVaoLam);
    temp.append("\nTài khoản: ");
    temp.append(taiKhoan);
    temp.append("\nMật khẩu: ");
    temp.append(matKhau);
    return temp;
}
