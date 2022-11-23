#include "mainwindow.h"
#include "loginform.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ofstream outfile("./SaleData.txt", std::ios::ate);
    //outfile<<"Hello";
    outfile.close();
    //MainWindow w;
    LogInForm logInForm;

    logInForm.resize(600,350);
    logInForm.show();
    //w.resize(1800,900);
    //w.show();
    return a.exec();
}
