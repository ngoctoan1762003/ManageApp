#ifndef MANAGER_H
#define MANAGER_H
#include "SaveDay.h"
#include "monhang.h"
#include "node.h"
#include "linkedlist.h"
#include <fstream>

class Manager
{
public:
    LinkedList<SaveDay> saveDayArr;
    LinkedList<MonHang> monHang;
    Node<MonHang>* addNodeMonHang;
    MonHang* addMonHang;
    Node<SaveDay>* addSaveDay=new Node<SaveDay>;
    Manager();
    void loadMonHang();
    //Manager *manager;
};

#endif // MANAGER_H
