#include <QCoreApplication>

#include "database_op.h"
#include "file_op.h"
#include "socket_op.h"
#include "db_add.h"
#include "file_download.h"
#include "file_upload.h"
#include "socket_receive.h"
#include "scheduler_control.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Receiver
    DatabaseOp databaseOp;
    FileOp fileOp;
    SocketOp socketOp;

    //concreteCommand
    DbAdd dbAdd(databaseOp);
    FileDownload fileDownload(fileOp);
    FileUpload fileUpload(fileOp);
    SocketReceive socketReceive(socketOp);

    DbAdd dbAdd2(databaseOp);
    FileDownload fileDownload2(fileOp);
    FileUpload fileUpload2(fileOp);
    SocketReceive socketReceive2(socketOp);

    //Invoker绑定concreteCommand
    SchedulerControl control;
    control.setScheduler(&dbAdd);
    control.setScheduler(&fileUpload);
    control.setScheduler(&fileDownload);
    control.setScheduler(&socketReceive);
    //再次向数据库插入数据
    control.setScheduler(&dbAdd2);
    control.setScheduler(&fileUpload2);
    control.setScheduler(&fileDownload2);
    control.setScheduler(&socketReceive2);

    //开启工作队列
    control.startComand();




    return a.exec();
}
