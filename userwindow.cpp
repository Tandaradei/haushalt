#include "usercontroller.h"
#include "admincontroller.h"
#include "userwindow.h"
#include "ui_userwindow.h"

UserWindow::UserWindow(UserController& userController, QWidget *parent)
    :QMainWindow(parent)
    ,userController(userController)
    ,adminController(nullptr)
    ,ui(new Ui::UserWindow)
    ,transactionEntriesCount(0)
    ,userEntriesCount(0)
    ,payMethodsModel()
    ,selectedTransactionID(0)
{
    ui->setupUi(this);

    // set model for payment methods list
    ui->payMethodsList->setModel(&payMethodsModel);

    // connections
    connect(ui->logoutButton, SIGNAL (released()), this, SLOT (handleLogoutButton()));

    // transactions
    connect(ui->transaktionenTable, SIGNAL (itemSelectionChanged()), this, SLOT (handleTransactionsItemSelectionChanged()));
    connect(ui->addTransactionButton, SIGNAL (released()), this, SLOT (handleAddTransactionButton()));
    connect(ui->editTransactionButton, SIGNAL (released()), this, SLOT (handleEditTransactionButton()));
    connect(ui->deleteTransactionButton, SIGNAL (released()), this, SLOT (handleDeleteTransactionButton()));

    // pay methods

    connect(ui->payMethodsList->selectionModel(), SIGNAL (selectionChanged(QItemSelection, QItemSelection)), this, SLOT(handlePayMethodsItemSelectionChanged(QItemSelection, QItemSelection)));
    connect(ui->addPayMethodButton, SIGNAL (released()), this, SLOT (handleAddPayMethodButton()));
    connect(ui->deletePayMethodButton, SIGNAL (released()), this, SLOT (handleDeletePayMethodButton()));

    //users
    connect(ui->userTable, SIGNAL(itemSelectionChanged()), this, SLOT (handleUsersItemSelectionChanged()));
    connect(ui->addUserButton, SIGNAL (released()), this, SLOT(handleAddUserButton()));



    // remove admin tabs
    ui->mainTabWidget->removeTab(5);
    ui->mainTabWidget->removeTab(4);
    ui->mainTabWidget->removeTab(3);



    initTable();
}

UserWindow::~UserWindow()
{
    delete ui;
}

void UserWindow::clearTransactionEntries()
{
    ui->transaktionenTable->clear();
    transactionEntriesCount = 0;
}

void UserWindow::addTransactionEntry(QDate date, float amount, QString description, QString category, QString payMethod, size_t ID)
{
    ui->transaktionenTable->setItem(transactionEntriesCount, 0, new QTableWidgetItem(date.toString("yyyy-MM-dd")));
    ui->transaktionenTable->setItem(transactionEntriesCount, 1, new QTableWidgetItem(QString::number(amount, 'f', 2).replace(QChar('.'), QChar(','))));
    ui->transaktionenTable->setItem(transactionEntriesCount, 2, new QTableWidgetItem(description));
    ui->transaktionenTable->setItem(transactionEntriesCount, 3, new QTableWidgetItem(category));
    ui->transaktionenTable->setItem(transactionEntriesCount, 4, new QTableWidgetItem(payMethod));
    ui->transaktionenTable->setItem(transactionEntriesCount, 5, new QTableWidgetItem(QString::number(ID)));

    // color amount field (red if < 0; green if >= 0)
    ui->transaktionenTable->item(transactionEntriesCount, 1)->setBackgroundColor(amount < 0 ? QColor(255,0,0) : QColor(0, 255, 0));

    ++transactionEntriesCount;
}

