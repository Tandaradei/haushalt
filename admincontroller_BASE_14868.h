#pragma once


#include "usercontroller.h"
#include "admindao.h"
#include <memory>

class DbManager;

class AdminController : public UserController
{
public:
    AdminController(MainController &mainController, DbManager& dbManager, std::shared_ptr<User> user);
    ~AdminController();


    void start();
private:
    void loadUsers();

    AdminDAO adminDAO;
    std::shared_ptr<std::list<std::shared_ptr<User>>> users;
};


