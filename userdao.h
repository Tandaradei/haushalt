#pragma once
#include <list>
#include <memory>

class DbManager;

class Transaction;
class User;

class UserDAO
{
public:
    UserDAO(DbManager& dbManager, std::shared_ptr<User> user);
    ~UserDAO();
    std::list<std::shared_ptr<Transaction>> getTransactions();
private:
    DbManager& dbManager;
    std::shared_ptr<User> user;
};
