#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlError>
#include <QDebug>
#include "dbmanager.h"
#include "startdao.h"
#include "user.h"

StartDAO::StartDAO(DbManager& dbManager)
    :dbManager(dbManager)
{

}

StartDAO::~StartDAO()
{

}

bool StartDAO::isFirstStart()
{
    QSqlQuery query(dbManager.getDatabase());
    // get user with BID == 1 from database
    query.prepare("SELECT * FROM Benutzer WHERE BID = 1;");
    if(query.exec())
    {
        // if user exists return false, else return true
        return !query.next();
    }
    else
    {
        qDebug() << "isFirstStart error:  "
                 << query.lastError().text();
    }
    return true;
}


std::shared_ptr<User> StartDAO::getUser(const QString &email, const QString &password)
{
    std::shared_ptr<User> user = nullptr;
    QSqlQuery query(dbManager.getDatabase());
    query.prepare("SELECT * FROM Benutzer WHERE Email = '"+ email +"' AND HashedKennwort = '"+ password +"';");
    qDebug() << query.executedQuery();
    if(query.exec())
    {
        qDebug() << "execution successful";
        if(query.next())
        {
            // create user and fill with data
            user = std::make_shared<User>();
            user->ID = query.value(0).toInt();
            user->Email = query.value(1).toString();
            // no password
            user->Name = query.value(3).toString();
            user->Birthdate = query.value(4).toDate();
            user->Balance = query.value(5).toInt();
        }
    }
    else
    {
        qDebug() << "getUserId error:  "
                 << query.lastError().text();
    }
    return user;
}

