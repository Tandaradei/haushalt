#pragma once

#include <QApplication>
#include "dbmanager.h"
#include <memory>

class User;

class StartController;
class UserController;
class AdminController;

class MainController
{
public:
    MainController(int argc, char *argv[]);
    ~MainController();

    int exec();
    void onLoggedIn(std::shared_ptr<User> user);
    void close();

private:
    QApplication application;
    DbManager dbManager;
    std::shared_ptr<StartController> startController;
    std::shared_ptr<UserController> userController;
    std::shared_ptr<AdminController> adminController;
};

