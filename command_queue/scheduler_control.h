#ifndef SCHEDULER_CONTROL_H
#define SCHEDULER_CONTROL_H


#include "command.h"
#include "thread_utils.h"

#include <QQueue>


class SchedulerControl
{
public:
    SchedulerControl()
    {
        //queue = new QLinkedList<Command>();
    }

    void setScheduler(Command *command)
    {
        //queue.add(command);
        queue.enqueue(command);
    }

    //开启多线程
    void startComand()
    {
        //Command command = queue.poll();
        //while (command != NULL)
        //{
        //    ThreadUtils.startThread(command);
        //    command = queue.poll();
        //}

        while (!queue.isEmpty())
        {
            Command *command = queue.dequeue();
            ThreadUtils::startThread(command);
        }
    }

private:
    QQueue<Command *> queue;

};


#endif // SCHEDULER_CONTROL_H
