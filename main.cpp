#include "dbmanager.h"
#include "loginwindow.h"
#include <QApplication>



int main(int argc, char *argv[])
{
    DbManager dbManager("haushalt.db");
    QApplication a(argc, argv);
    LoginWindow login;
    login.show();

    return a.exec();
}
