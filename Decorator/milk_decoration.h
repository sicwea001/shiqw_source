#ifndef MILK_DECORATION_H
#define MILK_DECORATION_H


#include "decoration.h"

class MilkDecoration : public Decoration
{
public:
    MilkDecoration(IComponent *cp)
    {
        _cp = cp;
    }

    virtual ~MilkDecoration()
    {

    }

public:
    virtual float cost()
    {
        return _cp->cost() + 0.3;
    }

private:
    IComponent * _cp;
};



#endif // MILK_DECORATION_H
