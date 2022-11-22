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
#include <QtWidgets/QColumnView>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditBanForm
{
public:
    QLabel *label;
    QColumnView *columnView;
    QPushButton *addButton;
    QPushButton *DeleteButton;
    QPushButton *OutButton;
    QPushButton *ngoaiSanButton;
    QPushButton *trongNhaButton;
    QPushButton *lau2Button;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QListWidget *ngoaiSanList;
    QWidget *page_2;
    QListWidget *trongNhaList;
    QWidget *page_3;
    QListWidget *lau2List;

    void setupUi(QDialog *EditBanForm)
    {
        if (EditBanForm->objectName().isEmpty())
            EditBanForm->setObjectName(QString::fromUtf8("EditBanForm"));
        EditBanForm->resize(984, 621);
        label = new QLabel(EditBanForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 20, 341, 41));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        columnView = new QColumnView(EditBanForm);
        columnView->setObjectName(QString::fromUtf8("columnView"));
        columnView->setGeometry(QRect(30, 70, 821, 521));
        addButton = new QPushButton(EditBanForm);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(859, 70, 111, 81));
        DeleteButton = new QPushButton(EditBanForm);
        DeleteButton->setObjectName(QString::fromUtf8("DeleteButton"));
        DeleteButton->setGeometry(QRect(859, 170, 111, 81));
        OutButton = new QPushButton(EditBanForm);
        OutButton->setObjectName(QString::fromUtf8("OutButton"));
        OutButton->setGeometry(QRect(859, 510, 111, 81));
        ngoaiSanButton = new QPushButton(EditBanForm);
        ngoaiSanButton->setObjectName(QString::fromUtf8("ngoaiSanButton"));
        ngoaiSanButton->setGeometry(QRect(110, 80, 181, 31));
        trongNhaButton = new QPushButton(EditBanForm);
        trongNhaButton->setObjectName(QString::fromUtf8("trongNhaButton"));
        trongNhaButton->setGeometry(QRect(340, 80, 181, 31));
        lau2Button = new QPushButton(EditBanForm);
        lau2Button->setObjectName(QString::fromUtf8("lau2Button"));
        lau2Button->setGeometry(QRect(570, 80, 181, 31));
        stackedWidget = new QStackedWidget(EditBanForm);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(59, 129, 761, 441));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        ngoaiSanList = new QListWidget(page);
        ngoaiSanList->setObjectName(QString::fromUtf8("ngoaiSanList"));
        ngoaiSanList->setGeometry(QRect(10, 10, 741, 421));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        trongNhaList = new QListWidget(page_2);
        trongNhaList->setObjectName(QString::fromUtf8("trongNhaList"));
        trongNhaList->setGeometry(QRect(10, 10, 741, 421));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        lau2List = new QListWidget(page_3);
        lau2List->setObjectName(QString::fromUtf8("lau2List"));
        lau2List->setGeometry(QRect(10, 10, 741, 421));
        stackedWidget->addWidget(page_3);
        columnView->raise();
        label->raise();
        addButton->raise();
        DeleteButton->raise();
        OutButton->raise();
        ngoaiSanButton->raise();
        trongNhaButton->raise();
        lau2Button->raise();
        stackedWidget->raise();

        retranslateUi(EditBanForm);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(EditBanForm);
    } // setupUi

    void retranslateUi(QDialog *EditBanForm)
    {
        EditBanForm->setWindowTitle(QCoreApplication::translate("EditBanForm", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("EditBanForm", "Danh s\303\241ch b\303\240n", nullptr));
        addButton->setText(QCoreApplication::translate("EditBanForm", "Th\303\252m b\303\240n", nullptr));
        DeleteButton->setText(QCoreApplication::translate("EditBanForm", "X\303\263a b\303\240n", nullptr));
        OutButton->setText(QCoreApplication::translate("EditBanForm", "Tho\303\241t", nullptr));
        ngoaiSanButton->setText(QCoreApplication::translate("EditBanForm", "Ngo\303\240i s\303\242n", nullptr));
        trongNhaButton->setText(QCoreApplication::translate("EditBanForm", "Trong nh\303\240", nullptr));
        lau2Button->setText(QCoreApplication::translate("EditBanForm", "L\341\272\247u 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditBanForm: public Ui_EditBanForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITBANFORM_H
