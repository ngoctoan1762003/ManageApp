/********************************************************************************
** Form generated from reading UI file 'hoadonwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOADONWINDOW_H
#define UI_HOADONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_HoaDonWindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QFrame *line;
    QLabel *chiTietHoaDon;

    void setupUi(QDialog *HoaDonWindow)
    {
        if (HoaDonWindow->objectName().isEmpty())
            HoaDonWindow->setObjectName(QString::fromUtf8("HoaDonWindow"));
        HoaDonWindow->resize(629, 867);
        label = new QLabel(HoaDonWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(310, 30, 301, 51));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(HoaDonWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 80, 611, 41));
        QFont font1;
        font1.setPointSize(10);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(HoaDonWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(160, 150, 301, 51));
        QFont font2;
        font2.setPointSize(16);
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignCenter);
        line = new QFrame(HoaDonWindow);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(20, 200, 591, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        chiTietHoaDon = new QLabel(HoaDonWindow);
        chiTietHoaDon->setObjectName(QString::fromUtf8("chiTietHoaDon"));
        chiTietHoaDon->setGeometry(QRect(50, 220, 571, 641));
        chiTietHoaDon->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        retranslateUi(HoaDonWindow);

        QMetaObject::connectSlotsByName(HoaDonWindow);
    } // setupUi

    void retranslateUi(QDialog *HoaDonWindow)
    {
        HoaDonWindow->setWindowTitle(QCoreApplication::translate("HoaDonWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("HoaDonWindow", "SOME COFFEE", nullptr));
        label_2->setText(QCoreApplication::translate("HoaDonWindow", "S\341\273\221 10, Phan Khoang, C\341\272\251m L\341\273\207, \304\220\303\240 N\341\272\265ng", nullptr));
        label_3->setText(QCoreApplication::translate("HoaDonWindow", "PHI\341\272\276U THANH TO\303\201N", nullptr));
        chiTietHoaDon->setText(QCoreApplication::translate("HoaDonWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HoaDonWindow: public Ui_HoaDonWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOADONWINDOW_H
