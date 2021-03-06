#pragma once

#include <memory>
#include "user.h"

class Category;
class PayMethod;

struct Transaction
{
public:
    size_t ID;
    int Amount; // in euro cents
    QString Description;
    QDate Date;
    std::shared_ptr<Category> Category;
    std::shared_ptr<PayMethod> PayMethod;
};
