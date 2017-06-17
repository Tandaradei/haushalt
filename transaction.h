#pragma once

#include <memory>
#include "user.h"
//#include "category.h"
//#include "paymentmethod.h"

struct Transaction
{
public:
    size_t TID;
    std::shared_ptr<User> User;
    int Amount; // in euro cents
    QString Description;
    QDate Date;
    // std::shared_ptr<Category> Category;
    // std::shared_ptr<PaymentMethod> PaymentMethod;
};
