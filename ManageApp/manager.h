#ifndef MANAGER_H
#define MANAGER_H
#include "SaveDay.h"
#include "monhang.h"
#include <fstream>

class Manager
{
public:
    vector<SaveDay> saveDayArr;
    Manager();
    void loadMonHang();
    //Manager *manager;
};

#endif // MANAGER_H
