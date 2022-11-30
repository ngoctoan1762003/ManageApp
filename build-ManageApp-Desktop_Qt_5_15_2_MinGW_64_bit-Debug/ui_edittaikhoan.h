/********************************************************************************
** Form generated from reading UI file 'edittaikhoan.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITTAIKHOAN_H
#define UI_EDITTAIKHOAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_EditTaiKhoan
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *ten;
    QLineEdit *tuoi;
    QComboBox *gioiTinh;
    QLineEdit *taiKhoan;
    QLineEdit *matKhau;

    void setupUi(QDialog *EditTaiKhoan)
    {
        if (EditTaiKhoan->objectName().isEmpty())
            EditTaiKhoan->setObjectName(QString::fromUtf8("EditTaiKhoan"));
        EditTaiKhoan->resize(563, 365);
        buttonBox = new QDialogButtonBox(EditTaiKhoan);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(200, 320, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(EditTaiKhoan);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 10, 271, 41));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(EditTaiKhoan);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 60, 71, 31));
        label_3 = new QLabel(EditTaiKhoan);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 109, 71, 31));
        label_4 = new QLabel(EditTaiKhoan);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 159, 71, 31));
        label_5 = new QLabel(EditTaiKhoan);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 209, 71, 31));
        label_6 = new QLabel(EditTaiKhoan);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(90, 260, 71, 31));
        ten = new QLineEdit(EditTaiKhoan);
        ten->setObjectName(QString::fromUtf8("ten"));
        ten->setGeometry(QRect(210, 59, 221, 31));
        tuoi = new QLineEdit(EditTaiKhoan);
        tuoi->setObjectName(QString::fromUtf8("tuoi"));
        tuoi->setGeometry(QRect(210, 109, 221, 31));
        gioiTinh = new QComboBox(EditTaiKhoan);
        gioiTinh->addItem(QString());
        gioiTinh->addItem(QString());
        gioiTinh->setObjectName(QString::fromUtf8("gioiTinh"));
        gioiTinh->setGeometry(QRect(210, 160, 221, 31));
        taiKhoan = new QLineEdit(EditTaiKhoan);
        taiKhoan->setObjectName(QString::fromUtf8("taiKhoan"));
        taiKhoan->setGeometry(QRect(210, 210, 221, 31));
        matKhau = new QLineEdit(EditTaiKhoan);
        matKhau->setObjectName(QString::fromUtf8("matKhau"));
        matKhau->setGeometry(QRect(210, 260, 221, 31));

        retranslateUi(EditTaiKhoan);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditTaiKhoan, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditTaiKhoan, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditTaiKhoan);
    } // setupUi

    void retranslateUi(QDialog *EditTaiKhoan)
    {
        EditTaiKhoan->setWindowTitle(QCoreApplication::translate("EditTaiKhoan", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("EditTaiKhoan", "Ch\341\273\211nh s\341\273\255a th\303\264ng tin", nullptr));
        label_2->setText(QCoreApplication::translate("EditTaiKhoan", "T\303\252n", nullptr));
        label_3->setText(QCoreApplication::translate("EditTaiKhoan", "Tu\341\273\225i", nullptr));
        label_4->setText(QCoreApplication::translate("EditTaiKhoan", "Gi\341\273\233i t\303\255nh", nullptr));
        label_5->setText(QCoreApplication::translate("EditTaiKhoan", "T\303\240i kho\341\272\243n", nullptr));
        label_6->setText(QCoreApplication::translate("EditTaiKhoan", "M\341\272\255t kh\341\272\251u", nullptr));
        gioiTinh->setItemText(0, QCoreApplication::translate("EditTaiKhoan", "Nam", nullptr));
        gioiTinh->setItemText(1, QCoreApplication::translate("EditTaiKhoan", "N\341\273\257", nullptr));

    } // retranslateUi

};

namespace Ui {
    class EditTaiKhoan: public Ui_EditTaiKhoan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTAIKHOAN_H
