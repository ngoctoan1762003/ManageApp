#ifndef TAIKHOANFORM_H
#define TAIKHOANFORM_H

#include <QDialog>
#include <QListWidget>
#include "linkedlist.h"
#include "employee.h"
#include "employer.h"
#include "addtaikhoanform.h"
#include "edittaikhoan.h"

namespace Ui {
class TaiKhoanForm;
}

class TaiKhoanForm : public QDialog
{
    Q_OBJECT
    LinkedList<Employer> employer;
    LinkedList<Employee> employee;

public:
    explicit TaiKhoanForm(QWidget *parent = nullptr);
    ~TaiKhoanForm();
    void Display(LinkedList<Employer>*&, LinkedList<Employee>*&);
    void Update();

signals:
    void AddTaiKhoanToArr(Person *person);

public slots:

    void AddTaiKhoan(Person *person);

private slots:
    void on_chuButton_clicked();

    void on_nhanVienButton_clicked();

    void on_employerList_itemClicked(QListWidgetItem *item);

    void on_employeeList_itemClicked(QListWidgetItem *item);

    void on_addButton_clicked();

    void on_editButton_clicked();

private:
    Ui::TaiKhoanForm *ui;
};

#endif // TAIKHOANFORM_H
