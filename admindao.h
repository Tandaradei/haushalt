#pragma once

class DbManager;

class AdminDAO
{
public:
    AdminDAO(DbManager& dbManager);
    ~AdminDAO();

private:
    DbManager& dbManager;
};

