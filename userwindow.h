#pragma once

#include <QMainWindow>
#include <QStringListModel>
#include <QItemSelection>
#include <memory>


namespace Ui {
class UserWindow;
}

class UserController;
class AdminController;

class UserWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserWindow(UserController& userController, QWidget *parent = 0);
    ~UserWindow();
    // user
    void clearTransactionEntries();
    void addTransactionEntry(QDate date, float amount, QString description, QString category, QString payMethod, size_t ID);
    void updateTransactionEntry(QDate date, float amount, QString description, QString category, QString payMethod, size_t ID);

    void clearCategories();
    void addCategory(const QString& name);
    void deleteCategory(const QString& name);

    void clearPayMethods();
    void addPayMethod(const QString& name);
    void deletePayMethod(const QString& name);

    void setSettings(QString name, QDate birthdate);

    // admin
    void enableAdmin(AdminController* newAdminController);
    void addUserEntry(const QString& email, const QString& name, QDate date, float balance, size_t ID);
    void clearUsers();

    void addStanPayMethodEntry(const QString& name);
    void deleteStanPayMethod(const QString& name);



private slots:
    void handleLogoutButton();

    void handleTransactionsItemSelectionChanged();
    void handleAddTransactionButton();
    void handleEditTransactionButton();
    void handleDeleteTransactionButton();

    void handlePayMethodsItemSelectionChanged(const QItemSelection& selection);
    void handleAddPayMethodButton();
    void handleDeletePayMethodButton();

    void handleUsersItemSelectionChanged();
    void handleAddUserButton();
    void handleUpdateUserPasswordButton();
    void handleDeleteUserButton();

    void handleSettingsSaveButton();
    void handelSettingsNewPasswordButton();

    void handleCategoriesItemSelectionChanged(const QItemSelection& selection);
    void handleAddCategoryButton();
    void handleDeleteCategoryButton();

    void handleStanPayMethodsItemSelectionChanged(const QItemSelection& selection);
    void handleAddStanPayMethodButton();
    void handleDeleteStanPayMethodButton();


private:
    void initTable();

    size_t selectedTransactionID;
    size_t selectedUserID;

    UserController& userController;
    AdminController* adminController;

    Ui::UserWindow *ui;
    size_t transactionEntriesCount;
    size_t userEntriesCount;
    QStringListModel payMethodsModel;
    QStringListModel stanPayMethodsModel;
    QStringListModel categoriesModel;
};

