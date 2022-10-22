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

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    int numberOfRow=0;

    vector<QString> tenHangChon;
    vector<int> soLuong;
    vector<int> giaHangChon;
    vector<Save> saveObject;

    int sum=0;
    float finalsum=0;
    //QTableWidget table= ui->hoaDon;
    MonHang *monHangChon;
    MonHang *traSua = new MonHang(20000, "Trà Sữa");
    MonHang *traTac = new MonHang(15000, "Trà Tắc");
    MonHang *traDao = new MonHang(22000, "Trà Đào");
    MonHang *xucXich= new MonHang(10000, "Xúc Xích");

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

    void writeFile();

    void readFile();

    void on_finishDayButton_clicked();

    void on_taoMoiButton_clicked();

    void Update();

    void on_pushButtonFood_clicked();

    void on_pushButtonDrink_clicked();

private:
    Ui::MainWindow *ui;
    HoaDonWindow *hoaDonWindow;
};
#endif // MAINWINDOW_H
