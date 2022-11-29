#ifndef ADDTAIKHOANFORM_H
#define ADDTAIKHOANFORM_H

#include <QDialog>
#include "employer.h"
#include "employee.h"
#include "person.h"

namespace Ui {
class AddTaiKhoanForm;
}

class AddTaiKhoanForm : public QDialog
{
    Q_OBJECT

public:
    explicit AddTaiKhoanForm(QWidget *parent = nullptr);
    ~AddTaiKhoanForm();
    Person *person;

signals:
    void AddTaiKhoan(Person *person);

private slots:
    void on_buttonBox_accepted();

private:
    Ui::AddTaiKhoanForm *ui;
};

#endif // ADDTAIKHOANFORM_H
