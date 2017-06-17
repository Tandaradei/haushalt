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
    int userId = startDAO.getUserId(email, password);
    if(userId >= 0)
    {
        loginWindow.hide();
        mainController.onLoggedIn(userId);
    }
    else
    {
        return false;
    }
}

