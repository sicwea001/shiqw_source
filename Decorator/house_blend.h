#ifndef HOUSE_BLEND_H
#define HOUSE_BLEND_H

#include "icomponent.h"

class HouseBlend : public IComponent
{
public:
    HouseBlend()
    {

    }
    virtual ~HouseBlend()
    {

    }

public:
    virtual float cost()
    {
        return 4.5;
    }
};




#endif // HOUSE_BLEND_H
