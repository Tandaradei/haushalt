#pragma once


#include <list>
#include <memory>

#include <QString>
#include <QDate>

class DbManager;


class User;
class Transaction;
class Category;
class PayMethod;

class UserDAO
{
public:
    UserDAO(DbManager& dbManager, std::shared_ptr<User> user);
    ~UserDAO();
    std::shared_ptr<std::list<std::shared_ptr<Transaction>>> loadTransactions();
    std::shared_ptr<std::list<std::shared_ptr<Transaction>>> getTransactions();

    std::shared_ptr<std::list<std::shared_ptr<Category>>> loadCategories();
    std::shared_ptr<std::list<std::shared_ptr<Category>>> getCategories();

    std::shared_ptr<Category> addCategory(const QString& name);
    bool deleteCategory(size_t categoryId);

    std::shared_ptr<std::list<std::shared_ptr<PayMethod>>> loadPayMethods();
    std::shared_ptr<std::list<std::shared_ptr<PayMethod>>> getPayMethods();

    std::shared_ptr<Transaction> getTransaction(size_t ID);
    std::shared_ptr<Category> getCategory(size_t ID);
    std::shared_ptr<PayMethod> getPayMethod(size_t ID);

    std::shared_ptr<Transaction> addTransaction(int amount, const QString& description, const QString& dateString, std::shared_ptr<Category> category, std::shared_ptr<PayMethod> payMethod);
    bool updateTransaction(std::shared_ptr<Transaction> transaction, int amount, const QString& description, const QString& dateString, std::shared_ptr<Category> category, std::shared_ptr<PayMethod> payMethod);
    bool deleteTransaction(size_t ID);

    std::shared_ptr<PayMethod> addPayMethod(const QString& name);
    bool deletePayMethod(std::shared_ptr<PayMethod> payMethod);

    bool updateUserData(const QString& name, const QString& dateString);
    bool updateUserPassword(const QString& oldPassword, const QString& newPassword);

    bool updateUserBalance(int add);
private:
    std::shared_ptr<std::list<std::shared_ptr<Transaction>>> transactions;
    std::shared_ptr<std::list<std::shared_ptr<Category>>> categories;
    std::shared_ptr<std::list<std::shared_ptr<PayMethod>>> payMethods;
    DbManager& dbManager;
    std::shared_ptr<User> user;
};
