#include "taikhoanform.h"
#include "ui_taikhoanform.h"

TaiKhoanForm::TaiKhoanForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TaiKhoanForm)
{
    setWindowTitle("Quản lý tài khoản");
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
    ui->employeeList->clear();
    ui->employerList->clear();
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
    if(ui->employeeList->currentItem()==NULL && ui->employerList->currentItem()==NULL){
        QMessageBox::about(this,"Lỗi", "Chưa chọn tài khoản");
        return;
    }
    EditTaiKhoan *editTaiKhoan=new EditTaiKhoan;
    QObject::connect(editTaiKhoan, SIGNAL(Edit(Person*)), this, SLOT(Edit(Person*)));
    editTaiKhoan->show();
    if(ui->stackedWidget->currentIndex()==0){
        editTaiKhoan->person=new Employer;
        editTaiKhoan->person=employer.GetNode(ui->employerList->currentRow())->value;
    }
    else{
        editTaiKhoan->person=new Employee;
        editTaiKhoan->person=employee.GetNode(ui->employeeList->currentRow())->value;
    }

    editTaiKhoan->Display();
}

void TaiKhoanForm::Edit(Person *person){
    if(person->getRole()=="Employer"){
        Employer *tempEmployer=employer.GetNode(ui->employerList->currentRow())->value;
        emit(EditTaiKhoanToArr(ui->employerList->currentItem()->text(), person));
        tempEmployer->setTen(person->getTen());
        tempEmployer->setTuoi(person->getTuoi());
        tempEmployer->setGioiTinh(person->getGioiTinh());
        tempEmployer->setTaiKhoan(person->getTaiKhoan());
        tempEmployer->setMatKhau(person->getMatKhau());
    }
    else{
        Employee *tempEmployee=employee.GetNode(ui->employeeList->currentRow())->value;
        emit(EditTaiKhoanToArr(ui->employeeList->currentItem()->text(), person));
        tempEmployee->setTen(person->getTen());
        tempEmployee->setTuoi(person->getTuoi());
        tempEmployee->setGioiTinh(person->getGioiTinh());
        tempEmployee->setTaiKhoan(person->getTaiKhoan());
        tempEmployee->setMatKhau(person->getMatKhau());
    }
    Update();
}


void TaiKhoanForm::on_deleteButton_clicked()
{
    if(ui->employeeList->currentItem()==NULL && ui->employerList->currentItem()==NULL){
        QMessageBox::about(this,"Lỗi", "Chưa chọn tài khoản");
        return;
    }
    if(ui->stackedWidget->currentIndex()==0 && ui->employerList->currentItem()!=NULL && ui->employerList->count()<=1){
        QMessageBox::about(this, "Lỗi", "Phải có ít nhất 1 tài khoản quản lý");
        return;
    }
    QString name;
    QString role;
    if(ui->stackedWidget->currentIndex()==0){
        role="Employer";
        name=ui->employerList->takeItem(ui->employerList->currentRow())->text();
    }
    else{
        role="Employee";
        name=ui->employeeList->takeItem(ui->employeeList->currentRow())->text();
    }
    ui->thongTin->clear();
    emit(DeleteTaiKhoan(name, role));
}

