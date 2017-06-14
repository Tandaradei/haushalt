#include "dbmanager.h"
#include "login.h"
#include <QApplication>



int main(int argc, char *argv[])
{
    DbManager dbManager("haushalt.db");
    QApplication a(argc, argv);
    Login login;
    login.show();

    return a.exec();
}
