#include "dbmanager.h"
#include "startdao.h"

StartDAO::StartDAO(DbManager &dbManager)
    :dbManager(dbManager)
{

}

StartDAO::~StartDAO()
{

}

bool StartDAO::isFirstStart()
{
    return false;
}

bool StartDAO::isValid(const QString &email, const QString &password)
{
    return (email == "Test@test.com" && password == "1234");

}

