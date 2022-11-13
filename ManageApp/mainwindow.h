#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include <vector>
#include "monhang.h"
#include "hoadonwindow.h"
#include "save.h"
#include "SaveDay.h"
#include "manager.h"
#include "tongket.h"
#include "linkedlist.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    int numberOfRow=0;

    LinkedList<MonHang> tenHangChon;
    LinkedList<int> soLuong;
    LinkedList<int> giaHangChon;
    //vector<Save> saveObject;
    LinkedList<int>* tempsl;
    LinkedList<int>* tempgia;
    LinkedList<MonHang>* tempmh;

    Node<int>* nodei=new Node<int>;
    Node<int>* nodegia=new Node<int>;
    Node<MonHang>* node=new Node<MonHang>;
    Node<Save>* nodeSave=new Node<Save>;

    int sum=0;
    int sumDay=0;
    float finalsum=0;
    //QTableWidget table= ui->hoaDon;
    MonHang *monHangChon;
    MonHang *traSua = new MonHang(01, 20000, "Trà Sữa", "Ly", "Trà");
    MonHang *traTac = new MonHang(01, 15000, "Trà Tắc", "Ly", "Trà");
    MonHang *traDao = new MonHang(01, 22000, "Trà Đào", "Ly", "Trà");
    MonHang *xucXich= new MonHang(01, 10000, "Xúc Xích", "Cây", "Đồ ăn");

    SaveDay saveDay;
    Manager manager;
    int count=0;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_traSuaChoose_toggled(bool checked);

    void on_addButton_clicked();

    void on_traTacChoose_toggled(bool checked);

    void on_traDaoChoose_toggled(bool checked);

    void on_thanhToanButton_clicked();

    void on_minusButton_clicked();

    void readFile();

    void on_finishDayButton_clicked();

    void on_taoMoiButton_clicked();

    void Update();

    void on_pushButtonFood_clicked();

    void on_pushButtonDrink_clicked();

private:
    Ui::MainWindow *ui;
    HoaDonWindow *hoaDonWindow;
    TongKet *tongKet;
};

#endif // MAINWINDOW_H
