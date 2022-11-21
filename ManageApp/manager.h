#ifndef MANAGER_H
#define MANAGER_H
#include "SaveDay.h"
#include "monhang.h"
#include "node.h"
#include "linkedlist.h"
#include <fstream>

class Manager
{
    int size;

public:
    static int tongDoanhThu;
    LinkedList<SaveDay> saveDayArr;
    LinkedList<MonHang> monHang;
    Node<MonHang>* addNodeMonHang;
    MonHang* addMonHang;
    Node<SaveDay>* addSaveDay=new Node<SaveDay>;

    Manager();
    void loadMonHang();
    void saveMonHang();
    void addMonHangToArr(MonHang*);
    MonHang* GetMonHang(string name);
    //Manager *manager;
};

#endif // MANAGER_H
