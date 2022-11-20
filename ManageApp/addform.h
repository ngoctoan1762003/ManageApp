#ifndef ADDFORM_H
#define ADDFORM_H

#include <QDialog>
#include "monhang.h"

namespace Ui {
class AddForm;
}

class AddForm : public QDialog
{
    Q_OBJECT

public:
    explicit AddForm(QWidget *parent = nullptr);
    ~AddForm();

signals:

    void addMH(MonHang*);

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::AddForm *ui;
};

#endif // ADDFORM_H
