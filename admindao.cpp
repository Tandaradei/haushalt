#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlError>
#include <QDebug>
#include "dbmanager.h"
#include "admindao.h"
#include "user.h"
#include "stanpayMethod.h"

AdminDAO::AdminDAO(DbManager &dbManager)
    :dbManager(dbManager)
    ,users(std::make_shared<std::list<std::shared_ptr<User>>>())
    ,stanpayMethods(std::make_shared<std::list<std::shared_ptr<StanPayMethod>>>());
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

std::shared_ptr<std::list<std::shared_ptr<StanPayMethod>>> AdminDAO::loadStanPayMethods()
{
    // clear cached standardpayment methods list
    stanpayMethods->clear();
    QSqlQuery query(dbManager.getDatabase());
    query.prepare("SELECT * FROM Standardzahlungsart");
    qDebug() << query.executedQuery();
    if(query.exec())
    {
        qDebug() << "execution successful";
        // iterate through all rows
        while(query.next())
        {
            qDebug() << "StanPayMethod found!";
            std::shared_ptr<StanPayMethod> stanpayMethod1 = std::make_shared<StanPayMethod>();
            stanpayMethod1.ID = query.value(0).toInt();
            // no BID
            stanpayMethod1->Name = query.value(2).toString();
            // add standardpayment method to cached payment methods list
            stanpayMethods->push_back(stanpayMethod1);
        }
    }
    else
    {
        qDebug() << "getPayMethods error:  "
                 << query.lastError().text();
    }
    return stanpayMethods;
}

std::shared_ptr<StanPayMethod> AdminDAO::getStanPayMethod(size_t ID)
{
    // iterate through all payment methods
    for(auto stanpayMethodsIt = stanpayMethods->begin(), stanpayMethodsEnd = stanpayMethods->end(); stanpayMethodsIt != stanpayMethodsEnd; ++stanpayMethodsIt)
    {
        if((*stanpayMethodsIt)->ID == ID)
        {
            // if ID equals -> return payment method
            return *stanpayMethodsIt;
        }
    }
    // return nullptr if standardpayment method wasn't found
    return nullptr;
}


bool AdminDAO::deletestandardpayment(size_t ID)
{
    QSqlQuery query(dbManager.getDatabase());
    query.prepare("DELETE FROM Standartzahlungsart WHERE StandartzahlungsartID = :SID");
    query.bindValue(":SID", ID);
    qDebug() << query.executedQuery();
    if(query.exec())
    {
         qDebug() << "execution successful";
         return true;
    }
    else
    {
        qDebug() << "addTransaction error:  "
                 << query.lastError().text();
    }
    return false;
}

