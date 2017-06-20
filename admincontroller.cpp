#include "maincontroller.h"
#include "dbmanager.h"
#include "admincontroller.h"
#include "user.h"

AdminController::AdminController(MainController& mainController, DbManager &dbManager, std::shared_ptr<User> user)
    :UserController(mainController, dbManager, user)
    ,adminDAO(dbManager)
{
    userWindow.enableAdmin(this);
}

AdminController::~AdminController()
{

}

void AdminController::start()
{
    userWindow.show();
}
