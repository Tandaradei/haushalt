#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlError>
#include <QDebug>
#include "dbmanager.h"
#include "userdao.h"
#include "user.h"
#include "transaction.h"
#include "category.h"
#include "payMethod.h"

UserDAO::UserDAO(DbManager &dbManager, std::shared_ptr<User> user)
    :dbManager(dbManager)
    ,user(user)
    ,transactions(std::make_shared<std::list<std::shared_ptr<Transaction>>>())
    ,categories(std::make_shared<std::list<std::shared_ptr<Category>>>())
    ,payMethods(std::make_shared<std::list<std::shared_ptr<PayMethod>>>())
{

}

UserDAO::~UserDAO()
{

}

std::shared_ptr<std::list<std::shared_ptr<Transaction>>> UserDAO::loadTransactions()
{
    // clear cached transactions list
    transactions->clear();
    QSqlQuery query(dbManager.getDatabase());
    query.prepare("SELECT * FROM Transaktion WHERE BID = " + QString::number(user->ID) + ";");
    qDebug() << query.executedQuery();
    if(query.exec())
    {
        qDebug() << "execution successful";
        // iterate through all rows
        while(query.next())
        {
            qDebug() << "Transaction found!";
            std::shared_ptr<Transaction> transaction = std::make_shared<Transaction>();
            transaction->ID = query.value(0).toInt();
            // no BID
            transaction->Amount = query.value(2).toInt();
            transaction->Description = query.value(3).toString();
            transaction->Date = query.value(4).toDate();
            transaction->Category = getCategory(query.value(5).toInt());
            transaction->PayMethod = getPayMethod(query.value(6).toInt());
            // add transaction to cached transactions list
            transactions->push_back(transaction);
        }
    }
    else
    {
        qDebug() << "getTransactions error:  "
                 << query.lastError().text();
    }
    return transactions;
}

std::shared_ptr<std::list<std::shared_ptr<Transaction>>> UserDAO::getTransactions()
{
    return transactions;
}

std::shared_ptr<std::list<std::shared_ptr<Category>>> UserDAO::loadCategories()
{
    // clear cached categories list
    categories->clear();
    QSqlQuery query(dbManager.getDatabase());
    query.prepare("SELECT * FROM Kategorie;");
    qDebug() << query.executedQuery();
    if(query.exec())
    {
        qDebug() << "execution successful";
        // iterate through all rows
        while(query.next())
        {
            qDebug() << "Category found!";
            std::shared_ptr<Category> category = std::make_shared<Category>();
            category->ID = query.value(0).toInt();
            category->Name = query.value(1).toString();
            // add category to cached categories list
            categories->push_back(category);
        }
    }
    else
    {
        qDebug() << "getCategories error:  "
                 << query.lastError().text();
    }
    return categories;
}

std::shared_ptr<std::list<std::shared_ptr<Category>>> UserDAO::getCategories()
{
    return categories;
}

std::shared_ptr<Category> UserDAO::addCategory(const QString& name)
{
    QSqlQuery query(dbManager.getDatabase());
    query.prepare("INSERT INTO Kategorie(Name) VALUES(:Name);");
    query.bindValue(":Name", name);
    if(query.exec())
    {
        qDebug() << "execution successful";
        std::shared_ptr<Category> category = std::make_shared<Category>();
        category->ID = query.lastInsertId().toInt();
        category->Name = name;
        categories->push_back(category);
        return category;
    }
    else
    {
        qDebug() << "addCategory error:  "
                 << query.lastError().text();
    }
    return nullptr;
}

bool UserDAO::deleteCategory(size_t categoryId)
{
    QSqlQuery query(dbManager.getDatabase());
    query.prepare("DELETE FROM Kategorie WHERE KID = :KID");
    query.bindValue(":KID", categoryId);
    if(query.exec())
    {
        return true;
    }
    else
    {
        qDebug() << "deleteCategory error:  "
                 << query.lastError().text();
    }
    return false;
}

