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
    loadUsers();
}

AdminController::~AdminController()
{

}

void AdminController::start()
{
    userWindow.show();
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
