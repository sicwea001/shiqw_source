#ifndef WHIP_H
#define WHIP_H

#include "condiment_decorator.h"

class Whip : public CondimentDecorator
{
public:
    Whip(Beverage* beve)
    {
        beverage = beve;
    }

    QString getDescription()
    {
        return beverage->getDescription()+", Whip";
    }

    double cost()
    {
        return 0.15 + beverage->cost();
    }
private:
    Beverage* beverage;
};


#endif // WHIP_H
