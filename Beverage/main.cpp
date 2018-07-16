#include <QCoreApplication>
#include <QDebug>

#include "house_blend.h"
#include "espresso.h"
#include "beverage.h"
#include "mocha.h"
#include "whip.h"



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // 点一杯 Espresso 什么都不加
    Beverage * beverage = new Espresso();
    qDebug() << beverage->getDescription() << beverage->cost();

    // 点一杯 HouseBlend 加whip 和 Mocha
    Beverage * beverage2 = new HouseBlend();
    beverage2 = new Mocha(beverage2);
    beverage2 = new Whip(beverage2);
    qDebug() << beverage2->getDescription() << beverage2->cost();

    // 点一杯 HouseBlend 加whip 和 Mocha Soy
    Beverage * beverage3 = new HouseBlend();
    beverage3 = new Mocha(beverage3);
    beverage3 = new Whip(beverage3);
    //beverage3 = new Soy(beverage3);
    qDebug() << beverage3->getDescription() << beverage3->cost();




    return a.exec();
}
