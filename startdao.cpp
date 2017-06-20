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
  query.prepare("INSERT INTO Benutzer(BID, Email, HashedKennwort, Name, Geburtsdatum, Kontostand) VALUES(:BID, :Email, :HashedKennwort, :Name, :Geburtsdatum, :Kontostand);");
  query.bindValue(":BID", 1);
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

void StartDAO::setDAO()
{

    //insert Roland Dietrich as Admin
    QSqlQuery query(dbManager.getDatabase());
    query.prepare("INSERT INTO Benutzer(BID, Email, HashedKennwort, Name, Kontostand) VALUES(:BID, :Email, :HashedKennwort, :Name, :Kontostand);");
    query.bindValue(":BID", 1);
    query.bindValue(":Email", "rd@hs.aa");
    query.bindValue(":HashedKennwort", "RD");
    query.bindValue(":Name", "Roland Dietrich");
    query.bindValue(":Kontostand", 0);
    qDebug() << query.executedQuery();
    if(query.exec())
    {
        qDebug() << "execution Dietrich successful";
    }
    else
    {
        qDebug() << "createAdmin Dietrich error:  "
                 << query.lastError().text();
    }

    //insert klara musterfrau
    query.prepare("INSERT INTO Benutzer(BID, Email, HashedKennwort, Name, Kontostand) VALUES(:BID, :Email, :HashedKennwort, :Name, :Kontostand);");
    query.bindValue(":BID", 2);
    query.bindValue(":Email", "km@hs.aa");
    query.bindValue(":HashedKennwort", "KM");
    query.bindValue(":Name", "Klara Musterfrau");
    query.bindValue(":Kontostand", 0);
    qDebug() << query.executedQuery();
    if(query.exec())
    {
        qDebug() << "execution Klara successful";
    }
    else
    {
        qDebug() << "createAdmin Klara error:  "
                 << query.lastError().text();
    }


    //insert max mustersohn
    query.prepare("INSERT INTO Benutzer(BID, Email, HashedKennwort, Name, Kontostand) VALUES(:BID, :Email, :HashedKennwort, :Name, :Kontostand);");
    query.bindValue(":BID", 3);
    query.bindValue(":Email", "mm@hs.aa");
    query.bindValue(":HashedKennwort", "MM");
    query.bindValue(":Name", "Max Mustersohn");
    query.bindValue(":Kontostand", 0);
    qDebug() << query.executedQuery();
    if(query.exec())
    {
        qDebug() << "execution Max successful";
    }
    else
    {
        qDebug() << "createAdmin max error:  "
                 << query.lastError().text();
    }


    //insert kategorie Gehaltseingang, Lebensmittel, Freizeit
    query.prepare("INSERT INTO Kategorie(KID, Name) VALUES(:KID, :Name);");
    query.bindValue(":KID", 1);
    query.bindValue(":Name", "Gehaltseingang");
    query.exec();
    query.bindValue(":KID", 2);
    query.bindValue(":Name", "Lebensmittel");
    query.exec();
    query.bindValue(":KID", 3);
    query.bindValue(":Name", "Freizeit");
    qDebug() << query.executedQuery();
    if(query.exec())
    {
        qDebug() << "execution Kategorie successful";
    }
    else
    {
        qDebug() << "createAdmin Kategorie error:  "
                 << query.lastError().text();
    }


    //insert zahlungsart Bar, Überweisung, Kreditkarte

    query.prepare("INSERT INTO Zahlungsart(ZID, BID, Name) VALUES(:KID, :BID, :Name);");
    query.bindValue(":ZID", 1);
    query.bindValue(":BID", 1);
    query.bindValue(":Name", "Bar");
    query.exec();
    query.bindValue(":ZID", 2);
    query.bindValue(":BID", 1);
    query.bindValue(":Name", "Überweisung");
    query.exec();
    query.bindValue(":ZID", 3);
    query.bindValue(":BID", 1);
    query.bindValue(":Name", "Kreditkarte");
    query.exec();
    query.bindValue(":ZID", 1);
    query.bindValue(":BID", 2);
    query.bindValue(":Name", "Bar");
    query.exec();
    query.bindValue(":ZID", 2);
    query.bindValue(":BID", 2);
    query.bindValue(":Name", "Überweisung");
    query.exec();
    query.bindValue(":ZID", 3);
    query.bindValue(":BID", 2);
    query.bindValue(":Name", "Kreditkarte");
    query.exec();
    query.bindValue(":ZID", 1);
    query.bindValue(":BID", 3);
    query.bindValue(":Name", "Bar");
    query.exec();
    query.bindValue(":ZID", 2);
    query.bindValue(":BID", 3);
    query.bindValue(":Name", "Überweisung");
    query.exec();
    query.bindValue(":ZID", 3);
    query.bindValue(":BID", 3);
    query.bindValue(":Name", "Kreditkarte");
    qDebug() << query.executedQuery();
    if(query.exec())
    {
        qDebug() << "execution Kategorie successful";
    }
    else
    {
        qDebug() << "createAdmin Kategorie error:  "
                 << query.lastError().text();
    }


    //insert Transaktionen
    query.prepare("INSERT INTO Transaktion(TID, BID, Betrag, Datum, KID, ZID) VALUES(:TID, :BID, :Betrag, :Datum, :KID, :ZID);");
    query.bindValue(":TID", 1);
    query.bindValue(":BID", 1);
    query.bindValue(":Betrag", 10);
    query.bindValue(":Datum", 2017-03-17);
    query.bindValue(":KID", 1);
    query.bindValue(":ZID", 1);
    qDebug() << query.executedQuery();
    if(query.exec())
    {
        qDebug() << "execution Kategorie successful";
    }
    else
    {
        qDebug() << "createAdmin Kategorie error:  "
                 << query.lastError().text();
    }

    query.prepare("INSERT INTO Transaktion(TID, BID, Betrag, Datum, KID, ZID) VALUES(:TID, :BID, :Betrag, :Datum, :KID, :ZID);");
    query.bindValue(":TID", 2);
    query.bindValue(":BID", 1);
    query.bindValue(":Betrag", -200);
    query.bindValue(":Datum", 2017-03-17);
    query.bindValue(":KID", 2);
    query.bindValue(":ZID", 2);
    qDebug() << query.executedQuery();
    query.exec();

    query.prepare("INSERT INTO Transaktion(TID, BID, Betrag, Datum, KID, ZID) VALUES(:TID, :BID, :Betrag, :Datum, :KID, :ZID);");
    query.bindValue(":TID", 3);
    query.bindValue(":BID", 2);
    query.bindValue(":Betrag", -250);
    query.bindValue(":Datum", 2017-03-07);
    query.bindValue(":KID", 3);
    query.bindValue(":ZID", 3);
    qDebug() << query.executedQuery();
    query.exec();

    query.prepare("INSERT INTO Transaktion(TID, BID, Betrag, Datum, KID, ZID) VALUES(:TID, :BID, :Betrag, :Datum, :KID, :ZID);");
    query.bindValue(":TID", 4);
    query.bindValue(":BID", 2);
    query.bindValue(":Betrag", 105);
    query.bindValue(":Datum", 2017-05-13);
    query.bindValue(":KID", 2);
    query.bindValue(":ZID", 3);
    query.exec();

    query.prepare("INSERT INTO Transaktion(TID, BID, Betrag, Datum, KID, ZID) VALUES(:TID, :BID, :Betrag, :Datum, :KID, :ZID);");
    query.bindValue(":TID", 5);
    query.bindValue(":BID", 3);
    query.bindValue(":Betrag", 1500);
    query.bindValue(":Datum", 2017-05-25);
    query.bindValue(":KID", 1);
    query.bindValue(":ZID", 3);
    query.exec();

    query.prepare("INSERT INTO Transaktion(TID, BID, Betrag, Datum, KID, ZID) VALUES(:TID, :BID, :Betrag, :Datum, :KID, :ZID);");
    query.bindValue(":TID", 6);
    query.bindValue(":BID", 3);
    query.bindValue(":Betrag", 150);
    query.bindValue(":Datum", 2017-05-03);
    query.bindValue(":KID", 2);
    query.bindValue(":ZID", 1);
    query.exec();

    query.prepare("INSERT INTO Transaktion(TID, BID, Betrag, Datum, KID, ZID) VALUES(:TID, :BID, :Betrag, :Datum, :KID, :ZID);");
    query.bindValue(":TID", 7);
    query.bindValue(":BID", 3);
    query.bindValue(":Betrag", 120);
    query.bindValue(":Datum", 2017-01-23);
    query.bindValue(":KID", 2);
    query.bindValue(":ZID", 2);
    query.exec();

    query.prepare("INSERT INTO Transaktion(TID, BID, Betrag, Datum, KID, ZID) VALUES(:TID, :BID, :Betrag, :Datum, :KID, :ZID);");
    query.bindValue(":TID", 8);
    query.bindValue(":BID", 3);
    query.bindValue(":Betrag", -2560);
    query.bindValue(":Datum", 2017-01-01);
    query.bindValue(":KID", 3);
    query.bindValue(":ZID", 2);
    query.exec();

    query.prepare("INSERT INTO Transaktion(TID, BID, Betrag, Datum, KID, ZID) VALUES(:TID, :BID, :Betrag, :Datum, :KID, :ZID);");
    query.bindValue(":TID", 9);
    query.bindValue(":BID", 3);
    query.bindValue(":Betrag", 570);
    query.bindValue(":Datum", 2017-06-19);
    query.bindValue(":KID", 1);
    query.bindValue(":ZID", 1);
    query.exec();

    query.prepare("INSERT INTO Transaktion(TID, BID, Betrag, Datum, KID, ZID) VALUES(:TID, :BID, :Betrag, :Datum, :KID, :ZID);");
    query.bindValue(":TID", 10);
    query.bindValue(":BID", 3);
    query.bindValue(":Betrag", -2390);
    query.bindValue(":Datum", 2017-05-03);
    query.bindValue(":KID", 2);
    query.bindValue(":ZID", 3);
    qDebug() << query.executedQuery();
    query.exec();
}

void StartDAO::cleanDAO()
{
    printf("hallo");
    QSqlQuery query2(dbManager.getDatabase());
    query2.exec("DELETE FROM Benutzer");
    query2.exec("DELETE FROM Kategorie");
    query2.exec("DELETE FROM Standardzahlungsart");
    query2.exec("DELETE FROM Transaktion");
    query2.exec("DELETE FROM Zahlungsart");
  }
