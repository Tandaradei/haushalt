#include "maincontroller.h"
#include "dbmanager.h"
#include "usercontroller.h"
#include "user.h"
#include "transaction.h"
#include "category.h"
#include "paymentmethod.h"

UserController::UserController(MainController& mainController, DbManager &dbManager, std::shared_ptr<User> user)
    :mainController(mainController)
    ,userDAO(dbManager, user)
    ,userWindow(*this)
    ,user(user)
    ,categories(nullptr)
    ,paymentMethods(nullptr)
    ,transactions(nullptr)
{
    userWindow.setWindowTitle(user->Name);
    loadCategories();
    loadPaymentMethods();
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

void UserController::addTransaction(float amount, const QDate &date, const QString &categoryName, const QString &paymentMethodName, const QString &description)
{
  userDAO.addTransaction((int)(amount * 100.0f)
                         , description
                         , date.toString("yyyy-MM-dd")
                         , getCategoryByName(categoryName)
                         , getPaymentMethodByName(paymentMethodName));
}

void UserController::loadCategories()
{
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

void UserController::loadPaymentMethods()
{
    // load all payment methods for logged in user from database
    paymentMethods = userDAO.loadPaymentMethods();
    if(paymentMethods != nullptr)
    {
        // iterate through payment methods
        for(auto paymentMethodIt = paymentMethods->begin(), paymentMethodEnd = paymentMethods->end(); paymentMethodIt != paymentMethodEnd; ++paymentMethodIt)
        {
            // add payment method to UI (list and combo boxes)
            userWindow.addPaymentMethod((*paymentMethodIt)->Name);
        }
    }
}

void UserController::loadTransactions()
{
    // load all transactions for logged in user from database
    transactions = userDAO.loadTransactions();
    if(transactions != nullptr)
    {
        // iterate through all transactions
        for(auto transactionsIt = transactions->begin(), transactionsEnd = transactions->end(); transactionsIt != transactionsEnd; ++transactionsIt)
        {
            // add transaction to UI (table)
            userWindow.addTransactionEntry((*transactionsIt)->Date
                                           , ((float)(*transactionsIt)->Amount)/100.0f // cents to euro
                                           , (*transactionsIt)->Description
                                           , (*transactionsIt)->Category != nullptr ? (*transactionsIt)->Category->Name : QString() // if category is nullptr -> empty QString
                                           , (*transactionsIt)->PaymentMethod != nullptr ? (*transactionsIt)->PaymentMethod->Name : QString() // if payment method is nullptr -> empty QString
                                          );
        }
    }
}

void UserController::loadSettings()
{
    // add user name and birthdate to UI
  userWindow.setSettings(user->Name, user->Birthdate);
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

std::shared_ptr<PaymentMethod> UserController::getPaymentMethodByName(const QString &name)
{
    if(paymentMethods != nullptr)
    {
        // iterate through payment methods
        for(auto paymentMethodIt = paymentMethods->begin(), paymentMethodEnd = paymentMethods->end(); paymentMethodIt != paymentMethodEnd; ++paymentMethodIt)
        {
            if((*paymentMethodIt)->Name == name)
            {
                return *paymentMethodIt;
            }
        }
    }
    return nullptr;
}

