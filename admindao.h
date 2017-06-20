#pragma once

#include <list>
#include <memory>

#include <QString>
#include <QDate>

class DbManager;
class User;
class StanPayMethod;

class AdminDAO
{
public:
    AdminDAO(DbManager& dbManager);
    ~AdminDAO();

    std::shared_ptr<std::list<std::shared_ptr<User>>> loadUsers();
    std::shared_ptr<std::list<std::shared_ptr<User>>> getUsers();

    std::shared_ptr<std::list<std::shared_ptr<StanPayMethod>>> loadStanPayMethods;
    std::shared_ptr<std::list<std::shared_ptr<StanPayMethod>>> getStanPayMethods();

    std::shared_ptr<StanPayMethod> getPayMethod(size_t ID);
    bool deletestandardpayment(size_t ID);


private:
    DbManager& dbManager;
    std::shared_ptr<std::list<std::shared_ptr<User>>> users;

    std::shared_ptr<std::list<std::shared_ptr<StanPayMethod>>> stanpayMethods;
};

