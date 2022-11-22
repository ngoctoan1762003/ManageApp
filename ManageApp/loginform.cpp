#include "loginform.h"
#include "ui_loginform.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

LogInForm::LogInForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LogInForm)
{
    ui->setupUi(this);
    setWindowTitle("Đăng nhập");
    manager.loadTaiKhoan();
}

LogInForm::~LogInForm()
{
    delete ui;
}

void LogInForm::on_confirmButton_clicked()
{
    for(int i=0; i<manager.employer.GetSize(); i++){
        if(ui->taiKhoanLine->text()==manager.employer.GetNode(i)->value->getTaiKhoan()){
            MainWindow* w = new MainWindow;
            w->resize(1800,950);
            w->show();
            this->close();
        }
        if(ui->taiKhoanLine->text()==manager.employee.GetNode(i)->value->getTaiKhoan()){
            MainWindow* w = new MainWindow;
            w->resize(1800,950);
            w->show();
            w->setPermit(1);
            this->close();
        }
    }
}

