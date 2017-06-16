#include "dbmanager.h"
#include "maincontroller.h"
#include "startcontroller.h"

StartController::StartController(MainController& mainController, DbManager &dbManager)
    :mainController(mainController)
    ,startDAO(dbManager)
    ,firstStartWindow()
    ,loginWindow(*this)
{

}

StartController::~StartController()
{

}

void StartController::start()
{
    if(startDAO.isFirstStart())
    {
        firstStartWindow.show();
    }
    else
    {
        loginWindow.show();
    }
}

bool StartController::onLoginClicked(const QString& email, const QString& password)
{
    if(startDAO.getUserId(email, password) >= 0)
    {
        loginWindow.hide();
        mainController.onLoggedIn(1);
    }
    else
    {
        return false;
    }
}

