#ifndef HOUSE_BLEND_H
#define HOUSE_BLEND_H


#include "beverage.h"

class HouseBlend : public Beverage
{
public:
    HouseBlend():Beverage("HouseBlend Coffee"){}

    double cost()
    {
        return 0.89;
    }
};



#endif // HOUSE_BLEND_H
