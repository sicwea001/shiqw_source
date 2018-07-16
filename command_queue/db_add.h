#ifndef DB_ADD_H
#define DB_ADD_H

#include "command.h"
#include "database_op.h"


class DbAdd : public Command
{
public:
    DbAdd(DatabaseOp op)
    {
        this->op = op;
    }

    void execute()
    {
        op.add();
    }

private:
    DatabaseOp op;

};

#endif // DB_ADD_H
