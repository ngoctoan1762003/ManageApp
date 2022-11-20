/********************************************************************************
** Form generated from reading UI file 'editfrom.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITFROM_H
#define UI_EDITFROM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditFrom
{
public:
    QTableWidget *tableWidget;

    void setupUi(QWidget *EditFrom)
    {
        if (EditFrom->objectName().isEmpty())
            EditFrom->setObjectName(QString::fromUtf8("EditFrom"));
        EditFrom->resize(400, 300);
        tableWidget = new QTableWidget(EditFrom);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 341, 281));

        retranslateUi(EditFrom);

        QMetaObject::connectSlotsByName(EditFrom);
    } // setupUi

    void retranslateUi(QWidget *EditFrom)
    {
        EditFrom->setWindowTitle(QCoreApplication::translate("EditFrom", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditFrom: public Ui_EditFrom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITFROM_H
