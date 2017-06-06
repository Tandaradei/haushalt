#include "benutzerwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BenutzerWindow w;
    w.show();

    return a.exec();
}
