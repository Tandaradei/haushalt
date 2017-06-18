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
    query.prepare("SELECT * FROM Benutzer WHERE BID = 1;");
    if(query.exec())
    {
        return !query.next();
    }
    else
    {
        qDebug() << "isFirstStart error:  "
                 << query.lastError().text();
    }
    return true;
}

// returns userid or -1 if no user was found
int StartDAO::getUserId(const QString &email, const QString &password)
{
    int userId = -1;
    QSqlQuery query(dbManager.getDatabase());
    query.prepare("SELECT BID FROM Benutzer WHERE Email = '"+ email +"' AND HashedKennwort = '"+ password +"';");
    qDebug() << query.executedQuery();
    if(query.exec())
    {
        qDebug() << "execution successful";
        if(query.next())
        {
            userId = query.value(0).toInt();
        }
    }
    else
    {
        qDebug() << "getUserId error:  "
                 << query.lastError().text();
    }

    return userId;

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

