#ifndef COMMAND_THREAD_H
#define COMMAND_THREAD_H

#include <QRunnable>
#include <QThread>
#include <QDebug>

#include "command.h"

class CommandThread : public QRunnable
{
public:
    CommandThread(Command *command)
    {
        this->command = command;
    }

    void run()
    {
        qDebug()<< "thread start: " << QThread::currentThread();
        command->execute();
    }

private:
    Command *command;

};


#endif // COMMAND_THREAD_H
