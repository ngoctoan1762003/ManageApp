#ifndef MANAGER_H
#define MANAGER_H
#include "SaveDay.h"
#include "monhang.h"
#include "node.h"
#include "linkedlist.h"
#include "ban.h"
#include "taikhoan.h"
#include "khachhang.h"
#include <fstream>

class Manager
{
    int size;
    int SLBan;
public:
    LinkedList<TaiKhoan> employer;
    LinkedList<TaiKhoan> employee;

    LinkedList<KhachHang> client;

    LinkedList<QString> maGiamGia;

    static int tongDoanhThu;
    LinkedList<SaveDay> saveDayArr;
    LinkedList<MonHang> monHang;
    LinkedList<Ban> ban;
    QString *addMa;
    Node<QString>* addNodeMa;
    Node<MonHang>* addNodeMonHang;
    MonHang* addMonHang;
    Node<Ban>* addNodeBan;
    TaiKhoan* addTaiKhoan;
    Node<TaiKhoan>* addNodeTaiKhoan;
    Ban* addBan;
    Node<SaveDay>* addSaveDay=new Node<SaveDay>;

    Manager();
    void loadBan();
    void loadTaiKhoan();
    void loadMaGiamGia();
    void loadMonHang();
    void saveMonHang();
    void saveBan();
    void saveKhachHang();
    void addMonHangToArr(MonHang*);
    MonHang* GetMonHang(string name);
    Ban* GetBan(int ma);
    //Manager *manager;
};

#endif // MANAGER_H
