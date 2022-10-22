#ifndef SAVE_H
#define SAVE_H
#include <vector>
#include <QString>

using namespace std;

class Save
{
    int soLuongHang;
    int tongTien;
    vector<int> saveSoLuong;
    vector<QString> saveTenHang;
public:
    Save();
    void createNewSaveObject(int , int, vector<int>, vector<QString>);
    int GetSoLuongHang();
    int GetTongTien();
    vector<int> GetSaveSoLuong();
    vector<QString> GetSaveTenHang();
};

#endif // SAVE_H
