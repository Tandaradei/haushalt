#pragma once


#include <list>
#include <memory>

#include <QString>
#include <QDate>

class DbManager;


class User;
class Transaction;
class Category;
class PaymentMethod;

class UserDAO
{
public:
    UserDAO(DbManager& dbManager, std::shared_ptr<User> user);
    ~UserDAO();
    std::shared_ptr<std::list<std::shared_ptr<Transaction>>> loadTransactions();
    std::shared_ptr<std::list<std::shared_ptr<Transaction>>> getTransactions();

    std::shared_ptr<std::list<std::shared_ptr<Category>>> loadCategories();
    std::shared_ptr<std::list<std::shared_ptr<Category>>> getCategories();

    std::shared_ptr<std::list<std::shared_ptr<PaymentMethod>>> loadPaymentMethods();
    std::shared_ptr<std::list<std::shared_ptr<PaymentMethod>>> getPaymentMethods();

    std::shared_ptr<Category> getCategory(size_t ID);
    std::shared_ptr<PaymentMethod> getPaymentMethod(size_t ID);

    void addTransaction(int amount, const QString& description, const QString& dateString, std::shared_ptr<Category> category, std::shared_ptr<PaymentMethod> paymentMethod);
private:
    std::shared_ptr<std::list<std::shared_ptr<Transaction>>> transactions;
    std::shared_ptr<std::list<std::shared_ptr<Category>>> categories;
    std::shared_ptr<std::list<std::shared_ptr<PaymentMethod>>> paymentMethods;
    DbManager& dbManager;
    std::shared_ptr<User> user;
};
