#include "dbmanager.h"
#include "maincontroller.h"
#include "startcontroller.h"
#include "user.h"
#include <memory>

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
    std::shared_ptr<User> user = startDAO.getUser(email, password);
    if(user != nullptr)
    {
        loginWindow.hide();
        mainController.onLoggedIn(user);
    }
    else
    {
        return false;
    }
}

