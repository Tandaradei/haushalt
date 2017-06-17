#include "maincontroller.h"
#include "dbmanager.h"
#include "admincontroller.h"

AdminController::AdminController(MainController& mainController, DbManager &dbManager)
    :UserController(mainController, dbManager)
    ,adminDAO(dbManager)
{
    userWindow.enableAdminTabs();
}

AdminController::~AdminController()
{

}

void AdminController::start()
{
    userWindow.show();
}
