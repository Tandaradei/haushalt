#pragma once

#include <QString>
#include <QDate>

struct User
{
public:
    size_t BID; // BID >= 0
    QString Email;
    // No password
    QString Name;
    QDate Birthdate;
    int Balance; // Balance in euro cents

};

