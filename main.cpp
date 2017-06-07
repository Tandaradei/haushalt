#include "benutzerwindow.h"
#include "systemstart.h"
#include "login.h"
#include <QApplication>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BenutzerWindow w;
    w.show();
    Systemstart s;
    s.show();
    Login l;
    l.show();

    return a.exec();
}
