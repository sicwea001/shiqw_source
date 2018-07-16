#ifndef MOCHA_H
#define MOCHA_H


#include "condiment_decorator.h"

class Mocha : public CondimentDecorator
{
public:
    Mocha(Beverage* beve)
    {
        beverage = beve;  // 想办法让被装饰者被记录到实例变量中。这里做法是：把饮料当作构造器的参数，
                         // 再由构造器将此饮料记录在实例变量中。
    }

    QString getDescription()
    {
        return beverage->getDescription()+", Mocha"; // 描述:帮助这杯饮料都有什么材料
    }

    double cost()
    {
        return 0.20 + beverage->cost();    // 0.2是摩卡的价钱，加上被装饰的价钱
    }
private:
    Beverage* beverage;
};


#endif // MOCHA_H
