#ifndef THREAD_UTILS_H
#define THREAD_UTILS_H

#include "command.h"
#include "command_thread.h"

#include <QThreadPool>

class ThreadUtils
{
public:
    static void startThread(Command *command)
    {
        CommandThread *target = new CommandThread(command);

        QThreadPool thread_pool;
        thread_pool.setMaxThreadCount(4);
        thread_pool.start(target);

        //QThreadPool *global_pool = QThreadPool::globalInstance();
        //global_pool->start(target);
        //global_pool->waitForDone();
    }

};


#endif // THREAD_UTILS_H
