#ifndef DATABASE_OP_H
#define DATABASE_OP_H

#include <QDebug>

class DatabaseOp
{
public:

    void add()
    {
        qDebug() << "add database";
    }

    void del()
    {
        qDebug() << "del database";
    }

    void update()
    {
        qDebug() << "update database";
    }

};

#endif // DATABASE_OP_H
