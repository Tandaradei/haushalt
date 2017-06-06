#include "benutzerwindow.h"
#include "erster_systemstart.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BenutzerWindow w;
    erster_systemstart s;
    w.show();
    s.show();

    return a.exec();
}
