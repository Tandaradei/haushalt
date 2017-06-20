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

<<<<<<< HEAD
    void addUser(const QString& email, const QString& password);
=======
protected:
    std::shared_ptr<std::list<std::shared_ptr<StanPayMethod>>> standardpayMethods;

>>>>>>> b85b73126eda8454cff32ea3e40776915ee8250b
private:
    void loadUsers();
    void loadStandardPayMethods();

    AdminDAO adminDAO;
    std::shared_ptr<std::list<std::shared_ptr<User>>> users;
};


