#ifndef MANAGER_H
#define MANAGER_H
#include "SaveDay.h"
#include "monhang.h"
#include "node.h"
#include "linkedlist.h"
#include "ban.h"
#include <fstream>

class Manager
{
    int size;
    int SLBan;
public:
    static int tongDoanhThu;
    LinkedList<SaveDay> saveDayArr;
    LinkedList<MonHang> monHang;
    LinkedList<Ban> ban;
    Node<MonHang>* addNodeMonHang;
    MonHang* addMonHang;
    Node<Ban>* addNodeBan;
    Ban* addBan;
    Node<SaveDay>* addSaveDay=new Node<SaveDay>;

    Manager();
    void loadBan();

    void loadMonHang();
    void saveMonHang();
    void addMonHangToArr(MonHang*);
    MonHang* GetMonHang(string name);
    Ban* GetBan(int ma);
    //Manager *manager;
};

#endif // MANAGER_H
