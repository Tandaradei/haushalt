#include "maincontroller.h"
#include <QApplication>



int main(int argc, char *argv[])
{
    MainController mainController(argc, argv);
    return mainController.exec();

}
