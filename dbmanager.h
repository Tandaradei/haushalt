#pragma once

#include <QString>
#include <QSqlDatabase>

class DbManager
{
public:
    DbManager(const QString& path);
    ~DbManager();
private:
    QSqlDatabase database;
};

