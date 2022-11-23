#ifndef REVIEW_H
#define REVIEW_H

#include "khachhang.h"
#include "linkedlist.h"
#include <QDialog>

namespace Ui {
class Review;
}

class Review : public QDialog
{
    Q_OBJECT

public:
    explicit Review(QWidget *parent = nullptr);
    ~Review();
    void Display(QString, QString, QString, LinkedList<KhachHang>*&);

private slots:
    void on_statusButton_clicked();

    void on_clientButton_clicked();

private:
    Ui::Review *ui;
};

#endif // REVIEW_H
