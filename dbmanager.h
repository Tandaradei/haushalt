#pragma once

#include <QString>
#include <QSqlDatabase>

class DbManager
{
public:
    DbManager(const QString& path);
    ~DbManager();
    QSqlDatabase& getDb();
private:
    QSqlDatabase database;
};

