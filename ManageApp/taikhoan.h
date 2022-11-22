#ifndef TAIKHOAN_H
#define TAIKHOAN_H
#include <QString>

class TaiKhoan
{
    QString taiKhoan;
    QString matKhau;
public:
    TaiKhoan();
    void setTaiKhoan(QString);
    void setMatKhau(QString);
    QString getTaiKhoan();
    QString getMatKhau();
    bool check(QString, QString);
};

#endif // TAIKHOAN_H
