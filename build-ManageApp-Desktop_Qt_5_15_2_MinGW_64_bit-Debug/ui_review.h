/********************************************************************************
** Form generated from reading UI file 'review.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REVIEW_H
#define UI_REVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Review
{
public:
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QLabel *ngayText;
    QLabel *soHDText;
    QLabel *doanhThuText;

    void setupUi(QDialog *Review)
    {
        if (Review->objectName().isEmpty())
            Review->setObjectName(QString::fromUtf8("Review"));
        Review->resize(524, 471);
        label = new QLabel(Review);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 70, 231, 61));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        widget = new QWidget(Review);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 160, 451, 201));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ngayText = new QLabel(widget);
        ngayText->setObjectName(QString::fromUtf8("ngayText"));
        ngayText->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(ngayText);

        soHDText = new QLabel(widget);
        soHDText->setObjectName(QString::fromUtf8("soHDText"));
        soHDText->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(soHDText);

        doanhThuText = new QLabel(widget);
        doanhThuText->setObjectName(QString::fromUtf8("doanhThuText"));
        doanhThuText->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(doanhThuText);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Review);

        QMetaObject::connectSlotsByName(Review);
    } // setupUi

    void retranslateUi(QDialog *Review)
    {
        Review->setWindowTitle(QCoreApplication::translate("Review", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Review", "T\341\273\225ng quan", nullptr));
        label_2->setText(QCoreApplication::translate("Review", "S\341\273\221 ng\303\240y \304\221\303\243 b\303\241n", nullptr));
        label_3->setText(QCoreApplication::translate("Review", "S\341\273\221 h\303\263a \304\221\306\241n", nullptr));
        label_4->setText(QCoreApplication::translate("Review", "T\341\273\225ng doanh thu", nullptr));
        ngayText->setText(QCoreApplication::translate("Review", "TextLabel", nullptr));
        soHDText->setText(QCoreApplication::translate("Review", "TextLabel", nullptr));
        doanhThuText->setText(QCoreApplication::translate("Review", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Review: public Ui_Review {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REVIEW_H
