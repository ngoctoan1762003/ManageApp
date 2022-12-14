#include "loginform.h"
#include "qdebug.h"
#include "ui_loginform.h"
#include "mainwindow.h"

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
    int i;
    bool isValid=false;
    for(i=0; i<manager.employer.GetSize(); i++){
        if(manager.employer.GetNode(i)->value->check(ui->taiKhoanLine->text(),ui->matKhauLine->text())){
        //if(ui->taiKhoanLine->text()==manager.employer.GetNode(i)->value->getTaiKhoan() && ui->matKhauLine->text()==manager.employer.GetNode(i)->value->getMatKhau()){
            MainWindow* w = new MainWindow;
            w->resize(1800,950);
            w->show();
            w->setPermit(manager.employer.GetNode(i)->value->getRole());
            isValid=true;
            this->close();
        }
    }
    for(i=0; i<manager.employee.GetSize(); i++){
        if(manager.employee.GetNode(i)->value->check(ui->taiKhoanLine->text(),ui->matKhauLine->text())){
        //if(ui->taiKhoanLine->text()==manager.employee.GetNode(i)->value->getTaiKhoan() && ui->matKhauLine->text()==manager.employee.GetNode(i)->value->getMatKhau()){
            MainWindow* w = new MainWindow;
            w->resize(1800,950);
            w->show();
            w->setPermit(manager.employee.GetNode(i)->value->getRole());
            isValid=true;
            this->close();
        }
    }
    if(isValid==false) QMessageBox::about(this, "Lỗi", "Tài khoản hoặc mật khẩu sai");
}

