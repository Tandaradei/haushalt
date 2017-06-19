#include "usercontroller.h"
#include "userwindow.h"
#include "ui_userwindow.h"

UserWindow::UserWindow(UserController& userController, QWidget *parent)
    :QMainWindow(parent)
    ,userController(userController)
    ,ui(new Ui::UserWindow)
    ,transactionEntriesCount(0)
    ,paymentMethodsModel()
{
    ui->setupUi(this);
    // connect button with handle function
    connect(ui->logoutButton, SIGNAL (released()), this, SLOT (handleLogoutButton()));

    // remove admin tabs
    ui->mainTabWidget->removeTab(5);
    ui->mainTabWidget->removeTab(4);
    ui->mainTabWidget->removeTab(3);

    // set model for payment methods list
    ui->paymentMethodsList->setModel(&paymentMethodsModel);

    initTable();
}

UserWindow::~UserWindow()
{
    delete ui;
}

void UserWindow::addTransactionEntry(QDate date, float amount, QString description, QString category, QString payMethod)
{
    ui->transaktionenTable->setItem(transactionEntriesCount, 0, new QTableWidgetItem(date.toString("yyyy-MM-dd")));
    ui->transaktionenTable->setItem(transactionEntriesCount, 1, new QTableWidgetItem(QString::number(amount, 'f', 2).replace(QChar('.'), QChar(','))));
    ui->transaktionenTable->setItem(transactionEntriesCount, 2, new QTableWidgetItem(description));
    ui->transaktionenTable->setItem(transactionEntriesCount, 3, new QTableWidgetItem(category));
    ui->transaktionenTable->setItem(transactionEntriesCount, 4, new QTableWidgetItem(payMethod));

    // color amount field (red if < 0; green if >= 0)
    ui->transaktionenTable->item(transactionEntriesCount, 1)->setBackgroundColor(amount < 0 ? QColor(255,0,0) : QColor(0, 255, 0));

    ++transactionEntriesCount;
}

void UserWindow::addCategory(const QString& name)
{
    // add category name to filter
    ui->categoriesComboBox->addItem(name);
    // add category name to add transaction form
    ui->atCategoriesComboBox->addItem(name);
}

void UserWindow::addPaymentMethod(const QString &name)
{
    // add payment method name to filter
    ui->paymentMethodsComboBox->addItem(name);

    // add payment method name to add transaction form
    ui->atPaymentMethodsComboBox->addItem(name);

    // add payment method name to list view
    paymentMethodsModel.insertRow(paymentMethodsModel.rowCount());
    QModelIndex index = paymentMethodsModel.index(paymentMethodsModel.rowCount()-1);
    paymentMethodsModel.setData(index, name);
}

void UserWindow::enableAdminTabs()
{
    // remove logout tab
    ui->mainTabWidget->removeTab(3);

    // add admin tabs with icons
    ui->mainTabWidget->addTab(ui->userTab, QIcon(QString("resources/user.png")), "Benutzer");
    ui->mainTabWidget->addTab(ui->categoryTab, QIcon(QString("resources/category.png")), "Kategorien");
    ui->mainTabWidget->addTab(ui->standardPaymentMethodsTab, QIcon(QString("resources/paymethod.png")), "Standardzahlungsarten");

    // add logout tab behind
    ui->mainTabWidget->addTab(ui->logoutTab, QIcon(QString("resources/exit.png")), "Abmelden");
}

void UserWindow::setSettings(QString name, QDate birthdate)
{
    // prefill settings fields
    ui->settingsnameField->setText(name);
    ui->settingsBirthdateField->setDate(birthdate);
}

void UserWindow::handleLogoutButton()
{
  userController.onLogout();
}

void UserWindow::handleAddTransactionButton()
{

  userController.addTransaction(ui->atAmountSpinner->value()
                                , ui->atDateEdit->date()
                                , ui->atCategoriesComboBox->currentData().toString()
                                , ui->atPaymentMethodsComboBox->currentData().toString()
                                , ui->atDescriptionTextEdit->toPlainText());
}

void UserWindow::initTable()
{
    // set table headers with icons
    ui->transaktionenTable->setHorizontalHeaderItem(0, new QTableWidgetItem(QIcon(QString("resources/calendar.png")), "Datum"));
    ui->transaktionenTable->setHorizontalHeaderItem(1, new QTableWidgetItem(QIcon(QString("resources/money.png")), "Betrag"));
    ui->transaktionenTable->setHorizontalHeaderItem(2, new QTableWidgetItem(QIcon(QString("resources/description.png")), "Beschreibung"));
    ui->transaktionenTable->setHorizontalHeaderItem(3, new QTableWidgetItem(QIcon(QString("resources/category.png")), "Kategorie"));
    ui->transaktionenTable->setHorizontalHeaderItem(4, new QTableWidgetItem(QIcon(QString("resources/paymethod.png")), "Zahlungsart"));
}
