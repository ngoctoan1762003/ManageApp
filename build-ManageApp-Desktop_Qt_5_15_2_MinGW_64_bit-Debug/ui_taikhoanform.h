/********************************************************************************
** Form generated from reading UI file 'taikhoanform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAIKHOANFORM_H
#define UI_TAIKHOANFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaiKhoanForm
{
public:
    QLabel *label;
    QPushButton *chuButton;
    QPushButton *nhanVienButton;
    QColumnView *columnView;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QListWidget *employerList;
    QWidget *page_2;
    QListWidget *employeeList;
    QLabel *thongTin;
    QLabel *label_2;
    QPushButton *deleteButton;
    QPushButton *editButton;
    QPushButton *addButton;

    void setupUi(QDialog *TaiKhoanForm)
    {
        if (TaiKhoanForm->objectName().isEmpty())
            TaiKhoanForm->setObjectName(QString::fromUtf8("TaiKhoanForm"));
        TaiKhoanForm->resize(892, 603);
        label = new QLabel(TaiKhoanForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 20, 161, 61));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        chuButton = new QPushButton(TaiKhoanForm);
        chuButton->setObjectName(QString::fromUtf8("chuButton"));
        chuButton->setGeometry(QRect(30, 87, 101, 51));
        nhanVienButton = new QPushButton(TaiKhoanForm);
        nhanVienButton->setObjectName(QString::fromUtf8("nhanVienButton"));
        nhanVienButton->setGeometry(QRect(150, 90, 101, 51));
        columnView = new QColumnView(TaiKhoanForm);
        columnView->setObjectName(QString::fromUtf8("columnView"));
        columnView->setGeometry(QRect(30, 150, 831, 421));
        stackedWidget = new QStackedWidget(TaiKhoanForm);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(50, 170, 391, 381));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        employerList = new QListWidget(page);
        employerList->setObjectName(QString::fromUtf8("employerList"));
        employerList->setGeometry(QRect(20, 20, 351, 341));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        employeeList = new QListWidget(page_2);
        employeeList->setObjectName(QString::fromUtf8("employeeList"));
        employeeList->setGeometry(QRect(20, 20, 351, 341));
        stackedWidget->addWidget(page_2);
        thongTin = new QLabel(TaiKhoanForm);
        thongTin->setObjectName(QString::fromUtf8("thongTin"));
        thongTin->setGeometry(QRect(470, 220, 371, 331));
        QFont font1;
        font1.setPointSize(9);
        thongTin->setFont(font1);
        thongTin->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2 = new QLabel(TaiKhoanForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(500, 170, 331, 41));
        QFont font2;
        font2.setPointSize(12);
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignCenter);
        deleteButton = new QPushButton(TaiKhoanForm);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(760, 90, 101, 51));
        editButton = new QPushButton(TaiKhoanForm);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        editButton->setGeometry(QRect(640, 90, 101, 51));
        addButton = new QPushButton(TaiKhoanForm);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(520, 90, 101, 51));

        retranslateUi(TaiKhoanForm);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(TaiKhoanForm);
    } // setupUi

    void retranslateUi(QDialog *TaiKhoanForm)
    {
        TaiKhoanForm->setWindowTitle(QCoreApplication::translate("TaiKhoanForm", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TaiKhoanForm", "T\303\240i Kho\341\272\243n", nullptr));
        chuButton->setText(QCoreApplication::translate("TaiKhoanForm", "Ch\341\273\247", nullptr));
        nhanVienButton->setText(QCoreApplication::translate("TaiKhoanForm", "Nh\303\242n vi\303\252n", nullptr));
        thongTin->setText(QString());
        label_2->setText(QCoreApplication::translate("TaiKhoanForm", "Th\303\264ng tin", nullptr));
        deleteButton->setText(QCoreApplication::translate("TaiKhoanForm", "X\303\263a", nullptr));
        editButton->setText(QCoreApplication::translate("TaiKhoanForm", "Ch\341\273\211nh s\341\273\255a", nullptr));
        addButton->setText(QCoreApplication::translate("TaiKhoanForm", "Th\303\252m", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TaiKhoanForm: public Ui_TaiKhoanForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAIKHOANFORM_H
