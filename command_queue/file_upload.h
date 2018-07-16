#ifndef FILE_UPLOAD_H
#define FILE_UPLOAD_H

#include "command.h"
#include "file_op.h"

class FileUpload : public Command
{
public:

    FileUpload(FileOp op)
    {
        this->op = op;
    }

    void execute()
    {
        op.upload();
    }

private:
    FileOp op;

};

#endif // FILE_UPLOAD_H
