#ifndef SAVE_H
#define SAVE_H
#include <vector>
#include "linkedlist.h"
#include "monhang.h"
#include "linkedlist.h"
#include <QString>

using namespace std;

class Save
{
    public:
    int saveSoLuongHang;
    int saveTongTien;
    LinkedList<int> saveSoLuong;
    LinkedList<MonHang> saveMonHang;

    Save();
    void createNewSaveObject(int , int, LinkedList<int>*&, LinkedList<MonHang>*&);
    int GetSaveSoLuongHang();
    int GetSaveTongTien();
    void GetSaveSoLuong(LinkedList<int>*&);
    void GetSaveMonHang(LinkedList<MonHang>*&);
};

#endif // SAVE_H
