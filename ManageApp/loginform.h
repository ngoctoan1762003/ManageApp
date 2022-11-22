#ifndef LOGINFORM_H
#define LOGINFORM_H

#include "manager.h"
#include <QMainWindow>

namespace Ui {
class LogInForm;
}

class LogInForm : public QMainWindow
{
    Q_OBJECT

public:
    Manager manager;
    explicit LogInForm(QWidget *parent = nullptr);
    ~LogInForm();

private slots:

    void on_confirmButton_clicked();

private:
    Ui::LogInForm *ui;
};

#endif // LOGINFORM_H
