#ifndef PERSON_H
#define PERSON_H
#include <QString>

class Person
{
protected:
    QString role;
    QString taiKhoan;
    QString matKhau;
    QString ten;
    int tuoi;
    QString gioiTinh;

public:
    Person();
    void setRole(QString);
    void setTaiKhoan(QString);
    void setMatKhau(QString);
    void setTen(QString);
    void setTuoi(int);
    void setGioiTinh(QString);
    QString getTaiKhoan();
    QString getMatKhau();
    QString getRole();
    QString getTen();
    int getTuoi();
    QString getGioiTinh();
    bool check(QString, QString);
    virtual QString getThongTin()=0;
};

#endif // PERSON_H
