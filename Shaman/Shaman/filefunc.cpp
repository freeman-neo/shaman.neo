#include "filefunc.h"
#include "strfunc.h"
#include <stdio.h>

FILE *FileOpen(char *name) 
{
    FILE *stream = fopen(name, "w") ; 
    return stream ;
}

bool FileWriteString(FILE *stream, const char *value) 
{
    int Length = StringLength(value) ; 
    const char *br = "\r\n" ; 
    size_t size ;
    
    size = fwrite(value, Length, 1, stream) ;
    fwrite(br, 2, 1, stream) ; 

    return (size == 0) ? false : true ;
}

bool FileWriteInt(FILE *stream, int value)
{
    size_t size ; 
    size = fwrite(&value, 4, 1, stream) ; 
    
    return(size == 0) ? false : true ; 
}


















void FileClose(FILE *stream)
{
    fclose(stream) ; 
}