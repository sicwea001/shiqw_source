#ifndef ESPRESSO_H
#define ESPRESSO_H

#include "beverage.h"

class Espresso : public Beverage
{
public:

    Espresso():Beverage("Espresso") { }

    double cost()
    {
        return 1.99;
    }
};



#endif // ESPRESSO_H
