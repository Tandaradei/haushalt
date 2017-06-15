#pragma once

#include "userdao.h"
#include "userwindow.h"

class MainController;
class DbManager;

class UserController
{
public:
    UserController(MainController &mainController, DbManager& dbManager);
    ~UserController();

    void start();
    void onLogout();

protected:
    MainController& mainController;
    UserDAO userDAO;

private:
    UserWindow userWindow;
};

