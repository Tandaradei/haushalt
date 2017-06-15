#pragma once

#include <QString>

class DbManager;

class StartDAO
{
public:
    StartDAO(DbManager& dbManager);
    ~StartDAO();

    bool isFirstStart();
    bool isValid(const QString& email, const QString& password);

private:
    DbManager& dbManager;
};
