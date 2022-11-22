/********************************************************************************
** Form generated from reading UI file 'loginform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINFORM_H
#define UI_LOGINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogInForm
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *confirmButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *taiKhoanLine;
    QLineEdit *matKhauLine;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LogInForm)
    {
        if (LogInForm->objectName().isEmpty())
            LogInForm->setObjectName(QString::fromUtf8("LogInForm"));
        LogInForm->resize(800, 600);
        centralwidget = new QWidget(LogInForm);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 30, 201, 81));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        confirmButton = new QPushButton(centralwidget);
        confirmButton->setObjectName(QString::fromUtf8("confirmButton"));
        confirmButton->setGeometry(QRect(400, 250, 80, 51));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(120, 140, 361, 81));
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


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        taiKhoanLine = new QLineEdit(widget);
        taiKhoanLine->setObjectName(QString::fromUtf8("taiKhoanLine"));

        verticalLayout->addWidget(taiKhoanLine);

        matKhauLine = new QLineEdit(widget);
        matKhauLine->setObjectName(QString::fromUtf8("matKhauLine"));

        verticalLayout->addWidget(matKhauLine);


        horizontalLayout->addLayout(verticalLayout);

        LogInForm->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LogInForm);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 17));
        LogInForm->setMenuBar(menubar);
        statusbar = new QStatusBar(LogInForm);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        LogInForm->setStatusBar(statusbar);

        retranslateUi(LogInForm);

        QMetaObject::connectSlotsByName(LogInForm);
    } // setupUi

    void retranslateUi(QMainWindow *LogInForm)
    {
        LogInForm->setWindowTitle(QCoreApplication::translate("LogInForm", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("LogInForm", "\304\220\304\203ng nh\341\272\255p", nullptr));
        confirmButton->setText(QCoreApplication::translate("LogInForm", "X\303\241c nh\341\272\255n", nullptr));
        label_2->setText(QCoreApplication::translate("LogInForm", "T\303\240i kho\341\272\243n", nullptr));
        label_3->setText(QCoreApplication::translate("LogInForm", "M\341\272\255t kh\341\272\251u", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogInForm: public Ui_LogInForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINFORM_H
