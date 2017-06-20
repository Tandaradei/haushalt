#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlError>
#include <QDebug>
#include "dbmanager.h"
#include "admindao.h"
#include "user.h"

AdminDAO::AdminDAO(DbManager &dbManager)
    :dbManager(dbManager)
    ,users(std::make_shared<std::list<std::shared_ptr<User>>>())
{

}

AdminDAO::~AdminDAO()
{

}

std::shared_ptr<std::list<std::shared_ptr<User>>> AdminDAO::loadUsers()
{
    // clear cached users list
    users->clear();
    QSqlQuery query(dbManager.getDatabase());
    query.prepare("SELECT * FROM Benutzer WHERE BID != 1;");
    qDebug() << query.executedQuery();
    if(query.exec())
    {
        qDebug() << "execution successful";
        // iterate through all rows
        while(query.next())
        {
            qDebug() << "User found!";
            std::shared_ptr<User> user = std::make_shared<User>();
            user->ID = query.value(0).toInt();
            user->Email = query.value(1).toString();
            // no password
            user->Name = query.value(3).toString();
            user->Birthdate = query.value(4).toDate();
            user->Balance = query.value(5).toInt();
            // add user to cached users list
            users->push_back(user);
        }
    }
    else
    {
        qDebug() << "loadUsers error:  "
                 << query.lastError().text();
    }
    return users;
}

std::shared_ptr<std::list<std::shared_ptr<User>>> AdminDAO::getUsers()
{
    return users;
}

