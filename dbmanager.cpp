#include <qdebug.h>
#include "dbmanager.h"

DbManager::DbManager(const QString& path)
{
  // set sqlite database driver
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
    database.close();
}

QSqlDatabase& DbManager::getDatabase()
{
    return database;
}

