#include "maincontroller.h"
#include "dbmanager.h"
#include "usercontroller.h"
#include "user.h"
#include "transaction.h"
#include "category.h"
#include "payMethod.h"

UserController::UserController(MainController& mainController, DbManager &dbManager, std::shared_ptr<User> user)
    :mainController(mainController)
    ,userDAO(dbManager, user)
    ,userWindow(*this)
    ,user(user)
    ,categories(nullptr)
    ,payMethods(nullptr)
    ,transactions(nullptr)
{
    loadCategories();
    loadPayMethods();
    loadTransactions();
    loadSettings();
}

UserController::~UserController()
{

}

void UserController::start()
{
    userWindow.show();
}

void UserController::onLogout()
{
    userWindow.hide();
    mainController.close();
}

void UserController::addTransaction(float amount, const QDate &date, const QString &categoryName, const QString &payMethodName, const QString &description)
{
    std::shared_ptr<Transaction> transaction = nullptr;
    transaction = userDAO.addTransaction((int)(amount * 100.0f)
                         , description
                         , date.toString("yyyy-MM-dd")
                         , getCategoryByName(categoryName)
                         , getPayMethodByName(payMethodName));
    if(transaction != nullptr)
    {
      addTransactionToUI(transaction);
      transactions = userDAO.getTransactions();
    }
}

void UserController::updateTransaction(float amount, const QDate &date, const QString &categoryName, const QString &payMethodName, const QString &description, size_t ID)
{
    std::shared_ptr<Transaction> transaction = userDAO.getTransaction(ID);
    if(transaction != nullptr)
    {
        if(userDAO.updateTransaction(transaction
                                     , (int)(amount*100)
                                     , description
                                     , date.toString("yyyy-MM-dd")
                                     , getCategoryByName(categoryName)
                                     , getPayMethodByName(payMethodName)
                                     ))
        {
            userWindow.updateTransactionEntry(date, amount, description, categoryName, payMethodName, transaction->ID);
        }
    }
}

void UserController::loadCategories()
{
    userWindow.clearCategories();
    // load all categories from database
    categories = userDAO.loadCategories();
    if(categories != nullptr)
    {
        // iterate through categories
        for(auto categoriesIt = categories->begin(), categoriesEnd = categories->end(); categoriesIt != categoriesEnd; ++categoriesIt)
        {
            // add category to UI (combo boxes)
            userWindow.addCategory((*categoriesIt)->Name);
        }
    }

}

void UserController::loadPayMethods()
{
    userWindow.clearPayMethods();
    // load all payment methods for logged in user from database
    payMethods = userDAO.loadPayMethods();
    if(payMethods != nullptr)
    {
        // iterate through payment methods
        for(auto payMethodIt = payMethods->begin(), payMethodEnd = payMethods->end(); payMethodIt != payMethodEnd; ++payMethodIt)
        {
            // add payment method to UI (list and combo boxes)
            userWindow.addPayMethod((*payMethodIt)->Name);
        }
    }
}

void UserController::loadTransactions()
{
    userWindow.clearTransactionEntries();
    // load all transactions for logged in user from database
    transactions = userDAO.loadTransactions();
    if(transactions != nullptr)
    {
        // iterate through all transactions
        for(auto transactionsIt = transactions->begin(), transactionsEnd = transactions->end(); transactionsIt != transactionsEnd; ++transactionsIt)
        {
            // add transaction to UI (table)
            addTransactionToUI(*transactionsIt);
        }
    }
}

void UserController::loadSettings()
{
    // add user name and birthdate to UI
    userWindow.setSettings(user->Name, user->Birthdate);
}

void UserController::addTransactionToUI(std::shared_ptr<Transaction> transaction)
{
    // add transaction to UI (table)
    userWindow.addTransactionEntry(transaction->Date
                                   , ((float)transaction->Amount)/100.0f // cents to euro
                                   , transaction->Description
                                   , transaction->Category != nullptr ? transaction->Category->Name : QString() // if category is nullptr -> empty QString
                                   , transaction->PayMethod != nullptr ? transaction->PayMethod->Name : QString() // if payment method is nullptr -> empty QString
                                   , transaction->ID
                                  );
}

std::shared_ptr<Category> UserController::getCategoryByName(const QString &name)
{
    if(categories != nullptr)
    {
        // iterate through categories
        for(auto categoriesIt = categories->begin(), categoriesEnd = categories->end(); categoriesIt != categoriesEnd; ++categoriesIt)
        {
            if((*categoriesIt)->Name == name)
            {
                return *categoriesIt;
            }
        }
    }
    return nullptr;
}

std::shared_ptr<PayMethod> UserController::getPayMethodByName(const QString &name)
{
    if(payMethods != nullptr)
    {
        // iterate through payment methods
        for(auto payMethodIt = payMethods->begin(), payMethodEnd = payMethods->end(); payMethodIt != payMethodEnd; ++payMethodIt)
        {
            if((*payMethodIt)->Name == name)
            {
                return *payMethodIt;
            }
        }
    }
    return nullptr;
}

void UserController::deleteTransaction(size_t ID)
{
    if(userDAO.deleteTransaction(ID))
    {
        loadTransactions();

    }
}

bool UserController::addPayMethod(const QString &name)
{
    std::shared_ptr<PayMethod> payMethod = nullptr;
    payMethod = getPayMethodByName(name);
    if(payMethod != nullptr)
    {
        return false;
    }
    payMethod = userDAO.addPayMethod(name);
    if(payMethod != nullptr)
    {
        userWindow.addPayMethod(name);
        payMethods = userDAO.getPayMethods();
    }
    return true;
}

bool UserController::deletePayMethod(const QString &name)
{
    std::shared_ptr<PayMethod> payMethod = nullptr;
    payMethod = getPayMethodByName(name);
    if(payMethod == nullptr)
    {
        return false;
    }
    if(userDAO.deletePayMethod(payMethod))
    {
        userWindow.deletePayMethod(name);
        payMethods = userDAO.getPayMethods();
    }
    return true;
}

void UserController::updateUserData(const QString &name, const QDate &date)
{
    if(userDAO.updateUserData(name, date.toString("yyyy-MM-dd")))
    {
        userWindow.setSettings(name, date);
    }
}

void UserController::updateUserPassword(const QString &oldPassword, const QString &newPassword)
{
    if(userDAO.updateUserPassword(oldPassword, newPassword))
    {
        //
    }
}
