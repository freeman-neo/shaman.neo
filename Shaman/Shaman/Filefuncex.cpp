#include "filefuncex.h"
#include "strfunc.h"
#include <stdio.h>

FILE *stream = nullptr ;

FILE *FileOpen(const char *name)
{
    stream = fopen(name, "w") ;
    return stream ;
}

bool FileWriteString(const char *value)
{
    int Length = StringLength(value) ;
    const char *br = "\r\n" ;
    size_t size ;
    size = fwrite(value, Length, 1, stream) ;
    fwrite(br, 2, 1, stream) ;

    return (size == 0) ? false : true ;
}

bool FileWriteInt(int value)
{
    char buffer[100] ;

    size_t size ;
    sprintf(buffer, "%d", value) ;
    size = FileWriteString(buffer) ;

    return(size == 0) ? false : true ;
}
bool FileWriteFloat(float value)
{
    char buffer[100] ;

    size_t size ;
    sprintf(buffer, "%f", value) ;
    size = FileWriteString(buffer) ;

    return(size == 0) ? false : true ;
}
bool FileWriteChar(char value)
{
    char buffer[100] ;

    size_t size ;
    sprintf(buffer, "%c", value) ;
    size = FileWriteString(buffer) ;

    return(size == 0) ? false : true ;
}

bool FileWriteBool(bool value)
{
    if (value)
    {
        FileWriteString("true") ;
    }
    else
    {
        FileWriteString("false") ;
    }

    return 0 ;
}

void FileClose()
{
    fclose(stream) ;
}