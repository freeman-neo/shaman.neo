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
    char buffer[100] ; 
    
    size_t size ; 
    sprintf(buffer, "%d", value) ;
    size = FileWriteString(stream, buffer) ; 

    return(size == 0) ? false : true ; 
}
bool FileWriteFloat(FILE *stream, float value) 
{
    char buffer[100] ;
    
    size_t size ; 
    sprintf(buffer, "%f", value) ;
    size = FileWriteString(stream, buffer) ;

    return(size == 0) ? false : true ;
}
bool FileWriteChar(FILE *stream, char value)
{
    char buffer[100] ;
    
    size_t size ; 
    sprintf(buffer, "%c", value) ;
    size = FileWriteString(stream, buffer) ;

    return(size == 1) ? false : true ;
}

bool FileWriteBool(FILE *stream, bool value)
{
     
    
    if (value == 1)
    {
        FileWriteString(stream, "true") ;
    }
    else
    {
        FileWriteString(stream, "false") ; 
    }
    
    return 0 ;
}
















void FileClose(FILE *stream)
{
    fclose(stream) ; 
}