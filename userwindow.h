#pragma once

#include <QMainWindow>
#include <QStringListModel>


namespace Ui {
class UserWindow;
}

class UserController;

class UserWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserWindow(UserController& userController, QWidget *parent = 0);
    ~UserWindow();

    void clearTransactionEntries();
    void addTransactionEntry(QDate date, float amount, QString description, QString category, QString payMethod, size_t ID);
    void clearCategories();
    void addCategory(const QString& name);
    void clearPayMethods();
    void addPayMethod(const QString& name);

    void enableAdminTabs();
    void setSettings(QString name, QDate birthdate);


private slots:
    void handleLogoutButton();
    void handleAddTransactionButton();
    void handleTransactionsItemSelectionChanged();
    void handleDeleteTransactionButton();


private:
    void initTable();

    size_t selectedTransactionID;

    UserController& userController;

    Ui::UserWindow *ui;
    size_t transactionEntriesCount;
    QStringListModel payMethodsModel;
};

