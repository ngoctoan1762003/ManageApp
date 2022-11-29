#include "taikhoanform.h"
#include "ui_taikhoanform.h"

TaiKhoanForm::TaiKhoanForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TaiKhoanForm)
{
    ui->setupUi(this);
}

TaiKhoanForm::~TaiKhoanForm()
{
    delete ui;
}

void TaiKhoanForm::Display(LinkedList<Employer>*& employer, LinkedList<Employee>*& employee){
    for(int i=0; i<employer->GetSize(); i++){
        this->employer.AddTail(employer->GetNode(i));
    }
    for(int i=0; i<employee->GetSize(); i++){
        this->employee.AddTail(employee->GetNode(i));
    }
    Update();
}

void TaiKhoanForm::Update(){
    for(int i=0; i<employer.GetSize(); i++){
        ui->employerList->addItem(employer.GetNode(i)->value->getTen());
    }
    for(int i=0; i<employee.GetSize(); i++){
        ui->employeeList->addItem(employee.GetNode(i)->value->getTen());
    }
}

void TaiKhoanForm::on_chuButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void TaiKhoanForm::on_nhanVienButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void TaiKhoanForm::on_employerList_itemClicked(QListWidgetItem *item)
{
    ui->thongTin->setText(employer.GetNode(ui->employerList->currentRow())->value->getThongTin());
}


void TaiKhoanForm::on_employeeList_itemClicked(QListWidgetItem *item)
{
    ui->thongTin->setText(employee.GetNode(ui->employeeList->currentRow())->value->getThongTin());
}


void TaiKhoanForm::on_addButton_clicked()
{
    AddTaiKhoanForm *addTaiKhoanForm=new AddTaiKhoanForm(this);
    QObject::connect(addTaiKhoanForm,SIGNAL(AddTaiKhoan(Person*)), this, SLOT(AddTaiKhoan(Person*)));
    addTaiKhoanForm->show();
}

void TaiKhoanForm::AddTaiKhoan(Person *person){
    if(person->getRole()=="Employer"){
        ui->employerList->addItem(person->getTen());
    }
    else{
        ui->employeeList->addItem(person->getTen());
    }

    emit(AddTaiKhoanToArr(person));
}


void TaiKhoanForm::on_editButton_clicked()
{
    EditTaiKhoan *editTaiKhoan=new EditTaiKhoan;
    editTaiKhoan->show();
}

