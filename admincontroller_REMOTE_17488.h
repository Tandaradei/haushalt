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
    void standardpaydelete(size_t ID);


    void start();

protected:
    std::shared_ptr<std::list<std::shared_ptr<StanPayMethod>>> standardpayMethods;

private:
    void loadUsers();
    void loadStandardPayMethods();

    AdminDAO adminDAO;
    std::shared_ptr<std::list<std::shared_ptr<User>>> users;
};

