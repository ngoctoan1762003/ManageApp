#ifndef HOADONWINDOW_H
#define HOADONWINDOW_H

#include <QDialog>
#include <iomanip>
#include <string>

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
    void Display(int row, vector<int> soLuong, vector<QString> ten, vector<int> tongTien);

private:
    Ui::HoaDonWindow *ui;
};

#endif // HOADONWINDOW_H
