#include "dbmanager.h"
#include "userdao.h"


UserDAO::UserDAO(DbManager &dbManager)
    :dbManager(dbManager)
{

}

UserDAO::~UserDAO()
{

}

