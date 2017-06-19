#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlError>
#include <QDebug>
#include "dbmanager.h"
#include "userdao.h"
#include "user.h"
#include "transaction.h"
#include "category.h"
#include "paymentmethod.h"

UserDAO::UserDAO(DbManager &dbManager, std::shared_ptr<User> user)
    :dbManager(dbManager)
    ,user(user)
    ,transactions(std::make_shared<std::list<std::shared_ptr<Transaction>>>())
    ,categories(std::make_shared<std::list<std::shared_ptr<Category>>>())
    ,paymentMethods(std::make_shared<std::list<std::shared_ptr<PaymentMethod>>>())
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
            transaction->PaymentMethod = getPaymentMethod(query.value(6).toInt());
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

std::shared_ptr<std::list<std::shared_ptr<PaymentMethod>>> UserDAO::loadPaymentMethods()
{
    // clear cached payment methods list
    paymentMethods->clear();
    QSqlQuery query(dbManager.getDatabase());
    query.prepare("SELECT * FROM Zahlungsart WHERE BID = " + QString::number(user->ID) + ";");
    qDebug() << query.executedQuery();
    if(query.exec())
    {
        qDebug() << "execution successful";
        // iterate through all rows
        while(query.next())
        {
            qDebug() << "PaymentMethod found!";
            std::shared_ptr<PaymentMethod> paymentMethod = std::make_shared<PaymentMethod>();
            paymentMethod->ID = query.value(0).toInt();
            // no BID
            paymentMethod->Name = query.value(2).toString();
            // add payment method to cached payment methods list
            paymentMethods->push_back(paymentMethod);
        }
    }
    else
    {
        qDebug() << "getPaymentMethods error:  "
                 << query.lastError().text();
    }
    return paymentMethods;
}

std::shared_ptr<std::list<std::shared_ptr<PaymentMethod>>> UserDAO::getPaymentMethods()
{
    return paymentMethods;
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

std::shared_ptr<PaymentMethod> UserDAO::getPaymentMethod(size_t ID)
{
    // iterate through all payment methods
    for(auto paymentMethodsIt = paymentMethods->begin(), paymentMethodsEnd = paymentMethods->end(); paymentMethodsIt != paymentMethodsEnd; ++paymentMethodsIt)
    {
        if((*paymentMethodsIt)->ID == ID)
        {
            // if ID equals -> return payment method
            return *paymentMethodsIt;
        }
    }
    // return nullptr if payment method wasn't found
    return nullptr;
}

void UserDAO::addTransaction(int amount, const QString& description, const QString& dateString, std::shared_ptr<Category> category, std::shared_ptr<PaymentMethod> paymentMethod)
{
    QSqlQuery query(dbManager.getDatabase());
    query.prepare("INSERT INTO Transaktion(BID, Betrag, Beschreibung, Datum, KID, ZID) VALUES(:BID, :Betrag, :Beschreibung, :Datum, :KID, :ZID');");
    query.bindValue(":BID", user->ID);
    query.bindValue(":Betrag", amount);
    query.bindValue(":Beschreibung", description);
    query.bindValue(":Datum", dateString);
    query.bindValue(":KID", category->ID);
    query.bindValue(":ZID", paymentMethod->ID);
    qDebug() << query.executedQuery();
    if(query.exec())
    {
        qDebug() << "execution successful";
    }
    else
    {
        qDebug() << "addTransaction error:  "
                 << query.lastError().text();
    }
}
