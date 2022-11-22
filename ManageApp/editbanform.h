#ifndef EDITBANFORM_H
#define EDITBANFORM_H

#include "ban.h"
#include "linkedlist.h"
#include "addbanform.h"
#include <QDialog>

namespace Ui {
class EditBanForm;
}

class EditBanForm : public QDialog
{
    Q_OBJECT

public:
    explicit EditBanForm(QWidget *parent = nullptr);
    ~EditBanForm();
    void Display(LinkedList<Ban>*&);

private slots:
    void on_ngoaiSanButton_clicked();

    void on_trongNhaButton_clicked();

    void on_lau2Button_clicked();

    void on_addButton_clicked();

    void on_DeleteButton_clicked();

signals:
    void AddBanToArr(int, QString);

    void DeleteBan(int);

public slots:

    void AddBan(QString);
private:
    Ui::EditBanForm *ui;
};

#endif // EDITBANFORM_H
