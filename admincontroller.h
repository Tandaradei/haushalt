#pragma once


#include "usercontroller.h"
#include "admindao.h"
#include <memory>

class DbManager;

class User;
class StanPayMethod;

class AdminController : public UserController
{
public:
    AdminController(MainController &mainController, DbManager& dbManager, std::shared_ptr<User> user);
    ~AdminController();


    void start();

    void addUser(const QString& email, const QString& password);
private:
    void loadUsers();
    void loadStanPayMethods();

    AdminDAO adminDAO;
    std::shared_ptr<std::list<std::shared_ptr<User>>> users;
    std::shared_ptr<std::list<std::shared_ptr<StanPayMethod>>> stanPayMethods;
};


