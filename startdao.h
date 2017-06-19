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

private:
    DbManager& dbManager;
};
