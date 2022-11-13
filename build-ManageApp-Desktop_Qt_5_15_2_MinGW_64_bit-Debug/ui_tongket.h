/********************************************************************************
** Form generated from reading UI file 'tongket.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TONGKET_H
#define UI_TONGKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TongKet
{
public:
    QLabel *ngayLabel;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *soHoaDonLabel;
    QLabel *doanhThuLabel;

    void setupUi(QDialog *TongKet)
    {
        if (TongKet->objectName().isEmpty())
            TongKet->setObjectName(QString::fromUtf8("TongKet"));
        TongKet->resize(431, 300);
        ngayLabel = new QLabel(TongKet);
        ngayLabel->setObjectName(QString::fromUtf8("ngayLabel"));
        ngayLabel->setGeometry(QRect(280, 20, 111, 31));
        ngayLabel->setAlignment(Qt::AlignCenter);
        widget = new QWidget(TongKet);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(230, 60, 281, 91));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        soHoaDonLabel = new QLabel(widget);
        soHoaDonLabel->setObjectName(QString::fromUtf8("soHoaDonLabel"));

        verticalLayout_2->addWidget(soHoaDonLabel);

        doanhThuLabel = new QLabel(widget);
        doanhThuLabel->setObjectName(QString::fromUtf8("doanhThuLabel"));

        verticalLayout_2->addWidget(doanhThuLabel);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(TongKet);

        QMetaObject::connectSlotsByName(TongKet);
    } // setupUi

    void retranslateUi(QDialog *TongKet)
    {
        TongKet->setWindowTitle(QCoreApplication::translate("TongKet", "Dialog", nullptr));
        ngayLabel->setText(QCoreApplication::translate("TongKet", "Ng\303\240y", nullptr));
        label->setText(QCoreApplication::translate("TongKet", "S\341\273\221 h\303\263a \304\221\306\241n:", nullptr));
        label_2->setText(QCoreApplication::translate("TongKet", "Doanh thu ng\303\240y:", nullptr));
        soHoaDonLabel->setText(QCoreApplication::translate("TongKet", "TextLabel", nullptr));
        doanhThuLabel->setText(QCoreApplication::translate("TongKet", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TongKet: public Ui_TongKet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TONGKET_H
