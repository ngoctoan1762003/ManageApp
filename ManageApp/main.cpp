#include "mainwindow.h"
#include "loginform.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ofstream outfile("./SaleData.txt", std::ios::ate);

    outfile.close();

    LogInForm logInForm;

    logInForm.resize(600,350);
    logInForm.show();

    return a.exec();
}
