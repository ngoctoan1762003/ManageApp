#ifndef RESETPROP_H
#define RESETPROP_H
#include "monhang.h"

#include <QDialog>

namespace Ui {
class ReSetProp;
}

class ReSetProp : public QDialog
{
    Q_OBJECT

public:
    explicit ReSetProp(QWidget *parent = nullptr);
    ~ReSetProp();
    void Display(QString, QString, QString, QString);

signals:

    void ResetProp(MonHang*);

private slots:
    void on_buttonBox_accepted();

private:
    Ui::ReSetProp *ui;
};

#endif // RESETPROP_H
