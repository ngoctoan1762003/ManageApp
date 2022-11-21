/********************************************************************************
** Form generated from reading UI file 'addform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFORM_H
#define UI_ADDFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddForm
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_5;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *tenLine;
    QLineEdit *giaLine;
    QComboBox *donViBox;
    QComboBox *loaiHangBox;

    void setupUi(QDialog *AddForm)
    {
        if (AddForm->objectName().isEmpty())
            AddForm->setObjectName(QString::fromUtf8("AddForm"));
        AddForm->resize(654, 515);
        QFont font;
        font.setPointSize(9);
        AddForm->setFont(font);
        buttonBox = new QDialogButtonBox(AddForm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(290, 470, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_5 = new QLabel(AddForm);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(150, 30, 361, 111));
        QFont font1;
        font1.setPointSize(15);
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(AddForm);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 180, 611, 231));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tenLine = new QLineEdit(layoutWidget);
        tenLine->setObjectName(QString::fromUtf8("tenLine"));

        verticalLayout_2->addWidget(tenLine);

        giaLine = new QLineEdit(layoutWidget);
        giaLine->setObjectName(QString::fromUtf8("giaLine"));

        verticalLayout_2->addWidget(giaLine);

        donViBox = new QComboBox(layoutWidget);
        donViBox->addItem(QString());
        donViBox->addItem(QString());
        donViBox->addItem(QString());
        donViBox->addItem(QString());
        donViBox->addItem(QString());
        donViBox->setObjectName(QString::fromUtf8("donViBox"));

        verticalLayout_2->addWidget(donViBox);

        loaiHangBox = new QComboBox(layoutWidget);
        loaiHangBox->addItem(QString());
        loaiHangBox->addItem(QString());
        loaiHangBox->addItem(QString());
        loaiHangBox->addItem(QString());
        loaiHangBox->setObjectName(QString::fromUtf8("loaiHangBox"));

        verticalLayout_2->addWidget(loaiHangBox);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(AddForm);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddForm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddForm, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddForm);
    } // setupUi

    void retranslateUi(QDialog *AddForm)
    {
        AddForm->setWindowTitle(QCoreApplication::translate("AddForm", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("AddForm", "Th\303\252m th\303\264ng tin m\341\272\267t h\303\240ng", nullptr));
        label->setText(QCoreApplication::translate("AddForm", "T\303\252n (kh\303\264ng d\341\272\245u kh\303\264ng c\303\241ch)", nullptr));
        label_2->setText(QCoreApplication::translate("AddForm", "\304\220\306\241n gi\303\241 (VN\304\220)", nullptr));
        label_3->setText(QCoreApplication::translate("AddForm", "\304\220\306\241n v\341\273\213 t\303\255nh", nullptr));
        label_4->setText(QCoreApplication::translate("AddForm", "Lo\341\272\241i m\341\272\267t h\303\240ng", nullptr));
        donViBox->setItemText(0, QCoreApplication::translate("AddForm", "Ly", nullptr));
        donViBox->setItemText(1, QCoreApplication::translate("AddForm", "Chai", nullptr));
        donViBox->setItemText(2, QCoreApplication::translate("AddForm", "Lon", nullptr));
        donViBox->setItemText(3, QCoreApplication::translate("AddForm", "Xien", nullptr));
        donViBox->setItemText(4, QCoreApplication::translate("AddForm", "Dia", nullptr));

        loaiHangBox->setItemText(0, QCoreApplication::translate("AddForm", "Tra", nullptr));
        loaiHangBox->setItemText(1, QCoreApplication::translate("AddForm", "NuocNgot", nullptr));
        loaiHangBox->setItemText(2, QCoreApplication::translate("AddForm", "CaPhe", nullptr));
        loaiHangBox->setItemText(3, QCoreApplication::translate("AddForm", "DoAn", nullptr));

    } // retranslateUi

};

namespace Ui {
    class AddForm: public Ui_AddForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFORM_H
