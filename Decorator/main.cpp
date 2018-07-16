#include <QCoreApplication>

#include <QDebug>

#include "milk_decoration.h"
#include "house_blend.h"
#include "moka.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    HouseBlend *blend = new HouseBlend;
    MilkDecoration *deco = new MilkDecoration(blend); // houseblend加牛奶
    qDebug() << deco->cost();

    Moka *mokaDeco = new Moka(blend); // houseblend加摩卡
    qDebug() << mokaDeco->cost();

    Moka *mokaDeco2 = new Moka(deco); // houseblend加牛奶加摩卡
    qDebug() << mokaDeco2->cost();

    delete mokaDeco2;
    mokaDeco2 = NULL;

    delete mokaDeco;
    mokaDeco = NULL;

    delete deco;
    deco = NULL;

    delete blend;
    blend = NULL;


    return a.exec();
}
