/********************************************************************************
** Form generated from reading UI file 'resetprop.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESETPROP_H
#define UI_RESETPROP_H

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

class Ui_ReSetProp
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_5;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *tenLabel;
    QLabel *giaLabel;
    QLabel *donViLabel;
    QLabel *loaiLabel;
    QVBoxLayout *verticalLayout;
    QLineEdit *tenLine;
    QLineEdit *giaLine;
    QComboBox *donViTinhBox;
    QComboBox *loaiHangBox;

    void setupUi(QDialog *ReSetProp)
    {
        if (ReSetProp->objectName().isEmpty())
            ReSetProp->setObjectName(QString::fromUtf8("ReSetProp"));
        ReSetProp->resize(689, 451);
        buttonBox = new QDialogButtonBox(ReSetProp);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(320, 410, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_5 = new QLabel(ReSetProp);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(130, 30, 441, 61));
        QFont font;
        font.setPointSize(15);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);
        widget = new QWidget(ReSetProp);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(90, 130, 531, 241));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tenLabel = new QLabel(widget);
        tenLabel->setObjectName(QString::fromUtf8("tenLabel"));

        verticalLayout_2->addWidget(tenLabel);

        giaLabel = new QLabel(widget);
        giaLabel->setObjectName(QString::fromUtf8("giaLabel"));

        verticalLayout_2->addWidget(giaLabel);

        donViLabel = new QLabel(widget);
        donViLabel->setObjectName(QString::fromUtf8("donViLabel"));

        verticalLayout_2->addWidget(donViLabel);

        loaiLabel = new QLabel(widget);
        loaiLabel->setObjectName(QString::fromUtf8("loaiLabel"));

        verticalLayout_2->addWidget(loaiLabel);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tenLine = new QLineEdit(widget);
        tenLine->setObjectName(QString::fromUtf8("tenLine"));

        verticalLayout->addWidget(tenLine);

        giaLine = new QLineEdit(widget);
        giaLine->setObjectName(QString::fromUtf8("giaLine"));

        verticalLayout->addWidget(giaLine);

        donViTinhBox = new QComboBox(widget);
        donViTinhBox->addItem(QString());
        donViTinhBox->addItem(QString());
        donViTinhBox->addItem(QString());
        donViTinhBox->addItem(QString());
        donViTinhBox->addItem(QString());
        donViTinhBox->setObjectName(QString::fromUtf8("donViTinhBox"));

        verticalLayout->addWidget(donViTinhBox);

        loaiHangBox = new QComboBox(widget);
        loaiHangBox->addItem(QString());
        loaiHangBox->addItem(QString());
        loaiHangBox->addItem(QString());
        loaiHangBox->addItem(QString());
        loaiHangBox->setObjectName(QString::fromUtf8("loaiHangBox"));

        verticalLayout->addWidget(loaiHangBox);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(ReSetProp);
        QObject::connect(buttonBox, SIGNAL(accepted()), ReSetProp, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ReSetProp, SLOT(reject()));

        QMetaObject::connectSlotsByName(ReSetProp);
    } // setupUi

    void retranslateUi(QDialog *ReSetProp)
    {
        ReSetProp->setWindowTitle(QCoreApplication::translate("ReSetProp", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("ReSetProp", "Ch\341\273\211nh s\341\273\255a th\303\264ng tin", nullptr));
        tenLabel->setText(QCoreApplication::translate("ReSetProp", "T\303\252n (kh\303\264ng d\341\272\245u kh\303\264ng c\303\241ch)", nullptr));
        giaLabel->setText(QCoreApplication::translate("ReSetProp", "\304\220\306\241n gi\303\241 (VN\304\220)", nullptr));
        donViLabel->setText(QCoreApplication::translate("ReSetProp", "\304\220\306\241n v\341\273\213 t\303\255nh", nullptr));
        loaiLabel->setText(QCoreApplication::translate("ReSetProp", "Lo\341\272\241i m\341\272\267t h\303\240ng", nullptr));
        donViTinhBox->setItemText(0, QCoreApplication::translate("ReSetProp", "Ly", nullptr));
        donViTinhBox->setItemText(1, QCoreApplication::translate("ReSetProp", "Chai", nullptr));
        donViTinhBox->setItemText(2, QCoreApplication::translate("ReSetProp", "Lon", nullptr));
        donViTinhBox->setItemText(3, QCoreApplication::translate("ReSetProp", "Xien", nullptr));
        donViTinhBox->setItemText(4, QCoreApplication::translate("ReSetProp", "Dia", nullptr));

        loaiHangBox->setItemText(0, QCoreApplication::translate("ReSetProp", "Tra", nullptr));
        loaiHangBox->setItemText(1, QCoreApplication::translate("ReSetProp", "NuocNgot", nullptr));
        loaiHangBox->setItemText(2, QCoreApplication::translate("ReSetProp", "CaPhe", nullptr));
        loaiHangBox->setItemText(3, QCoreApplication::translate("ReSetProp", "DoAn", nullptr));

    } // retranslateUi

};

namespace Ui {
    class ReSetProp: public Ui_ReSetProp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESETPROP_H
