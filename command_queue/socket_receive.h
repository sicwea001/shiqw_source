#ifndef SOCKET_RECEIVE_H
#define SOCKET_RECEIVE_H

#include "command.h"
#include "socket_op.h"

class SocketReceive : public Command
{
public:
    SocketReceive(SocketOp op)
    {
        this->op = op;
    }

    void execute()
    {
        op.receive();
    }

private:
    SocketOp op;

};


#endif // SOCKET_RECEIVE_H
