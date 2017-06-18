#include "startcontroller.h"
#include "usercontroller.h"
#include "admincontroller.h"
#include "maincontroller.h"
#include "user.h"

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

void MainController::onLoggedIn(std::shared_ptr<User> user)
{
    // user->ID == 1 -> admin
    if(user->ID == 1)
    {
        adminController = std::make_shared<AdminController>(*this, dbManager, user);
        adminController->start();
    }
    else
    {
        userController = std::make_shared<UserController>(*this, dbManager, user);
        userController->start();
    }

}

void MainController::close()
{
    application.quit();
}




