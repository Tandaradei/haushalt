#include "maincontroller.h"
#include "dbmanager.h"
#include "usercontroller.h"
#include "user.h"
#include "transaction.h"

UserController::UserController(MainController& mainController, DbManager &dbManager, std::shared_ptr<User> user)
    :mainController(mainController)
    ,userDAO(dbManager, user)
    ,userWindow(*this)
    ,user(user)
    ,transactions()
{
    userWindow.setWindowTitle(user->Name);
    transactions = userDAO.getTransactions();
    for(auto transactionsIt = transactions.begin(), transactionsEnd = transactions.end(); transactionsIt != transactionsEnd; ++transactionsIt)
    {
        userWindow.addTransactionEntry((*transactionsIt)->Date
                                       , ((float)(*transactionsIt)->Amount)/100.0f
                                       , (*transactionsIt)->Description
                                       , "Category"
                                       , "PaymentMethod");
    }
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

