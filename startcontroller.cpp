#include "dbmanager.h"
#include "maincontroller.h"
#include "startcontroller.h"
#include "user.h"
#include <memory>

StartController::StartController(MainController& mainController, DbManager &dbManager)
    :mainController(mainController)
    ,startDAO(dbManager)
    ,firstStartWindow(*this)
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

void StartController::createAdmin(const QString& name, const QString& email, const QDate date, QString pw){


}

bool StartController::onLoginClicked(const QString& email, const QString& password)
{
    // get user with this email and password from database (if exists)
    std::shared_ptr<User> user = startDAO.getUser(email, password);
    // if user exists -> log in
    if(user != nullptr)
    {
        loginWindow.hide();
        mainController.onLoggedIn(user);
        return true;
    }
    // login failed
    return false;
}

