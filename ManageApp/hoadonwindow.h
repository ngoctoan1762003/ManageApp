#ifndef HOADONWINDOW_H
#define HOADONWINDOW_H

#include <QDialog>
#include <iomanip>
#include <string>
#include <fstream>
#include "monhang.h"
#include "linkedlist.h"

using namespace std;

namespace Ui {
class HoaDonWindow;
}

class HoaDonWindow : public QDialog
{
    Q_OBJECT

public:
    explicit HoaDonWindow(QWidget *parent = nullptr);
    ~HoaDonWindow();
    void Display(QString, int, LinkedList<int>*&, LinkedList<MonHang>*&, LinkedList<int>*&);

private slots:


private:
    Ui::HoaDonWindow *ui;
};

#endif // HOADONWINDOW_H
