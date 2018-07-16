#ifndef BEVERAGE_H
#define BEVERAGE_H


#include <QObject>

class Beverage
{
public:
    Beverage(QString str = "Unknow Beverage")
        : description(str) { }

    virtual QString getDescription()
    {
        return description;
    }

    virtual double cost() { return 0; }

private:
    QString description;
};




#endif // BEVERAGE_H
