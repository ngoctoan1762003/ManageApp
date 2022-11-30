#ifndef EDITTAIKHOAN_H
#define EDITTAIKHOAN_H

#include <QDialog>
#include "person.h"
#include "employer.h"
#include "employee.h"

namespace Ui {
class EditTaiKhoan;
}

class EditTaiKhoan : public QDialog
{
    Q_OBJECT


public:
    Person *person;
    explicit EditTaiKhoan(QWidget *parent = nullptr);
    ~EditTaiKhoan();
    void Display();

signals:

    void Edit(Person *person);

private slots:
    void on_buttonBox_accepted();

private:
    Ui::EditTaiKhoan *ui;
};

#endif // EDITTAIKHOAN_H
