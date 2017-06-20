#pragma once

#include <list>
#include <memory>

#include <QString>
#include <QDate>

class DbManager;
class User;

class AdminDAO
{
public:
    AdminDAO(DbManager& dbManager);
    ~AdminDAO();

    std::shared_ptr<std::list<std::shared_ptr<User>>> loadUsers();
    std::shared_ptr<std::list<std::shared_ptr<User>>> getUsers();

private:
    DbManager& dbManager;
    std::shared_ptr<std::list<std::shared_ptr<User>>> users;
};

