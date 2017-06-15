#pragma once


#include "usercontroller.h"
#include "admindao.h"

class DbManager;

class AdminController : public UserController
{
public:
    AdminController(MainController &mainController, DbManager& dbManager);
    ~AdminController();


    void start();
private:
    AdminDAO adminDAO;
    //AdminWindow adminWindow;
};


