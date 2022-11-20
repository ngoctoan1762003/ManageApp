#ifndef EDITFROM_H
#define EDITFROM_H

#include <QWidget>

namespace Ui {
class EditFrom;
}

class EditFrom : public QWidget
{
    Q_OBJECT

public:
    explicit EditFrom(QWidget *parent = nullptr);
    ~EditFrom();

private:
    Ui::EditFrom *ui;
};

#endif // EDITFROM_H
