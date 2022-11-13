#include "manager.h"

Manager::Manager()
{

}
void Manager::loadMonHang(){
    ifstream infile;
    infile.open("./SaleData.txt", std::ios::in);
    int n;
    MonHang monHang;
    int ma;
    int gia;
    string ten;
    string donViTinh;
    string loaiHang;
    infile>>n;
    for(int i=0; i<n; i++){
        infile>>ma;
        infile>>ten;
        infile>>gia;
    }
}
