#include "benutzerwindow.h"
#include "Erster_systemstart.h"
#include "login.h"
#include <QApplication>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BenutzerWindow w;
    w.show();
    Erster_systemstart s;
    s.show();
    Login l;
    l.show();

    return a.exec();
}
