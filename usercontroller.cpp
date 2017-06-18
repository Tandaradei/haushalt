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

void UserController::loadCategories()
{
    categories = userDAO.loadCategories();
    for(auto categoriesIt = categories->begin(), categoriesEnd = categories->end(); categoriesIt != categoriesEnd; ++categoriesIt)
    {
        userWindow.addCategory((*categoriesIt)->Name);
    }

}

void UserController::loadPaymentMethods()
{
    paymentMethods = userDAO.loadPaymentMethods();
    for(auto paymentMethodIt = paymentMethods->begin(), paymentMethodEnd = paymentMethods->end(); paymentMethodIt != paymentMethodEnd; ++paymentMethodIt)
    {
        userWindow.addPaymentMethod((*paymentMethodIt)->Name);
    }
}

void UserController::loadTransactions()
{
    transactions = userDAO.loadTransactions();
    for(auto transactionsIt = transactions->begin(), transactionsEnd = transactions->end(); transactionsIt != transactionsEnd; ++transactionsIt)
    {
        userWindow.addTransactionEntry((*transactionsIt)->Date
                                       , ((float)(*transactionsIt)->Amount)/100.0f
                                       , (*transactionsIt)->Description
                                       , (*transactionsIt)->Category->Name
                                       , (*transactionsIt)->PaymentMethod->Name);
    }
}

void UserController::loadSettings()
{
    userWindow.setSettings(user->Name, user->Birthdate);
}

