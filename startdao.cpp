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
    return false;
}

// returns userid or -1 if no user was found
int StartDAO::getUserId(const QString &email, const QString &password)
{
    //return (email == "Test@test.com" && password == "1234");
    int userId = -1;
   // you should check if args are ok first...
   QSqlQuery query;
   query.prepare("SELECT * from user WHERE email = (:email) AND password = (:password)");
   query.bindValue(":email", email);
   query.bindValue(":password", password);
   if(query.exec())
   {
       int indexUserId = query.record().indexOf("userid");
       userId = query.value(indexUserId).toInt();
   }
   else
   {
        qDebug() << "getUserId error:  "
                 << query.lastError();
   }

   return userId;

}

