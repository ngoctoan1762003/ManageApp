#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "person.h"

class Employee:public Person
{
    QString ngayVaoLam;
public:
    Employee();
    void setNgayVaoLam(QString);
    QString getNgayVaoLam();
    QString getThongTin();
};

#endif // EMPLOYEE_H
