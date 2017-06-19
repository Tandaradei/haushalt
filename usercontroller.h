#pragma once

#include "userdao.h"
#include "userwindow.h"
#include <memory>

class User;
class Transaction;

class MainController;
class DbManager;

class UserController
{
public:
    UserController(MainController &mainController, DbManager& dbManager, std::shared_ptr<User> user);
    ~UserController();

    void start();
    void onLogout();
    void addTransaction(float amount, const QDate& date, const QString& categoryName, const QString& payMethodName, const QString& description);
    void deleteTransaktion(int index);

protected:

    MainController& mainController;
    UserDAO userDAO;
    UserWindow userWindow;
    std::shared_ptr<User> user;
    std::shared_ptr<std::list<std::shared_ptr<Category>>> categories;
    std::shared_ptr<std::list<std::shared_ptr<PayMethod>>> payMethods;
    std::shared_ptr<std::list<std::shared_ptr<Transaction>>> transactions;
private:
    void loadCategories();
    void loadPayMethods();
    void loadTransactions();
    void loadSettings();

    void addTransactionToUI(std::shared_ptr<Transaction> transaction);
    std::shared_ptr<Category> getCategoryByName(const QString& name);
    std::shared_ptr<PayMethod> getPayMethodByName(const QString& name);

};

