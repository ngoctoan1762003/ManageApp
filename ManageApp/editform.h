#ifndef EDITFORM_H
#define EDITFORM_H

#include <QDialog>
#include "linkedlist.h"
#include "monhang.h"
#include "addform.h"

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

public slots:

    void AddMonHangToTable(MonHang*);

private slots:

    void on_addButton_clicked();

    void on_exitButton_clicked();

    void on_minusButton_clicked();

private:
    AddForm *addForm;
    Ui::EditForm *ui;
};

#endif // EDITFORM_H
