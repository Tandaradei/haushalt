#pragma once

#include <QMainWindow>

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

    // TODO change category and payMethod to reference on Category/PayMethod objects and use .name for table entry
    void addTransactionEntry(QDate date, float amount, QString description, QString category, QString payMethod);
    void enableAdminTabs();
    void setSettings(QString name, QDate birthdate);

private slots:
    void handleLogoutButton();

private:
    void initTable();

    UserController& userController;

    Ui::UserWindow *ui;
    size_t transactionEntriesCount;
};

