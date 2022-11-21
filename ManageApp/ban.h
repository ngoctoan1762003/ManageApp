#ifndef BAN_H
#define BAN_H

#include <QString>
#include <iostream>

using namespace std;

class Ban
{
private:
    int ma;
    QString viTri;
    bool isUsing;
public:
    Ban();
    void setMa(int);
    int getMa();
    void setViTri(QString);
    QString getViTri();
    void setState(bool);
    bool getState();
};

#endif // BAN_H
