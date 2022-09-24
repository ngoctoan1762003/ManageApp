#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include <vector>
#include "monhang.h"
#include "hoadonwindow.h"

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

    int sum=0;
    float finalsum=0;
    //QTableWidget table= ui->hoaDon;
    MonHang *monHangChon;
    MonHang *traSua = new MonHang(20000, "TraSua");
    MonHang *kemCheese = new MonHang(15000, "Kem Cheese");
    MonHang *traDao = new MonHang(22000, "Tra Dao");
    MonHang *xucXich= new MonHang(10000, "Xuc Xich");

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_traSuaChoose_toggled(bool checked);

    void on_addButton_clicked();

    void on_kemCheeseChoose_toggled(bool checked);

    void on_traDaoChoose_toggled(bool checked);

    void on_thanhToanButton_clicked();

private:
    Ui::MainWindow *ui;
    HoaDonWindow *hoaDonWindow;
};
#endif // MAINWINDOW_H
