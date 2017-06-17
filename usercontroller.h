#pragma once

#include "userdao.h"
#include "userwindow.h"
#include <memory>

class User;
class Transaction;

class MainController;
class DbManager;

class UserController
{
public:
    UserController(MainController &mainController, DbManager& dbManager, std::shared_ptr<User> user);
    ~UserController();

    void start();
    void onLogout();

protected:
    MainController& mainController;
    UserDAO userDAO;
    UserWindow userWindow;
    std::shared_ptr<User> user;
    std::list<std::shared_ptr<Transaction>> transactions;
private:
};

