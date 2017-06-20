#include "maincontroller.h"
#include <QApplication>
#include <stdio.h>



int main(int argc, char *argv[])
{
    MainController mainController(argc, argv);
    return mainController.exec(argv);

}
