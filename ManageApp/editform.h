#ifndef EDITFORM_H
#define EDITFORM_H

#include <QDialog>
#include "linkedlist.h"
#include "monhang.h"
#include "addform.h"
#include "resetprop.h"

namespace Ui {
class EditForm;
}

class EditForm : public QDialog
{
    Q_OBJECT

public:
    explicit EditForm(QWidget *parent = nullptr);
    ~EditForm();

    void Display(int, LinkedList<MonHang>*&);

signals:

    void newMonHang(MonHang*);
    void deleteMonHang(string);
    void editMonHang(int, MonHang*);

public slots:

    void AddMonHangToTable(MonHang*);
    void EditMonHangToTable(MonHang*);

private slots:

    void on_addButton_clicked();

    void on_exitButton_clicked();

    void on_minusButton_clicked();

    void on_editButton_clicked();

private:
    AddForm *addForm;
    ReSetProp *resetProp;
    Ui::EditForm *ui;
};

#endif // EDITFORM_H
