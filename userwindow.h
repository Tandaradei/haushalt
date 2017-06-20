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

    void clearTransactionEntries();
    void addTransactionEntry(QDate date, float amount, QString description, QString category, QString payMethod, size_t ID);
    void updateTransactionEntry(QDate date, float amount, QString description, QString category, QString payMethod, size_t ID);
    void clearCategories();
    void addCategory(const QString& name);
    void clearPayMethods();
    void addPayMethod(const QString& name);
    void deletePayMethod(const QString& name);

    void enableAdmin(std::shared_ptr<AdminController> newAdminController);
    void setSettings(QString name, QDate birthdate);


private slots:
    void handleLogoutButton();

    void handleTransactionsItemSelectionChanged();
    void handleAddTransactionButton();
    void handleEditTransactionButton();
    void handleDeleteTransactionButton();

    void handlePayMethodsItemSelectionChanged(const QItemSelection& selection, const QItemSelection& deselection);
    void handleAddPayMethodButton();
    void handleDeletePayMethodButton();


private:
    void initTable();

    size_t selectedTransactionID;

    UserController& userController;
    std::shared_ptr<AdminController> adminController;

    Ui::UserWindow *ui;
    size_t transactionEntriesCount;
    QStringListModel payMethodsModel;
};

