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
    int getUserId(const QString& email, const QString& password);
    std::shared_ptr<User> getUser(const QString& email, const QString& password);

private:
    DbManager& dbManager;
};