std::shared_ptr<std::list<std::shared_ptr<PayMethod>>> UserDAO::loadPayMethods()
{
    // clear cached payment methods list
    payMethods->clear();
    QSqlQuery query(dbManager.getDatabase());
    query.prepare("SELECT * FROM Zahlungsart WHERE BID = " + QString::number(user->ID) + ";");
    qDebug() << query.executedQuery();
    if(query.exec())
    {
        qDebug() << "execution successful";
        // iterate through all rows
        while(query.next())
        {
            qDebug() << "PayMethod found!";
            std::shared_ptr<PayMethod> payMethod = std::make_shared<PayMethod>();
            payMethod->ID = query.value(0).toInt();
            // no BID
            payMethod->Name = query.value(2).toString();
            // add payment method to cached payment methods list
            payMethods->push_back(payMethod);
        }
    }
    else
    {
        qDebug() << "getPayMethods error:  "
                 << query.lastError().text();
    }
    return payMethods;
}

std::shared_ptr<std::list<std::shared_ptr<PayMethod>>> UserDAO::getPayMethods()
{
    return payMethods;
}

std::shared_ptr<Transaction> UserDAO::getTransaction(size_t ID)
{
    // iterate through all transactions
    for(auto transactionsIt = transactions->begin(), transactionsEnd = transactions->end(); transactionsIt != transactionsEnd; ++transactionsIt)
    {
        if((*transactionsIt)->ID == ID)
        {
            // if ID equals -> return transaction
            return *transactionsIt;
        }
    }
    // return nullptr if transaction wasn't found
    return nullptr;
}

std::shared_ptr<Category> UserDAO::getCategory(size_t ID)
{
    // iterate through all categories
    for(auto categoriesIt = categories->begin(), categoriesEnd = categories->end(); categoriesIt != categoriesEnd; ++categoriesIt)
    {
        if((*categoriesIt)->ID == ID)
        {
            // if ID equals -> return category
            return *categoriesIt;
        }
    }
    // return nullptr if category wasn't found
    return nullptr;
}

std::shared_ptr<PayMethod> UserDAO::getPayMethod(size_t ID)
{
    // iterate through all payment methods
    for(auto payMethodsIt = payMethods->begin(), payMethodsEnd = payMethods->end(); payMethodsIt != payMethodsEnd; ++payMethodsIt)
    {
        if((*payMethodsIt)->ID == ID)
        {
            // if ID equals -> return payment method
            return *payMethodsIt;
        }
    }
    // return nullptr if payment method wasn't found
    return nullptr;
}

std::shared_ptr<Transaction> UserDAO::addTransaction(int amount, const QString& description, const QString& dateString, std::shared_ptr<Category> category, std::shared_ptr<PayMethod> payMethod)
{
    QSqlQuery query(dbManager.getDatabase());
    query.prepare("INSERT INTO Transaktion(BID, Betrag, Beschreibung, Datum, KID, ZID) VALUES(:BID, :Betrag, :Beschreibung, :Datum, :KID, :ZID);");
    query.bindValue(":BID", user->ID);
    query.bindValue(":Betrag", amount);
    query.bindValue(":Beschreibung", description);
    query.bindValue(":Datum", dateString);
    query.bindValue(":KID", category->ID);
    query.bindValue(":ZID", payMethod->ID);
    qDebug() << query.executedQuery();
    if(query.exec())
    {
        qDebug() << "execution successful";
        std::shared_ptr<Transaction> transaction = std::make_shared<Transaction>();
        transaction->ID = query.lastInsertId().toInt();
        // no BID
        transaction->Amount = amount;
        transaction->Description = description;
        transaction->Date = QDate::fromString(dateString, "yyyy-MM-dd");
        transaction->Category = category;
        transaction->PayMethod = payMethod;
        // add transaction to cached transactions list
        transactions->push_back(transaction);
        return transaction;
    }
    else
    {
        qDebug() << "addTransaction error:  "
                 << query.lastError().text();
    }
    return nullptr;
}

bool UserDAO::updateTransaction(std::shared_ptr<Transaction> transaction, int amount, const QString &description, const QString &dateString, std::shared_ptr<Category> category, std::shared_ptr<PayMethod> payMethod)
{
    QSqlQuery query(dbManager.getDatabase());
    query.prepare("UPDATE Transaktion SET Betrag = :Betrag, Beschreibung = :Beschreibung, Datum = :Datum, KID = :KID, ZID = :ZID WHERE TID = :TID;");
    query.bindValue(":Betrag", amount);
    query.bindValue(":Beschreibung", description);
    query.bindValue(":Datum", dateString);
    query.bindValue(":KID", category->ID);
    query.bindValue(":ZID", payMethod->ID);
    query.bindValue(":TID", transaction->ID);
    qDebug() << query.executedQuery();
    if(query.exec())
    {
        qDebug() << "execution successful";
        // TID unchanged
        // BID unchanged
        transaction->Amount = amount;
        transaction->Description = description;
        transaction->Date = QDate::fromString(dateString, "yyyy-MM-dd");
        transaction->Category = category;
        transaction->PayMethod = payMethod;
        return true;
    }
    else
    {
        qDebug() << "updateTransaction error:  "
                 << query.lastError().text();
    }
    return false;
}

