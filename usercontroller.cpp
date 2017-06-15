#include "maincontroller.h"
#include "dbmanager.h"
#include "usercontroller.h"

UserController::UserController(MainController& mainController, DbManager &dbManager)
    :mainController(mainController)
    ,userDAO(dbManager)
    ,userWindow(*this)
{

}

UserController::~UserController()
{

}

void UserController::start()
{
    userWindow.show();
}

void UserController::onLogout()
{
    userWindow.hide();
    mainController.close();
}