void UserWindow::updateTransactionEntry(QDate date, float amount, QString description, QString category, QString payMethod, size_t ID)
{
    for(int i = 0; i < transactionEntriesCount; ++i)
    {
        if(ui->transaktionenTable->item(i, 5)->text().toInt() == ID)
        {
            ui->transaktionenTable->setItem(i, 0, new QTableWidgetItem(date.toString("yyyy-MM-dd")));
            ui->transaktionenTable->setItem(i, 1, new QTableWidgetItem(QString::number(amount, 'f', 2).replace(QChar('.'), QChar(','))));
            ui->transaktionenTable->setItem(i, 2, new QTableWidgetItem(description));
            ui->transaktionenTable->setItem(i, 3, new QTableWidgetItem(category));
            ui->transaktionenTable->setItem(i, 4, new QTableWidgetItem(payMethod));
            // color amount field (red if < 0; green if >= 0)
            ui->transaktionenTable->item(i, 1)->setBackgroundColor(amount < 0 ? QColor(255,0,0) : QColor(0, 255, 0));
        }
    }
}

void UserWindow::clearCategories()
{
    ui->categoriesComboBox->clear();

    ui->atCategoriesComboBox->clear();
}

void UserWindow::addCategory(const QString& name)
{
    // add category name to filter
    ui->categoriesComboBox->addItem(name, QVariant(name));
    // add category name to add transaction form
    ui->atCategoriesComboBox->addItem(name, QVariant(name));
}

void UserWindow::clearPayMethods()
{
    ui->payMethodsComboBox->clear();

    ui->atPayMethodsComboBox->clear();

    payMethodsModel.removeRows(0, payMethodsModel.rowCount());
}

void UserWindow::addPayMethod(const QString &name)
{
    // add payment method name to filter
    ui->payMethodsComboBox->addItem(name, QVariant(name));

    // add payment method name to add transaction form
    ui->atPayMethodsComboBox->addItem(name, QVariant(name));

    // add payment method name to list view
    payMethodsModel.insertRow(payMethodsModel.rowCount());
    QModelIndex index = payMethodsModel.index(payMethodsModel.rowCount()-1);
    payMethodsModel.setData(index, name);
}

void UserWindow::deletePayMethod(const QString &name)
{
    ui->payMethodsComboBox->removeItem(ui->payMethodsComboBox->findText(name));

    ui->atPayMethodsComboBox->removeItem(ui->atPayMethodsComboBox->findText(name));


   for(int i = 0; i < payMethodsModel.rowCount(); ++i)
   {
       QModelIndex index = payMethodsModel.index(i);
       if(payMethodsModel.data(index, 0) == name)
       {
           payMethodsModel.removeRow(i);
       }
   }
}

void UserWindow::enableAdmin(AdminController *newAdminController)
{
    adminController = newAdminController;
    // remove logout tab
    ui->mainTabWidget->removeTab(3);

    // add admin tabs with icons
    ui->mainTabWidget->addTab(ui->userTab, QIcon(QString("resources/user.png")), "Benutzer");
    ui->mainTabWidget->addTab(ui->categoryTab, QIcon(QString("resources/category.png")), "Kategorien");
    ui->mainTabWidget->addTab(ui->standardPayMethodsTab, QIcon(QString("resources/payMethod.png")), "Standardzahlungsarten");

    // add logout tab behind
    ui->mainTabWidget->addTab(ui->logoutTab, QIcon(QString("resources/exit.png")), "Abmelden");
}

void UserWindow::addUserEntry(const QString &email, const QString &name, QDate date, float balance, size_t ID)
{
    ui->userTable->setItem(userEntriesCount, 0, new QTableWidgetItem(email));
    ui->userTable->setItem(userEntriesCount, 1, new QTableWidgetItem(name));
    ui->userTable->setItem(userEntriesCount, 2, new QTableWidgetItem(date.toString("yyyy-MM-dd")));
    ui->userTable->setItem(userEntriesCount, 3, new QTableWidgetItem(QString::number(balance, 'f', 2).replace(QChar('.'), QChar(','))));
    ui->userTable->setItem(userEntriesCount, 4, new QTableWidgetItem(QString::number(ID)));

    ++userEntriesCount;
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
                                , ui->atPayMethodsComboBox->currentData().toString()
                                , ui->atDescriptionTextEdit->toPlainText());
}

void UserWindow::handleEditTransactionButton()
{
    userController.updateTransaction(ui->atAmountSpinner->value()
                                     , ui->atDateEdit->date()
                                     , ui->atCategoriesComboBox->currentText()
                                     , ui->atPayMethodsComboBox->currentText()
                                     , ui->atDescriptionTextEdit->toPlainText()
                                     , selectedTransactionID);
}

