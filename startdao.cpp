#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlError>
#include <QDebug>
#include "dbmanager.h"
#include "startdao.h"

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
    query.bindValue(":email", email);
    query.bindValue(":password", password);
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

