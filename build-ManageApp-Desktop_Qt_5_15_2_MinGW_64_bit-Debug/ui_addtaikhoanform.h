/********************************************************************************
** Form generated from reading UI file 'addtaikhoanform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTAIKHOANFORM_H
#define UI_ADDTAIKHOANFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_AddTaiKhoanForm
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *ten;
    QLineEdit *tuoi;
    QLineEdit *taiKhoan;
    QLineEdit *matKhau;
    QComboBox *gioiTinh;
    QComboBox *loaiTaiKhoan;

    void setupUi(QDialog *AddTaiKhoanForm)
    {
        if (AddTaiKhoanForm->objectName().isEmpty())
            AddTaiKhoanForm->setObjectName(QString::fromUtf8("AddTaiKhoanForm"));
        AddTaiKhoanForm->resize(597, 470);
        buttonBox = new QDialogButtonBox(AddTaiKhoanForm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(220, 420, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(AddTaiKhoanForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 20, 211, 51));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(AddTaiKhoanForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 100, 131, 51));
        label_3 = new QLabel(AddTaiKhoanForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 160, 81, 41));
        label_4 = new QLabel(AddTaiKhoanForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 210, 81, 41));
        label_5 = new QLabel(AddTaiKhoanForm);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 260, 81, 41));
        label_6 = new QLabel(AddTaiKhoanForm);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 310, 81, 41));
        label_7 = new QLabel(AddTaiKhoanForm);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(50, 360, 81, 41));
        ten = new QLineEdit(AddTaiKhoanForm);
        ten->setObjectName(QString::fromUtf8("ten"));
        ten->setGeometry(QRect(190, 170, 231, 31));
        tuoi = new QLineEdit(AddTaiKhoanForm);
        tuoi->setObjectName(QString::fromUtf8("tuoi"));
        tuoi->setGeometry(QRect(190, 220, 231, 31));
        taiKhoan = new QLineEdit(AddTaiKhoanForm);
        taiKhoan->setObjectName(QString::fromUtf8("taiKhoan"));
        taiKhoan->setGeometry(QRect(190, 320, 231, 31));
        matKhau = new QLineEdit(AddTaiKhoanForm);
        matKhau->setObjectName(QString::fromUtf8("matKhau"));
        matKhau->setGeometry(QRect(190, 370, 231, 31));
        gioiTinh = new QComboBox(AddTaiKhoanForm);
        gioiTinh->addItem(QString());
        gioiTinh->addItem(QString());
        gioiTinh->setObjectName(QString::fromUtf8("gioiTinh"));
        gioiTinh->setGeometry(QRect(190, 270, 231, 31));
        loaiTaiKhoan = new QComboBox(AddTaiKhoanForm);
        loaiTaiKhoan->addItem(QString());
        loaiTaiKhoan->addItem(QString());
        loaiTaiKhoan->setObjectName(QString::fromUtf8("loaiTaiKhoan"));
        loaiTaiKhoan->setGeometry(QRect(190, 120, 231, 31));

        retranslateUi(AddTaiKhoanForm);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddTaiKhoanForm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddTaiKhoanForm, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddTaiKhoanForm);
    } // setupUi

    void retranslateUi(QDialog *AddTaiKhoanForm)
    {
        AddTaiKhoanForm->setWindowTitle(QCoreApplication::translate("AddTaiKhoanForm", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddTaiKhoanForm", "Th\303\252m th\303\264ng tin", nullptr));
        label_2->setText(QCoreApplication::translate("AddTaiKhoanForm", "Lo\341\272\241i t\303\240i kho\341\272\243n", nullptr));
        label_3->setText(QCoreApplication::translate("AddTaiKhoanForm", "T\303\252n", nullptr));
        label_4->setText(QCoreApplication::translate("AddTaiKhoanForm", "Tu\341\273\225i", nullptr));
        label_5->setText(QCoreApplication::translate("AddTaiKhoanForm", "Gi\341\273\233i t\303\255nh", nullptr));
        label_6->setText(QCoreApplication::translate("AddTaiKhoanForm", "T\303\240i kho\341\272\243n", nullptr));
        label_7->setText(QCoreApplication::translate("AddTaiKhoanForm", "M\341\272\255t kh\341\272\251u", nullptr));
        gioiTinh->setItemText(0, QCoreApplication::translate("AddTaiKhoanForm", "Nam", nullptr));
        gioiTinh->setItemText(1, QCoreApplication::translate("AddTaiKhoanForm", "N\341\273\257", nullptr));

        loaiTaiKhoan->setItemText(0, QCoreApplication::translate("AddTaiKhoanForm", "Qu\341\272\243n l\303\275", nullptr));
        loaiTaiKhoan->setItemText(1, QCoreApplication::translate("AddTaiKhoanForm", "Nh\303\242n vi\303\252n", nullptr));

    } // retranslateUi

};

namespace Ui {
    class AddTaiKhoanForm: public Ui_AddTaiKhoanForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTAIKHOANFORM_H
