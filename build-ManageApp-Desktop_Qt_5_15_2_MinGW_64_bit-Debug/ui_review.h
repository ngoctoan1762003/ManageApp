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
#include <QtWidgets/QColumnView>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Review
{
public:
    QLabel *label;
    QColumnView *columnView;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QLabel *ngayText;
    QLabel *soHDText;
    QLabel *doanhThuText;
    QWidget *page_2;
    QTableWidget *tableWidget;
    QPushButton *statusButton;
    QPushButton *clientButton;

    void setupUi(QDialog *Review)
    {
        if (Review->objectName().isEmpty())
            Review->setObjectName(QString::fromUtf8("Review"));
        Review->resize(759, 643);
        label = new QLabel(Review);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 20, 231, 61));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        columnView = new QColumnView(Review);
        columnView->setObjectName(QString::fromUtf8("columnView"));
        columnView->setGeometry(QRect(40, 180, 681, 421));
        stackedWidget = new QStackedWidget(Review);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(70, 210, 621, 371));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 611, 341));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ngayText = new QLabel(layoutWidget);
        ngayText->setObjectName(QString::fromUtf8("ngayText"));
        ngayText->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(ngayText);

        soHDText = new QLabel(layoutWidget);
        soHDText->setObjectName(QString::fromUtf8("soHDText"));
        soHDText->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(soHDText);

        doanhThuText = new QLabel(layoutWidget);
        doanhThuText->setObjectName(QString::fromUtf8("doanhThuText"));
        doanhThuText->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(doanhThuText);


        horizontalLayout->addLayout(verticalLayout);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        tableWidget = new QTableWidget(page_2);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 10, 581, 341));
        tableWidget->setAutoScrollMargin(16);
        tableWidget->horizontalHeader()->setDefaultSectionSize(139);
        stackedWidget->addWidget(page_2);
        statusButton = new QPushButton(Review);
        statusButton->setObjectName(QString::fromUtf8("statusButton"));
        statusButton->setGeometry(QRect(40, 100, 201, 61));
        clientButton = new QPushButton(Review);
        clientButton->setObjectName(QString::fromUtf8("clientButton"));
        clientButton->setGeometry(QRect(270, 100, 201, 61));
        columnView->raise();
        stackedWidget->raise();
        label->raise();
        statusButton->raise();
        clientButton->raise();

        retranslateUi(Review);

        stackedWidget->setCurrentIndex(1);


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
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Review", "T\303\252n", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Review", "S\341\273\221 h\303\263a \304\221\306\241n", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Review", "T\341\273\225ng ti\341\273\201n", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Review", "\304\220i\341\273\203m t\303\255ch l\305\251y", nullptr));
        statusButton->setText(QCoreApplication::translate("Review", "T\303\254nh h\303\254nh b\303\241n h\303\240ng", nullptr));
        clientButton->setText(QCoreApplication::translate("Review", "Kh\303\241ch h\303\240ng", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Review: public Ui_Review {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REVIEW_H
