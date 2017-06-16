#pragma once

#include <QString>

class DbManager;

class StartDAO
{
public:
    StartDAO(DbManager& dbManager);
    ~StartDAO();

    bool isFirstStart();
    int getUserId(const QString& email, const QString& password);

private:
    DbManager& dbManager;
};
