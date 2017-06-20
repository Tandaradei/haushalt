#pragma once

#include <QString>
#include <memory>

class User;

class DbManager;

class StartDAO
{
public:
    StartDAO(DbManager& dbManager);
    ~StartDAO();


    bool isFirstStart();
    std::shared_ptr<User> getUser(const QString& email, const QString& password);
    bool createAdmin(const QString& name, const QString& email, const QString& dateString, const QString& password);

    void test();

    void clean();
private:
    void addUser(const QString& email, const QString& password, const QString& name, const QString &dateString, int balance);
    void addPayMethod(size_t BID, const QString& name);
    void addTransaction(size_t BID, int amount, const QString& dateString, size_t KID, size_t ZID);
    void addCategory(const QString& name);
    DbManager& dbManager;
};
