/********************************************************************************
** Form generated from reading UI file 'editbanform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITBANFORM_H
#define UI_EDITBANFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_EditBanForm
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditBanForm)
    {
        if (EditBanForm->objectName().isEmpty())
            EditBanForm->setObjectName(QString::fromUtf8("EditBanForm"));
        EditBanForm->resize(505, 385);
        buttonBox = new QDialogButtonBox(EditBanForm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(140, 340, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(EditBanForm);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditBanForm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditBanForm, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditBanForm);
    } // setupUi

    void retranslateUi(QDialog *EditBanForm)
    {
        EditBanForm->setWindowTitle(QCoreApplication::translate("EditBanForm", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditBanForm: public Ui_EditBanForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITBANFORM_H
