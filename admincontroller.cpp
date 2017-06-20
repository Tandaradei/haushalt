#include "maincontroller.h"
#include "dbmanager.h"
#include "admincontroller.h"
#include "user.h"

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
        // TODO
    }
}
