#ifndef MOKA_H
#define MOKA_H


#include "decoration.h"

class Moka : public Decoration
{
public:
    Moka(IComponent *cp)
    {
        _cp = cp;
    }
    virtual ~Moka()
    {

    }

public:
    virtual float cost()
    {
        return _cp->cost() + 1.6;
    }

private:
    IComponent * _cp;
};



#endif // MOKA_H
