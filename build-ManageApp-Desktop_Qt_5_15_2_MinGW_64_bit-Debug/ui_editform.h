/********************************************************************************
** Form generated from reading UI file 'editform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITFORM_H
#define UI_EDITFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_EditForm
{
public:
    QPushButton *addButton;
    QPushButton *minusButton;
    QPushButton *editButton;
    QPushButton *exitButton;
    QTableWidget *monHangTable;

    void setupUi(QDialog *EditForm)
    {
        if (EditForm->objectName().isEmpty())
            EditForm->setObjectName(QString::fromUtf8("EditForm"));
        EditForm->resize(1017, 692);
        addButton = new QPushButton(EditForm);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(850, 10, 161, 71));
        minusButton = new QPushButton(EditForm);
        minusButton->setObjectName(QString::fromUtf8("minusButton"));
        minusButton->setGeometry(QRect(850, 90, 161, 71));
        editButton = new QPushButton(EditForm);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        editButton->setGeometry(QRect(850, 170, 161, 71));
        exitButton = new QPushButton(EditForm);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(850, 620, 151, 61));
        monHangTable = new QTableWidget(EditForm);
        if (monHangTable->columnCount() < 4)
            monHangTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        monHangTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        monHangTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        monHangTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        monHangTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        monHangTable->setObjectName(QString::fromUtf8("monHangTable"));
        monHangTable->setGeometry(QRect(15, 11, 819, 671));
        monHangTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        monHangTable->setAlternatingRowColors(true);
        monHangTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        monHangTable->horizontalHeader()->setDefaultSectionSize(195);

        retranslateUi(EditForm);

        QMetaObject::connectSlotsByName(EditForm);
    } // setupUi

    void retranslateUi(QDialog *EditForm)
    {
        EditForm->setWindowTitle(QCoreApplication::translate("EditForm", "Dialog", nullptr));
        addButton->setText(QCoreApplication::translate("EditForm", "Th\303\252m m\341\272\267t h\303\240ng", nullptr));
        minusButton->setText(QCoreApplication::translate("EditForm", "X\303\263a m\341\272\267t h\303\240ng", nullptr));
        editButton->setText(QCoreApplication::translate("EditForm", "Ch\341\273\211nh s\341\273\255a", nullptr));
        exitButton->setText(QCoreApplication::translate("EditForm", "Tho\303\241t", nullptr));
        QTableWidgetItem *___qtablewidgetitem = monHangTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("EditForm", "Ten", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = monHangTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("EditForm", "Don gia", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = monHangTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("EditForm", "Don vi tinh", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = monHangTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("EditForm", "Loai mat hang", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditForm: public Ui_EditForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITFORM_H
