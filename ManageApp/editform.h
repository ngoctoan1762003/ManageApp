#ifndef EDITFORM_H
#define EDITFORM_H

#include <QDialog>
#include "linkedlist.h"
#include "monhang.h"
#include "addform.h"
#include "resetprop.h"
#include "searchform.h"

namespace Ui {
class EditForm;
}

class EditForm : public QDialog
{
    Q_OBJECT

    LinkedList<MonHang> monHang;
    LinkedList<MonHang> selected;

public:
    explicit EditForm(QWidget *parent = nullptr);
    ~EditForm();

    void Display(int, LinkedList<MonHang>*&);

    void Update();

    bool Compare(QString, QString);

signals:

    void newMonHang(MonHang*);
    void deleteMonHang(string);
    void editMonHang(QString, MonHang*);

public slots:

    void AddMonHangToTable(MonHang*);
    void EditMonHangToTable(MonHang*);
    void Search(QString);

private slots:

    void on_addButton_clicked();

    void on_exitButton_clicked();

    void on_minusButton_clicked();

    void on_editButton_clicked();

    void on_findButton_clicked();

private:
    AddForm *addForm;
    ReSetProp *resetProp;
    Ui::EditForm *ui;
};

#endif // EDITFORM_H
