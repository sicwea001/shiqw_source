#ifndef SOCKET_OP_H
#define SOCKET_OP_H

#include <QDebug>

class SocketOp
{
public:
    void send()
    {
        qDebug() << "send network data";
    }

    void receive()
    {
        qDebug() << "recevie network data";
    }

};


#endif // SOCKET_OP_H
