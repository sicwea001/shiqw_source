#ifndef CONDIMENT_DECORATOR_H
#define CONDIMENT_DECORATOR_H


#include "beverage.h"

class CondimentDecorator : public Beverage
{
public:
    QString getDescription()
    {
        return "";
    }
};



#endif // CONDIMENT_DECORATOR_H
