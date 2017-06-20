#include "maincontroller.h"
#include "dbmanager.h"
#include "admincontroller.h"
#include "user.h"
#include "stanpayMethod.h"
#include "category.h"

AdminController::AdminController(MainController& mainController, DbManager &dbManager, std::shared_ptr<User> user)
    :UserController(mainController, dbManager, user)
    ,adminDAO(dbManager)
    ,users(nullptr)
{
    userWindow.enableAdmin(this);
    loadStanPayMethods();
    loadUsers();
}

AdminController::~AdminController()
{

}

void AdminController::start()
{
    userWindow.show();
}

void AdminController::addUser(const QString &email, const QString &password)
{
    std::shared_ptr<User> user = adminDAO.addUser(email, password);
    if(user != nullptr)
    {
        userWindow.addUserEntry(email, user->Name, user->Birthdate, user->Balance, user->ID);
        users = adminDAO.getUsers();
    }
}

void AdminController::updateUserPassword(size_t userId, const QString &password)
{
    if(adminDAO.updateUserPassword(userId, password))
    {
        //
    }
}

void AdminController::deleteUser(size_t userId)
{
    if(adminDAO.deleteUser(userId))
    {
        userWindow.clearUsers();
        loadUsers();
    }
}

void AdminController::addStanPayMethod(const QString &name)
{
    if(adminDAO.addStanPayMethod(name) != nullptr)
    {
        userWindow.addStanPayMethodEntry(name);
        stanPayMethods = adminDAO.getStanPayMethods();
    }
}

void AdminController::deleteStanPayMethod(const QString &name)
{
    for(auto stanPayMethodsIt = stanPayMethods->begin(); stanPayMethodsIt != stanPayMethods->end(); ++stanPayMethodsIt)
    {
        if((*stanPayMethodsIt)->Name == name)
        {
            if(adminDAO.deleteStanPayMethod((*stanPayMethodsIt)->ID))
            {
                userWindow.deleteStanPayMethod(name);
            }
            break;
        }
    }
}

void AdminController::addCategory(const QString &name)
{
    if(userDAO.addCategory(name) != nullptr)
    {
        userWindow.addCategory(name);
        categories = userDAO.getCategories();
    }
}

void AdminController::deleteCategory(const QString &name)
{
    for(auto categoriesIt = categories->begin(); categoriesIt != categories->end(); ++categoriesIt)
    {
        if((*categoriesIt)->Name == name)
        {
            if(userDAO.deleteCategory((*categoriesIt)->ID))
            {
                userWindow.deleteCategory(name);
            }
            break;
        }
    }
}

void AdminController::loadUsers()
{
    users = adminDAO.loadUsers();
    if(users != nullptr)
    {
        // iterate through users
        for(auto usersIt = users->begin(), usersEnd = users->end(); usersIt != usersEnd; ++usersIt)
        {
            // add category to UI (combo boxes)
            userWindow.addUserEntry((*usersIt)->Email
                                    , (*usersIt)->Name
                                    , (*usersIt)->Birthdate
                                    , (float)((*usersIt)->Balance) / 100.0f
                                    , (*usersIt)->ID
                                    );
        }
    }
}

void AdminController::loadStanPayMethods()
{
    stanPayMethods = adminDAO.loadStanPayMethods();
    if(stanPayMethods != nullptr)
    {
        // iterate through users
        for(auto stanPayMethodsIt = stanPayMethods->begin(); stanPayMethodsIt != stanPayMethods->end(); ++stanPayMethodsIt)
        {
            // add stanPayMethod to UI
            userWindow.addStanPayMethodEntry((*stanPayMethodsIt)->Name);
        }
    }
}
