/********************************************************************************
** Form generated from reading UI file 'searchform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHFORM_H
#define UI_SEARCHFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_SearchForm
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *SearchForm)
    {
        if (SearchForm->objectName().isEmpty())
            SearchForm->setObjectName(QString::fromUtf8("SearchForm"));
        SearchForm->resize(619, 287);
        buttonBox = new QDialogButtonBox(SearchForm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(260, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(SearchForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 60, 501, 61));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(SearchForm);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(150, 160, 331, 31));

        retranslateUi(SearchForm);
        QObject::connect(buttonBox, SIGNAL(accepted()), SearchForm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SearchForm, SLOT(reject()));

        QMetaObject::connectSlotsByName(SearchForm);
    } // setupUi

    void retranslateUi(QDialog *SearchForm)
    {
        SearchForm->setWindowTitle(QCoreApplication::translate("SearchForm", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SearchForm", "\304\220i\341\273\201n t\341\273\253 b\341\272\241n mu\341\273\221n tra", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchForm: public Ui_SearchForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHFORM_H
