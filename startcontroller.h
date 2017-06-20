#pragma once

#include "firststartwindow.h"
#include "loginwindow.h"
#include "startdao.h"
#include <QString>

class MainController;
class DbManager;

class StartController
{
public:
    StartController(MainController& mainController, DbManager& dbManager);
    ~StartController();

    void start();
    bool onLoginClicked(const QString& email, const QString& password);
    void createAdmin(const QString& name, const QString& email, const QDate date, QString password);
    void test();
    void clean();

private:
    MainController& mainController;
    StartDAO startDAO;
    FirstStartWindow firstStartWindow;
    LoginWindow loginWindow;

};

