#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlError>
#include <QDebug>
#include "dbmanager.h"
#include "startdao.h"
#include "user.h"

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
    // get user with BID == 1 from database
    query.prepare("SELECT * FROM Benutzer WHERE BID = 1;");
    if(query.exec())
    {
        // if user exists return false, else return true
        return !query.next();
    }
    else
    {
        qDebug() << "isFirstStart error:  "
                 << query.lastError().text();
    }
    return true;
}


std::shared_ptr<User> StartDAO::getUser(const QString &email, const QString &password)
{
    std::shared_ptr<User> user = nullptr;
    QSqlQuery query(dbManager.getDatabase());
    query.prepare("SELECT * FROM Benutzer WHERE Email = '"+ email +"' AND HashedKennwort = '"+ password +"';");
    qDebug() << query.executedQuery();
    if(query.exec())
    {
        qDebug() << "execution successful";
        if(query.next())
        {
            // create user and fill with data
            user = std::make_shared<User>();
            user->ID = query.value(0).toInt();
            user->Email = query.value(1).toString();
            // no password
            user->Name = query.value(3).toString();
            user->Birthdate = query.value(4).toDate();
            user->Balance = query.value(5).toInt();
        }
    }
    else
    {
        qDebug() << "getUserId error:  "
                 << query.lastError().text();
    }
    return user;
}

bool StartDAO::createAdmin(const QString &name, const QString &email, const QString &dateString, const QString &password)
{
  QSqlQuery delQuery(dbManager.getDatabase());
  delQuery.prepare("DELETE * FROM Benutzer");
  delQuery.exec();
  QSqlQuery query(dbManager.getDatabase());
  query.prepare("INSERT INTO Benutzer(Email, HashedKennwort, Name, Geburtsdatum, Kontostand) VALUES(:Email, :HashedKennwort, :Name, :Geburtsdatum, :Kontostand);");
  query.bindValue(":Email", email);
  query.bindValue(":HashedKennwort", password);
  query.bindValue(":Name", name);
  query.bindValue(":Geburtsdatum", dateString);
  query.bindValue(":Kontostand", 0);
  qDebug() << query.executedQuery();
  if(query.exec())
  {
      qDebug() << "execution successful";
      return true;
  }
  else
  {
      qDebug() << "createAdmin error:  "
               << query.lastError().text();
  }
  return false;
}


void StartDAO::addUser(const QString &email, const QString &password, const QString &name, const QString& dateString, int balance)
{
    QSqlQuery query(dbManager.getDatabase());
    query.prepare("INSERT INTO Benutzer(Email, HashedKennwort, Name, Geburtsdatum, Kontostand) VALUES(:Email, :HashedKennwort, :Name, :Geburtsdatum, :Kontostand);");
    query.bindValue(":Email", email);
    query.bindValue(":HashedKennwort", password);
    query.bindValue(":Name", name);
    query.bindValue(":Geburtsdatum", dateString);
    query.bindValue(":Kontostand", balance);
    qDebug() << query.executedQuery();
    if(query.exec())
    {
        qDebug() << "execution successful";
    }
    else
    {
        qDebug() << "addUser error:  "
                 << query.lastError().text();
    }
}

void StartDAO::addPayMethod(size_t BID, const QString &name)
{
    QSqlQuery query(dbManager.getDatabase());
    query.prepare("INSERT INTO Zahlungsart(BID, Name) VALUES(:BID, :Name);");
    query.bindValue(":BID", BID);
    query.bindValue(":Name", name);
    qDebug() << query.executedQuery();
    if(query.exec())
    {
        qDebug() << "execution successful";
    }
    else
    {
        qDebug() << "addPayMethod error:  "
                 << query.lastError().text();
    }
}

void StartDAO::addTransaction(size_t BID, int amount, const QString &dateString, size_t KID, size_t ZID)
{
    QSqlQuery query(dbManager.getDatabase());
    query.prepare("INSERT INTO Transaktion(BID, Betrag, Datum, KID, ZID) VALUES(:BID, :Betrag, :Datum, :KID, :ZID);");
    query.bindValue(":BID", BID);
    query.bindValue(":Betrag", amount);
    query.bindValue(":Datum", dateString);
    query.bindValue(":KID", KID);
    query.bindValue(":ZID", ZID);
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

void StartDAO::addCategory(const QString &name)
{
    QSqlQuery query(dbManager.getDatabase());
    query.prepare("INSERT INTO Kategorie(Name) VALUES(:Name);");
    query.bindValue(":Name", name);
    qDebug() << query.executedQuery();
    if(query.exec())
    {
        qDebug() << "execution successful";
    }
    else
    {
        qDebug() << "addCategory error:  "
                 << query.lastError().text();
    }
}

void StartDAO::test()
{
    //insert Roland Dietrich as Admin
    createAdmin("Roland Dietrich", "rd@hs.aa", "1970-01-01", "RD");

    //insert klara musterfrau
    addUser("km@hs.aa", "KM", "Klara Musterfrau", "1980-05-30", 0);

    //insert max mustersohn
    addUser("mm@hs.aa", "MM", "Max Mustersohn", "2000-01-12", 0);

    //insert kategorie Gehaltseingang, Lebensmittel, Freizeit
    addCategory("Gehaltseingang");
    addCategory("Lebensmittel");
    addCategory("Freizeit");

    //insert zahlungsart Bar, Überweisung, Kreditkarte
    addPayMethod(1, "Bar");
    addPayMethod(1, "Überweisung");
    addPayMethod(1, "Kreditkarte");

    addPayMethod(2, "Bar");
    addPayMethod(2, "Überweisung");
    addPayMethod(2, "Kreditkarte");

    addPayMethod(3, "Bar");
    addPayMethod(3, "Überweisung");
    addPayMethod(3, "Kreditkarte");

    //insert Transaktionen
    addTransaction(1, -1000, "2017-03-17", 3, 3);
    addTransaction(1, -2000, "2017-03-17", 2, 1);
    addTransaction(1, 239000, "2017-06-01", 1, 1);

    addTransaction(2, 250000, "2017-03-17", 1, 2);
    addTransaction(2, -10500, "2017-05-13", 2, 1);

    addTransaction(3, 150000, "2017-05-25", 1, 2);
    addTransaction(3, -15000, "2017-05-03", 2, 3);
    addTransaction(3, -12000, "2017-01-23", 2, 2);
    addTransaction(3, 256000, "2017-01-01", 1, 2);
    addTransaction(3, -57000, "2017-06-19", 3, 3);

}

void StartDAO::clean()
{
    QSqlQuery query(dbManager.getDatabase());
    query.exec("DELETE FROM Benutzer");
    query.exec("DELETE FROM Kategorie");
    query.exec("DELETE FROM Standardzahlungsart");
    query.exec("DELETE FROM Transaktion");
    query.exec("DELETE FROM Zahlungsart");
}

