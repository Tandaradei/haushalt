#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlError>
#include <QDebug>
#include "dbmanager.h"
#include "userdao.h"
#include "user.h"
#include "transaction.h"


UserDAO::UserDAO(DbManager &dbManager, std::shared_ptr<User> user)
    :dbManager(dbManager)
    ,user(user)
{

}

UserDAO::~UserDAO()
{

}

std::list<std::shared_ptr<Transaction>> UserDAO::getTransactions()
{
    std::list<std::shared_ptr<Transaction>> transactions;
    QSqlQuery query(dbManager.getDatabase());
    query.prepare("SELECT * FROM Transaktion WHERE BID = " + QString::number(user->BID) + ";");
    qDebug() << query.executedQuery();
    if(query.exec())
    {
        qDebug() << "execution successful";
        while(query.next())
        {
            qDebug() << "Transaction found!";
            std::shared_ptr<Transaction> transaction = std::make_shared<Transaction>();
            transaction->TID = query.value(0).toInt();
            transaction->User = user;
            transaction->Amount = query.value(2).toInt();
            transaction->Description = query.value(3).toString();
            transaction->Date = query.value(4).toDate();
            // category
            // paymentmethod
            transactions.push_back(transaction);
        }
    }
    else
    {
        qDebug() << "getUserId error:  "
                 << query.lastError().text();
    }
    return transactions;
}
