#pragma once

class DbManager;

class UserDAO
{
public:
    UserDAO(DbManager& dbManager);
    ~UserDAO();

private:
    DbManager& dbManager;
};
