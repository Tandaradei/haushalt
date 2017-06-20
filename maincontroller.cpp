#include "startcontroller.h"
#include "usercontroller.h"
#include "admincontroller.h"
#include "maincontroller.h"
#include "user.h"
#include <string>
#include <stdio.h>
#include <iostream>

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

int MainController::exec(char *argv[])
{
    // create startController and start it
    startController = std::make_shared<StartController>(*this, dbManager);

    std::string argument1(argv[1]);
    if(argument1 == "test")
    {
        startController->setDAO();
    }
    else if(argument1 == "clean")
    {
        startController->cleanDAO();
    }

    startController->start();

    // enter main loop
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




