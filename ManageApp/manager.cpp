#include "manager.h"

Manager::Manager()
{

}
void Manager::loadMonHang(){
    addMonHang=new MonHang;
    ifstream infile;
    infile.open("./SaleData.txt", std::ios::in);
    int n;
    int ma;
    int gia;
    string ten;
    string donViTinh;
    string loaiHang;
    infile>>n;
    for(int i=0; i<n; i++){
        infile>>ma;
        addMonHang->setMa(ma);
        infile>>ten;
        addMonHang->setTen(QString::fromStdString(ten));
        infile>>gia;
        addMonHang->setGia(gia);
    }

    addNodeMonHang=new Node<MonHang>;
    addNodeMonHang->CreateNode();
    addNodeMonHang->value=new MonHang;
    *addNodeMonHang->value=*addMonHang;

    monHang.AddTail(addNodeMonHang);
}
