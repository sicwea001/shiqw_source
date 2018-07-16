#ifndef FILE_OP_H
#define FILE_OP_H

#include <QDebug>

class FileOp
{
public:

    void upload()
    {
        qDebug() << "upload file";
    }

    void download()
    {
        qDebug() << "download file";
    }

    void md5()
    {
        qDebug() << "md5 file";
    }

};


#endif // FILE_OP_H
