#include "userwindow.h"
#include "ui_benutzerwindow.h"

UserWindow::UserWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UserWindow),
    transactionEntriesCount(0)
{
    ui->setupUi(this);
    connect(ui->logoutButton, SIGNAL (released()), this, SLOT (handleLogoutButton()));
    initTable();
}

UserWindow::~UserWindow()
{
    delete ui;
}

// TODO change category and payMethod to reference on Category/PayMethod objects and use .name for table entry
void UserWindow::addTransactionEntry(QDate date, float amount, QString description, QString category, QString payMethod)
{
    ui->transaktionenTable->setItem(transactionEntriesCount, 0, new QTableWidgetItem(date.toString("yyyy-MM-dd")));
    ui->transaktionenTable->setItem(transactionEntriesCount, 1, new QTableWidgetItem(QString::number(amount, 'f', 2).replace(QChar('.'), QChar(','))));
    ui->transaktionenTable->setItem(transactionEntriesCount, 2, new QTableWidgetItem(description));
    ui->transaktionenTable->setItem(transactionEntriesCount, 3, new QTableWidgetItem(category));
    ui->transaktionenTable->setItem(transactionEntriesCount, 4, new QTableWidgetItem(payMethod));

    ++transactionEntriesCount;
}

void UserWindow::handleLogoutButton()
{
  this->hide();
  this->destroy();
}

void UserWindow::initTable()
{
    // set table headers with icons
    ui->transaktionenTable->setHorizontalHeaderItem(0, new QTableWidgetItem(QIcon(QString("resources/calendar.png")), "Datum"));
    ui->transaktionenTable->setHorizontalHeaderItem(1, new QTableWidgetItem(QIcon(QString("resources/money.png")), "Betrag"));
    ui->transaktionenTable->setHorizontalHeaderItem(2, new QTableWidgetItem(QIcon(QString("resources/description.png")), "Beschreibung"));
    ui->transaktionenTable->setHorizontalHeaderItem(3, new QTableWidgetItem(QIcon(QString("resources/category.png")), "Kategorie"));
    ui->transaktionenTable->setHorizontalHeaderItem(4, new QTableWidgetItem(QIcon(QString("resources/paymethod.png")), "Zahlungsart"));
    // add test entries
    QDate date;
    addTransactionEntry(date.currentDate(), -30.0f, "Test Einkauf", "Lebensmittel", "Bar");
    addTransactionEntry(date.currentDate().addDays(-2), 2000.0f, "Lohn", "Lohn", "Banküberweisung");
}
