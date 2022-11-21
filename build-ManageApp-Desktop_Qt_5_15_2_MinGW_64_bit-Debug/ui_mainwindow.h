/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QColumnView *columnView;
    QLabel *label;
    QColumnView *columnView_2;
    QLabel *label_2;
    QColumnView *columnChooseView;
    QPushButton *pushButtonFood;
    QPushButton *pushButtonDrink;
    QColumnView *columnDisplayView;
    QColumnView *columnPaymentView;
    QLabel *label_7;
    QTextEdit *textEdit;
    QComboBox *comboBox;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QColumnView *columnView_6;
    QLabel *label_11;
    QLabel *tongTienLabel;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QFrame *line;
    QPushButton *thanhToanButton;
    QPushButton *taoMoiButton;
    QLabel *label_16;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QLabel *label_17;
    QStackedWidget *stackedMenu;
    QWidget *page;
    QListWidget *traList;
    QWidget *page_3;
    QListWidget *nuocNgotList;
    QWidget *page_4;
    QListWidget *caPheList;
    QWidget *page_2;
    QListWidget *doAnList;
    QPushButton *addButton;
    QPushButton *minusButton;
    QTableWidget *hoaDon;
    QLabel *label_3;
    QLabel *tongTienCuoiLabel;
    QPushButton *finishDayButton;
    QPushButton *reviewButton;
    QPushButton *editButton;
    QPushButton *pushButtonGasDrink;
    QPushButton *pushButtonCoffee;
    QListWidget *banTrongNhaList;
    QListWidget *lau2BanList;
    QListWidget *ngoaiSanBanList;
    QPushButton *huyChonBanButton;
    QPushButton *traBanButton;
    QLabel *label_4;
    QPushButton *chonBanButton;
    QLabel *banChooseLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1800, 900);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1800, 900));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        columnView = new QColumnView(centralwidget);
        columnView->setObjectName(QString::fromUtf8("columnView"));
        columnView->setGeometry(QRect(10, 30, 401, 141));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 30, 151, 41));
        label->setAlignment(Qt::AlignCenter);
        columnView_2 = new QColumnView(centralwidget);
        columnView_2->setObjectName(QString::fromUtf8("columnView_2"));
        columnView_2->setGeometry(QRect(10, 350, 401, 151));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 360, 191, 31));
        label_2->setAlignment(Qt::AlignCenter);
        columnChooseView = new QColumnView(centralwidget);
        columnChooseView->setObjectName(QString::fromUtf8("columnChooseView"));
        columnChooseView->setGeometry(QRect(1330, 30, 441, 831));
        pushButtonFood = new QPushButton(centralwidget);
        pushButtonFood->setObjectName(QString::fromUtf8("pushButtonFood"));
        pushButtonFood->setGeometry(QRect(1650, 50, 91, 41));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("phone");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        pushButtonFood->setIcon(icon);
        pushButtonDrink = new QPushButton(centralwidget);
        pushButtonDrink->setObjectName(QString::fromUtf8("pushButtonDrink"));
        pushButtonDrink->setGeometry(QRect(1350, 50, 91, 41));
        columnDisplayView = new QColumnView(centralwidget);
        columnDisplayView->setObjectName(QString::fromUtf8("columnDisplayView"));
        columnDisplayView->setGeometry(QRect(540, 30, 771, 471));
        columnPaymentView = new QColumnView(centralwidget);
        columnPaymentView->setObjectName(QString::fromUtf8("columnPaymentView"));
        columnPaymentView->setGeometry(QRect(10, 511, 1301, 351));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 550, 231, 31));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(270, 550, 191, 31));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(270, 650, 191, 31));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(940, 70, 37, 21));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 660, 221, 16));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(80, 180, 271, 31));
        label_10->setAlignment(Qt::AlignCenter);
        columnView_6 = new QColumnView(centralwidget);
        columnView_6->setObjectName(QString::fromUtf8("columnView_6"));
        columnView_6->setGeometry(QRect(10, 180, 401, 161));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(551, 553, 311, 16));
        tongTienLabel = new QLabel(centralwidget);
        tongTienLabel->setObjectName(QString::fromUtf8("tongTienLabel"));
        tongTienLabel->setGeometry(QRect(921, 553, 111, 16));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(551, 593, 381, 31));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(551, 653, 221, 21));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(551, 703, 271, 31));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(561, 683, 421, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        thanhToanButton = new QPushButton(centralwidget);
        thanhToanButton->setObjectName(QString::fromUtf8("thanhToanButton"));
        thanhToanButton->setGeometry(QRect(840, 750, 161, 91));
        taoMoiButton = new QPushButton(centralwidget);
        taoMoiButton->setObjectName(QString::fromUtf8("taoMoiButton"));
        taoMoiButton->setGeometry(QRect(581, 753, 161, 91));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(30, 700, 221, 16));
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(270, 700, 191, 101));
        textEdit_3 = new QTextEdit(centralwidget);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(270, 600, 191, 31));
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(30, 600, 231, 31));
        stackedMenu = new QStackedWidget(centralwidget);
        stackedMenu->setObjectName(QString::fromUtf8("stackedMenu"));
        stackedMenu->setGeometry(QRect(1350, 110, 401, 701));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        traList = new QListWidget(page);
        traList->setObjectName(QString::fromUtf8("traList"));
        traList->setGeometry(QRect(15, 21, 371, 661));
        stackedMenu->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        nuocNgotList = new QListWidget(page_3);
        nuocNgotList->setObjectName(QString::fromUtf8("nuocNgotList"));
        nuocNgotList->setGeometry(QRect(15, 21, 371, 661));
        stackedMenu->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        caPheList = new QListWidget(page_4);
        caPheList->setObjectName(QString::fromUtf8("caPheList"));
        caPheList->setGeometry(QRect(15, 21, 371, 661));
        stackedMenu->addWidget(page_4);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        doAnList = new QListWidget(page_2);
        doAnList->setObjectName(QString::fromUtf8("doAnList"));
        doAnList->setGeometry(QRect(15, 21, 371, 661));
        stackedMenu->addWidget(page_2);
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(1600, 809, 141, 31));
        minusButton = new QPushButton(centralwidget);
        minusButton->setObjectName(QString::fromUtf8("minusButton"));
        minusButton->setGeometry(QRect(1390, 809, 141, 31));
        hoaDon = new QTableWidget(centralwidget);
        if (hoaDon->columnCount() < 4)
            hoaDon->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        hoaDon->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        hoaDon->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        hoaDon->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        hoaDon->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        hoaDon->setObjectName(QString::fromUtf8("hoaDon"));
        hoaDon->setGeometry(QRect(555, 41, 741, 441));
        hoaDon->horizontalHeader()->setCascadingSectionResizes(true);
        hoaDon->horizontalHeader()->setDefaultSectionSize(184);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(921, 653, 37, 31));
        tongTienCuoiLabel = new QLabel(centralwidget);
        tongTienCuoiLabel->setObjectName(QString::fromUtf8("tongTienCuoiLabel"));
        tongTienCuoiLabel->setGeometry(QRect(921, 703, 91, 16));
        finishDayButton = new QPushButton(centralwidget);
        finishDayButton->setObjectName(QString::fromUtf8("finishDayButton"));
        finishDayButton->setGeometry(QRect(1090, 680, 161, 71));
        reviewButton = new QPushButton(centralwidget);
        reviewButton->setObjectName(QString::fromUtf8("reviewButton"));
        reviewButton->setGeometry(QRect(1090, 770, 161, 71));
        editButton = new QPushButton(centralwidget);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        editButton->setGeometry(QRect(1090, 530, 161, 71));
        pushButtonGasDrink = new QPushButton(centralwidget);
        pushButtonGasDrink->setObjectName(QString::fromUtf8("pushButtonGasDrink"));
        pushButtonGasDrink->setGeometry(QRect(1450, 50, 91, 41));
        pushButtonGasDrink->setIcon(icon);
        pushButtonCoffee = new QPushButton(centralwidget);
        pushButtonCoffee->setObjectName(QString::fromUtf8("pushButtonCoffee"));
        pushButtonCoffee->setGeometry(QRect(1550, 50, 91, 41));
        pushButtonCoffee->setIcon(icon);
        banTrongNhaList = new QListWidget(centralwidget);
        banTrongNhaList->setObjectName(QString::fromUtf8("banTrongNhaList"));
        banTrongNhaList->setGeometry(QRect(30, 60, 361, 101));
        lau2BanList = new QListWidget(centralwidget);
        lau2BanList->setObjectName(QString::fromUtf8("lau2BanList"));
        lau2BanList->setGeometry(QRect(30, 220, 361, 111));
        ngoaiSanBanList = new QListWidget(centralwidget);
        ngoaiSanBanList->setObjectName(QString::fromUtf8("ngoaiSanBanList"));
        ngoaiSanBanList->setGeometry(QRect(30, 390, 361, 101));
        huyChonBanButton = new QPushButton(centralwidget);
        huyChonBanButton->setObjectName(QString::fromUtf8("huyChonBanButton"));
        huyChonBanButton->setGeometry(QRect(420, 240, 111, 131));
        traBanButton = new QPushButton(centralwidget);
        traBanButton->setObjectName(QString::fromUtf8("traBanButton"));
        traBanButton->setGeometry(QRect(420, 380, 111, 121));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(440, 10, 71, 51));
        QFont font;
        font.setPointSize(12);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
        chonBanButton = new QPushButton(centralwidget);
        chonBanButton->setObjectName(QString::fromUtf8("chonBanButton"));
        chonBanButton->setGeometry(QRect(420, 100, 111, 131));
        banChooseLabel = new QLabel(centralwidget);
        banChooseLabel->setObjectName(QString::fromUtf8("banChooseLabel"));
        banChooseLabel->setGeometry(QRect(440, 66, 71, 21));
        banChooseLabel->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        columnChooseView->raise();
        columnView_6->raise();
        columnView->raise();
        label->raise();
        columnView_2->raise();
        label_2->raise();
        pushButtonFood->raise();
        pushButtonDrink->raise();
        columnDisplayView->raise();
        columnPaymentView->raise();
        label_7->raise();
        textEdit->raise();
        comboBox->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        tongTienLabel->raise();
        label_13->raise();
        label_14->raise();
        label_15->raise();
        line->raise();
        thanhToanButton->raise();
        taoMoiButton->raise();
        label_16->raise();
        textEdit_2->raise();
        textEdit_3->raise();
        label_17->raise();
        stackedMenu->raise();
        addButton->raise();
        minusButton->raise();
        hoaDon->raise();
        label_3->raise();
        tongTienCuoiLabel->raise();
        finishDayButton->raise();
        reviewButton->raise();
        editButton->raise();
        pushButtonGasDrink->raise();
        pushButtonCoffee->raise();
        banTrongNhaList->raise();
        lau2BanList->raise();
        ngoaiSanBanList->raise();
        huyChonBanButton->raise();
        traBanButton->raise();
        label_4->raise();
        chonBanButton->raise();
        banChooseLabel->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1800, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedMenu->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Trong nh\303\240", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Ngo\303\240i s\303\242n", nullptr));
        pushButtonFood->setText(QCoreApplication::translate("MainWindow", "\304\220\341\273\223 \304\203n", nullptr));
        pushButtonDrink->setText(QCoreApplication::translate("MainWindow", "Tr\303\240", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "T\303\252n kh\303\241ch h\303\240ng", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Ti\341\273\201n m\341\272\267t", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Th\341\272\273 t\303\255n d\341\273\245ng", nullptr));

        label_8->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Thanh to\303\241n", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "L\341\272\247u 2", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "T\341\273\225ng th\303\240nh ti\341\273\201n", nullptr));
        tongTienLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Chi\341\272\277t kh\341\272\245u", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "VAT (\304\221\303\243 bao g\341\273\223m)", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "T\341\273\225ng c\341\273\231ng", nullptr));
        thanhToanButton->setText(QCoreApplication::translate("MainWindow", "Thanh to\303\241n", nullptr));
        taoMoiButton->setText(QCoreApplication::translate("MainWindow", "T\341\272\241o m\341\273\233i", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Ghi ch\303\272", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "M\303\243 gi\341\272\243m gi\303\241", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        minusButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        QTableWidgetItem *___qtablewidgetitem = hoaDon->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "T\303\252n m\303\263n h\303\240ng", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = hoaDon->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "S\341\273\221 l\306\260\341\273\243ng", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = hoaDon->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\304\220\306\241n gi\303\241", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = hoaDon->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Th\303\240nh ti\341\273\201n", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "10%", nullptr));
        tongTienCuoiLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        finishDayButton->setText(QCoreApplication::translate("MainWindow", "K\341\272\277t th\303\272c ng\303\240y l\303\240m", nullptr));
        reviewButton->setText(QCoreApplication::translate("MainWindow", "T\341\273\225ng quan", nullptr));
        editButton->setText(QCoreApplication::translate("MainWindow", "\304\220i\341\273\201u ch\341\273\211nh", nullptr));
        pushButtonGasDrink->setText(QCoreApplication::translate("MainWindow", "N\306\260\341\273\233c ng\341\273\215t", nullptr));
        pushButtonCoffee->setText(QCoreApplication::translate("MainWindow", "C\303\240 ph\303\252", nullptr));
        huyChonBanButton->setText(QCoreApplication::translate("MainWindow", "H\341\273\247y ch\341\273\215n", nullptr));
        traBanButton->setText(QCoreApplication::translate("MainWindow", "Tr\341\272\243 b\303\240n", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "B\303\240n", nullptr));
        chonBanButton->setText(QCoreApplication::translate("MainWindow", "Ch\341\273\215n b\303\240n", nullptr));
        banChooseLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
