#ifndef EMPLOYER_H
#define EMPLOYER_H
#include "person.h"

class Employer: public Person
{
public:
    Employer();
    QString getThongTin();
};

#endif // EMPLOYER_H
