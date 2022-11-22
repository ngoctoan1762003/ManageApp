/********************************************************************************
** Form generated from reading UI file 'addbanform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBANFORM_H
#define UI_ADDBANFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_AddBanForm
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;

    void setupUi(QDialog *AddBanForm)
    {
        if (AddBanForm->objectName().isEmpty())
            AddBanForm->setObjectName(QString::fromUtf8("AddBanForm"));
        AddBanForm->resize(400, 300);
        buttonBox = new QDialogButtonBox(AddBanForm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(AddBanForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 20, 181, 31));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(AddBanForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(56, 91, 71, 31));
        QFont font1;
        font1.setPointSize(11);
        label_2->setFont(font1);
        comboBox = new QComboBox(AddBanForm);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(170, 91, 181, 31));

        retranslateUi(AddBanForm);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddBanForm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddBanForm, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddBanForm);
    } // setupUi

    void retranslateUi(QDialog *AddBanForm)
    {
        AddBanForm->setWindowTitle(QCoreApplication::translate("AddBanForm", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddBanForm", "Th\303\252m b\303\240n", nullptr));
        label_2->setText(QCoreApplication::translate("AddBanForm", "V\341\273\213 tr\303\255", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("AddBanForm", "TrongNha", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("AddBanForm", "NgoaiSan", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("AddBanForm", "Tang2", nullptr));

    } // retranslateUi

};

namespace Ui {
    class AddBanForm: public Ui_AddBanForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBANFORM_H
