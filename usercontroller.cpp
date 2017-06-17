#include "maincontroller.h"
#include "dbmanager.h"
#include "usercontroller.h"
#include "user.h"

UserController::UserController(MainController& mainController, DbManager &dbManager, std::shared_ptr<User> user)
    :mainController(mainController)
    ,userDAO(dbManager)
    ,userWindow(*this)
    ,user(user)
{
    userWindow.setWindowTitle(user->Name);
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

