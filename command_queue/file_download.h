#ifndef FILE_DOWNLOAD_H
#define FILE_DOWNLOAD_H

#include "command.h"
#include "file_op.h"

class FileDownload : public Command
{
public:

    FileDownload(FileOp op)
    {
        this->op = op;
    }

    void execute()
    {
        op.download();
    }

private:
    FileOp op;
};

#endif // FILE_DOWNLOAD_H
