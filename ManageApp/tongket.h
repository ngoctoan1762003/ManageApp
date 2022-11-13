#ifndef TONGKET_H
#define TONGKET_H

#include <QDialog>

namespace Ui {
class TongKet;
}

class TongKet : public QDialog
{
    Q_OBJECT

public:
    explicit TongKet(QWidget *parent = nullptr);
    ~TongKet();
    void Display(int, int, int);

private:
    Ui::TongKet *ui;
};

#endif // TONGKET_H