bool UserDAO::deleteTransaction(size_t ID)
{
    QSqlQuery query(dbManager.getDatabase());
    query.prepare("DELETE FROM Transaktion WHERE TID = :TID");
    query.bindValue(":TID", ID);
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

std::shared_ptr<PayMethod> UserDAO::addPayMethod(const QString &name)
{
    QSqlQuery query(dbManager.getDatabase());
    query.prepare("INSERT INTO Zahlungsart(BID, Name) VALUES(:BID, :Name);");
    query.bindValue(":BID", user->ID);
    query.bindValue(":Name", name);
    qDebug() << query.executedQuery();
    if(query.exec())
    {
        qDebug() << "execution successful";
        std::shared_ptr<PayMethod> payMethod = std::make_shared<PayMethod>();
        payMethod->ID = query.lastInsertId().toInt();
        // no BID
        payMethod->Name = name;
        payMethods->push_back(payMethod);
        return payMethod;
    }
    else
    {
        qDebug() << "addPayMethod error:  "
                 << query.lastError().text();
    }
    return nullptr;
}

bool UserDAO::deletePayMethod(std::shared_ptr<PayMethod> payMethod)
{
    QSqlQuery selQuery(dbManager.getDatabase());
    selQuery.prepare("SELECT * FROM Transaktion WHERE ZID = :ZID;");
    selQuery.bindValue(":ZID", payMethod->ID);
    qDebug() << selQuery.executedQuery();
    if(selQuery.exec())
    {
        if(!selQuery.next())
        {
            QSqlQuery query(dbManager.getDatabase());
            query.prepare("DELETE FROM Zahlungsart WHERE ZID = :ZID;");
            query.bindValue(":ZID", payMethod->ID);
            qDebug() << query.executedQuery();
            if(query.exec())
            {
                return true;
            }
            else
            {
                qDebug() << "deletePayMethod delete error:  "
                         << query.lastError().text();
            }
        }
        else
        {
            // transactions with this pay method found
            return false;
        }
    }
    else
    {
        qDebug() << "deletePayMethod select error:  "
                 << selQuery.lastError().text();
    }
    return false;
}

bool UserDAO::updateUserData(const QString &name, const QString &dateString)
{
    QSqlQuery query(dbManager.getDatabase());
    query.prepare("UPDATE Benutzer SET Name = :Name, Geburtsdatum = :Geburtsdatum WHERE BID = :BID;");
    query.bindValue(":Name", name);
    query.bindValue(":Geburtsdatum", dateString);
    query.bindValue(":BID", user->ID);
    if(query.exec())
    {
        user->Name = name;
        user->Birthdate = QDate::fromString(dateString, "yyyy-MM-dd");
        return true;
    }
    else
    {
        qDebug() << "updateUser error:  "
                 << query.lastError().text();
    }
    return false;
}

bool UserDAO::updateUserPassword(const QString &oldPassword, const QString &newPassword)
{
    QSqlQuery testQuery(dbManager.getDatabase());
    testQuery.prepare("SELECT * FROM Benutzer WHERE BID = :BID AND HashedKennwort = :HashedKennwort;");
    testQuery.bindValue(":BID", user->ID);
    testQuery.bindValue(":HashedKennwort", oldPassword);
    if(testQuery.exec())
    {
        if(testQuery.next())
        {
            QSqlQuery query(dbManager.getDatabase());
            query.prepare("UPDATE Benutzer SET HashedKennwort = :HashedKennwort WHERE BID = :BID;");
            query.bindValue(":HashedKennwort", newPassword);
            query.bindValue(":BID", user->ID);
            if(query.exec())
            {
                return true;
            }
            else
            {
                qDebug() << "updateUserPassword update error:  "
                         << query.lastError().text();
            }
        }
        else
        {
            qDebug() << "wrong password";
            return false;
        }
    }
    else
    {
        qDebug() << "updateUserPassword select error:  "
                 << testQuery.lastError().text();
    }

    return false;
}
