#include <qdebug.h>
#include "dbmanager.h"

DbManager::DbManager(const QString& path)
{
  database = QSqlDatabase::addDatabase("QSQLITE");
  database.setDatabaseName(path);

  if (!database.open())
  {
    qDebug() << "Error: connection with database fail";
  }
  else
  {
    qDebug() << "Database: connection ok";
  }
}

DbManager::~DbManager()
{

}

