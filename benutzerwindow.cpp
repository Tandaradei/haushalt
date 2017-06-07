#include "benutzerwindow.h"
#include "ui_benutzerwindow.h"

BenutzerWindow::BenutzerWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BenutzerWindow),
    transactionEntriesCount(0)
{
    ui->setupUi(this);
    // transaktionen table
    QStringList tableHeaderLabels;
    tableHeaderLabels<<"Datum"<<"Betrag"<<"Beschreibung"<<"Kategorie"<<"Zahlungsart";
    ui->transaktionenTable->setHorizontalHeaderLabels(tableHeaderLabels);
    QDate date;
    addTransactionEntry(date.currentDate(), -30.0f, "Test Einkauf", "Lebensmittel", "Bar");
    addTransactionEntry(date.currentDate().addDays(-2), 2000.0f, "Lohn", "Lohn", "Banküberweisung");
}

BenutzerWindow::~BenutzerWindow()
{
    delete ui;
}

// TODO change category and payMethod to reference on Category/PayMethod objects and use .name for table entry
void BenutzerWindow::addTransactionEntry(QDate date, float amount, QString description, QString category, QString payMethod)
{
    ui->transaktionenTable->setItem(transactionEntriesCount, 0, new QTableWidgetItem(date.toString("yyyy-MM-dd")));
    ui->transaktionenTable->setItem(transactionEntriesCount, 1, new QTableWidgetItem(QString::number(amount, 'f', 2).replace(QChar('.'), QChar(','))));
    ui->transaktionenTable->setItem(transactionEntriesCount, 2, new QTableWidgetItem(description));
    ui->transaktionenTable->setItem(transactionEntriesCount, 3, new QTableWidgetItem(category));
    ui->transaktionenTable->setItem(transactionEntriesCount, 4, new QTableWidgetItem(payMethod));

    ++transactionEntriesCount;
}
