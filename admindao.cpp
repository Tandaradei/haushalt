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
    ,stanPayMethods(std::make_shared<std::list<std::shared_ptr<StanPayMethod>>>())
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

std::shared_ptr<User> AdminDAO::addUser(const QString &email, const QString &password)
{
    QSqlQuery query(dbManager.getDatabase());
    query.prepare("INSERT INTO Benutzer(Email, HashedKennwort, Name, Geburtsdatum, Kontostand) VALUES(:Email, :HashedKennwort, :Name, :Geburtsdatum, :Kontostand);");
    query.bindValue(":Email", email);
    query.bindValue(":HashedKennwort", password);
    query.bindValue(":Name", "<Name>");
    query.bindValue(":Geburtsdatum", "1980-01-01");
    query.bindValue(":Kontostand", 0);
    qDebug() << query.executedQuery();
    if(query.exec())
    {
        qDebug() << "execution successful";
        std::shared_ptr<User> user = std::make_shared<User>();
        user->ID = query.lastInsertId().toInt();
        // no BID
        user->Email = email;
        user->Name = "<Name>";
        user->Birthdate = QDate::fromString("1980-01-01", "yyyy-MM-dd");
        user->Balance = 0;
        // add user to cached users list
        users->push_back(user);
        for(auto stanPayMethodsIt = stanPayMethods->begin(); stanPayMethodsIt != stanPayMethods->end(); ++stanPayMethodsIt)
        {
            addPayMethod(user->ID, (*stanPayMethodsIt)->Name);
        }
        return user;
    }
    else
    {
        qDebug() << "addTransaction error:  "
                 << query.lastError().text();
    }
    return nullptr;
}

void AdminDAO::addPayMethod(size_t userId, const QString &payMethodName)
{
    QSqlQuery query(dbManager.getDatabase());
    query.prepare("INSERT INTO Zahlungsart(BID, Name) VALUES(:BID, :Name);");
    query.bindValue(":BID", userId);
    query.bindValue(":Name", payMethodName);
    qDebug() << query.executedQuery();
    if(query.exec())
    {
        qDebug() << "execution successful";
    }
    else
    {
        qDebug() << "addPayMethod error:  "
                 << query.lastError().text();
    }
}

bool AdminDAO::updateUserPassword(size_t userId, const QString &password)
{
    QSqlQuery query(dbManager.getDatabase());
    query.prepare("UPDATE Benutzer SET HashedKennwort = :HashedKennwort WHERE BID = :BID;");
    query.bindValue(":HashedKennwort", password);
    query.bindValue(":BID", userId);
    if(query.exec())
    {
        return true;
    }
    else
    {
        qDebug() << "updateUserPassword update error:  "
                 << query.lastError().text();
    }
    return false;
}

bool AdminDAO::deleteUser(size_t userId)
{
    QSqlQuery query(dbManager.getDatabase());
    query.prepare("DELETE FROM Benutzer WHERE BID = :BID");
    query.bindValue(":BID", userId);
    if(query.exec())
    {
        query.prepare("DELETE FROM Transaktion WHERE BID = :BID");
        query.bindValue(":BID", userId);
        if(query.exec())
        {
            query.prepare("DELETE FROM Zahlungsart WHERE BID = :BID");
            query.bindValue(":BID", userId);
            if(query.exec())
            {
                return true;
            }
            else
            {
                qDebug() << "deleteUser pay method error:  "
                         << query.lastError().text();
            }
        }
        else
        {
            qDebug() << "deleteUser transaction error:  "
                     << query.lastError().text();
        }
    }
    else
    {
        qDebug() << "deleteUser user error:  "
                 << query.lastError().text();
    }
    return false;
}

std::shared_ptr<std::list<std::shared_ptr<StanPayMethod>>> AdminDAO::loadStanPayMethods()
{
    // clear cached standardpayment methods list
    stanPayMethods->clear();
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
            std::shared_ptr<StanPayMethod> stanpayMethod = std::make_shared<StanPayMethod>();
            stanpayMethod->ID = query.value(0).toInt();
            stanpayMethod->Name = query.value(1).toString();
            // add standardpayment method to cached payment methods list
            stanPayMethods->push_back(stanpayMethod);
        }
    }
    else
    {
        qDebug() << "getPayMethods error:  "
                 << query.lastError().text();
    }
    return stanPayMethods;
}

std::shared_ptr<std::list<std::shared_ptr<StanPayMethod> > > AdminDAO::getStanPayMethods()
{
    return stanPayMethods;
}

std::shared_ptr<StanPayMethod> AdminDAO::addStanPayMethod(const QString &name)
{
    QSqlQuery query(dbManager.getDatabase());
    query.prepare("INSERT INTO Standardzahlungsart(Name) VALUES(:Name);");
    query.bindValue(":Name", name);
    if(query.exec())
    {
        qDebug() << "execution successful";
        std::shared_ptr<StanPayMethod> stanPayMethod = std::make_shared<StanPayMethod>();
        stanPayMethod->ID = query.lastInsertId().toInt();
        stanPayMethod->Name = name;
        stanPayMethods->push_back(stanPayMethod);
        return stanPayMethod;
    }
    else
    {
        qDebug() << "addStanPayMethod error:  "
                 << query.lastError().text();
    }
    return nullptr;

}

bool AdminDAO::deleteStanPayMethod(size_t stanPayMethodId)
{
    QSqlQuery query(dbManager.getDatabase());
    query.prepare("DELETE FROM Standardzahlungsart WHERE SID = :SID");
    query.bindValue(":SID", stanPayMethodId);
    if(query.exec())
    {
        return true;
    }
    else
    {
        qDebug() << "deleteStanPayMethod error:  "
                 << query.lastError().text();
    }
    return false;
}


