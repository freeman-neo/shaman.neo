#include "filefunc.h"
#include "strfunc.h"
#include <stdio.h>

/*
FILE *FileOpen(char *name) 
{
    FILE *stream = fopen(name, "w") ; 
    return stream ;
}
*/

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

    return(size == 0) ? false : true ;
}

bool FileWriteBool(FILE *stream, bool value)
{
    if (value)
    {
        FileWriteString(stream, "true") ;
    }
    else
    {
        FileWriteString(stream, "false") ; 
    }
    
    return 0 ;
}

bool FileCopy(const char *FileName1, const char *FileName2)
{
    FILE *File1 = fopen(FileName1, "r") ;
    FILE *File2 = fopen(FileName2, "w") ;
    char buffer[1] ;
    size_t size = 1 ; 
    
    while (true)
    {
        size = fread(buffer, 1, 1, File1) ; 
        if (size == 0)
        {
            break ; 
        }
        fwrite(buffer, 1, 1, File2) ;
    }
    fclose(File1) ;
    fclose(File2) ; 

    return(size == 1) ? false : true ; 
}

void FileClose(FILE *stream)
{
    fclose(stream) ; 
}