void UserWindow::handleTransactionsItemSelectionChanged()
{
    QItemSelectionModel *select = ui->transaktionenTable->selectionModel();

    if(select->hasSelection())
    {
        QModelIndex index = select->selectedRows().front();
        if(index.row() <= transactionEntriesCount)
        {
            ui->atDateEdit->setDate(QDate::fromString(ui->transaktionenTable->item(index.row(), 0)->text(), "yyyy-MM-dd"));
            ui->atAmountSpinner->setValue(ui->transaktionenTable->item(index.row(), 1)->text().replace(QChar(','), QChar('.')).toDouble());
            ui->atDescriptionTextEdit->setPlainText(ui->transaktionenTable->item(index.row(), 2)->text());
            ui->atCategoriesComboBox->setCurrentText(ui->transaktionenTable->item(index.row(), 3)->text());
            ui->atPayMethodsComboBox->setCurrentText(ui->transaktionenTable->item(index.row(), 4)->text());
            selectedTransactionID = ui->transaktionenTable->item(index.row(), 5)->text().toInt();
        }
    }
}

void UserWindow::initTable()
{
    // set table headers with icons
    ui->transaktionenTable->setHorizontalHeaderItem(0, new QTableWidgetItem(QIcon(QString("resources/calendar.png")), "Datum"));
    ui->transaktionenTable->setHorizontalHeaderItem(1, new QTableWidgetItem(QIcon(QString("resources/money.png")), "Betrag"));
    ui->transaktionenTable->setHorizontalHeaderItem(2, new QTableWidgetItem(QIcon(QString("resources/description.png")), "Beschreibung"));
    ui->transaktionenTable->setHorizontalHeaderItem(3, new QTableWidgetItem(QIcon(QString("resources/category.png")), "Kategorie"));
    ui->transaktionenTable->setHorizontalHeaderItem(4, new QTableWidgetItem(QIcon(QString("resources/payMethod.png")), "Zahlungsart"));
    ui->transaktionenTable->setHorizontalHeaderItem(5, new QTableWidgetItem(QIcon(QString("resources/id.png")), "ID"));
}

void UserWindow::handleDeleteTransactionButton()
{
    QItemSelectionModel *select = ui->transaktionenTable->selectionModel();

    if(select->hasSelection())
    {
        QModelIndex index = select->selectedRows().front();
        if((size_t)index.row() <= transactionEntriesCount)
        {
            userController.deleteTransaction(ui->transaktionenTable->item(index.row(), 5)->text().toInt());
        }
    }


}

void UserWindow::handlePayMethodsItemSelectionChanged(const QItemSelection& selection, const QItemSelection &deselection)
{
    ui->payMethodNameField->setText(payMethodsModel.data(selection.indexes().front(), 0).toString());
}

void UserWindow::handleAddPayMethodButton()
{
    if(!ui->payMethodNameField->text().isEmpty())
    {
        if(userController.addPayMethod(ui->payMethodNameField->text()))
        {

        }
    }
}

void UserWindow::handleDeletePayMethodButton()
{
    if(!ui->payMethodNameField->text().isEmpty())
    {
        if(userController.deletePayMethod(ui->payMethodNameField->text()))
        {

        }
    }
}

void UserWindow::handleUsersItemSelectionChanged()
{
    QItemSelectionModel *select = ui->userTable->selectionModel();

    if(select->hasSelection())
    {
        QModelIndex index = select->selectedRows().front();
        if(index.row() <= userEntriesCount)
        {
            ui->userEmailField->setText(ui->userTable->item(index.row(), 0)->text());
        }
    }
}

void UserWindow::handleAddUserButton()
{
    if(ui->userEmailField->text().isEmpty())
    {
        //
    }
    else if(ui->userPasswordField->text().isEmpty())
    {
        //
    }
    else if(ui->userPasswordField->text() != ui->userPasswordRepeatField->text())
    {
        //
    }
    else
    {

        adminController->addUser(ui->userEmailField->text(), ui->userPasswordField->text());
    }
}
