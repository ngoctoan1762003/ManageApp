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
    int saveGiamGia;
    int saveChietKhau;
    LinkedList<int> saveSoLuong;
    LinkedList<MonHang> saveMonHang;

    Save();
    void createNewSaveObject(int, int, int , int, LinkedList<int>*&, LinkedList<MonHang>*&);
    int GetSaveSoLuongHang();
    int GetSaveTongTien();
    void GetSaveSoLuong(LinkedList<int>*&);
    void GetSaveMonHang(LinkedList<MonHang>*&);
    int GetSaveGiamGia();
    int GetSaveChietKhau();
};

#endif // SAVE_H
