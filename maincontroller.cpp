#include "startcontroller.h"
#include "usercontroller.h"
#include "admincontroller.h"
#include "maincontroller.h"

MainController::MainController(int argc, char *argv[])
    :application(argc, argv)
    ,dbManager("haushalt.db")
    ,startController()
    ,userController()
    ,adminController()
{

}

MainController::~MainController()
{

}

int MainController::exec()
{
    startController = std::make_shared<StartController>(*this, dbManager);
    startController->start();
    return application.exec();
}

void MainController::onLoggedIn(int userId)
{
    // userId == 1 -> admin
    if(userId == 1)
    {
        adminController = std::make_shared<AdminController>(*this, dbManager);
        adminController->start();
    }
    else
    {
        userController = std::make_shared<UserController>(*this, dbManager);
        userController->start();
    }

}

void MainController::close()
{

}




