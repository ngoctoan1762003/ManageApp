#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include <QListWidget>
#include <QDateTime>
#include <vector>
#include "monhang.h"
#include "hoadonwindow.h"
#include "save.h"
#include "SaveDay.h"
#include "manager.h"
#include "tongket.h"
#include "linkedlist.h"
#include "editform.h"
#include "review.h"

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
    /*MonHang *traSua = new MonHang;
    MonHang *traTac = new MonHang;
    MonHang *traDao = new MonHang;
    MonHang *xucXich= new MonHang;*/

    SaveDay saveDay;
    Manager manager;
    int tongDoanhThu=0;
    int tongSoHD=0;
    int soNgay=0;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    //void on_traSuaChoose_toggled(bool checked);

    void on_addButton_clicked();

    //void on_traTacChoose_toggled(bool checked);

    //void on_traDaoChoose_toggled(bool checked);

    void on_thanhToanButton_clicked();

    void on_minusButton_clicked();

    void on_finishDayButton_clicked();

    void on_taoMoiButton_clicked();

    void Update();

    void UpdateMH();

    void on_pushButtonFood_clicked();

    void on_pushButtonDrink_clicked();

    void on_editButton_clicked();

    void on_reviewButton_clicked();

    void on_pushButtonGasDrink_clicked();

    void on_pushButtonCoffee_clicked();

    void on_traList_itemClicked(QListWidgetItem *item);

    void on_nuocNgotList_itemClicked(QListWidgetItem *item);

    void on_caPheList_itemClicked(QListWidgetItem *item);

    void on_doAnList_itemClicked(QListWidgetItem *item);

public slots:

    void deleteMonHang(string);

    void addMonHang(MonHang*);

    void editMonHang(int,MonHang*);

private:
    Ui::MainWindow *ui;
    HoaDonWindow *hoaDonWindow;
    TongKet *tongKet;
    EditForm *editForm;
};

#endif // MAINWINDOW_H
