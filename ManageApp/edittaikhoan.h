#ifndef EDITTAIKHOAN_H
#define EDITTAIKHOAN_H

#include <QDialog>

namespace Ui {
class EditTaiKhoan;
}

class EditTaiKhoan : public QDialog
{
    Q_OBJECT

public:
    explicit EditTaiKhoan(QWidget *parent = nullptr);
    ~EditTaiKhoan();

private:
    Ui::EditTaiKhoan *ui;
};

#endif // EDITTAIKHOAN_H
