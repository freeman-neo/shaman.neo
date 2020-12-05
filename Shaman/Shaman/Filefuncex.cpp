#include "File.h"
#include "strfunc.h"

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


FILE *File::Open(const char *name)
{
    m_stream = fopen(name, "w") ;
    
    return m_stream ;
}

bool File::WriteString(const char *value)
{
    int Length = StringLength(value) ;
    const char *br = "\r\n" ;
    size_t size ;
    size = fwrite(value, Length, 1, m_stream) ;
    fwrite(br, 2, 1, m_stream) ;

    return (size == 0) ? false : true ;
}

bool File::WriteInt(int value)
{
    char buffer[100] ;

    size_t size ;
    sprintf(buffer, "%d", value) ;
    size = WriteString(buffer) ;

    return(size == 0) ? false : true ;
}
bool File::WriteFloat(float value) 
{
    char buffer[100] ;

    size_t size ;
    sprintf(buffer, "%f", value) ;
    size = WriteString(buffer) ;

    return(size == 0) ? false : true ;
}
bool File::WriteChar(char value)
{
    char buffer[100] ;

    size_t size ;
    sprintf(buffer, "%c", value) ;
    size = WriteString(buffer) ;

    return(size == 0) ? false : true ;
}

bool File::WriteBool(bool value)
{
    if (value)
    {
        WriteString("true") ;
    }
    else
    {
        WriteString("false") ;
    }

    return 0 ;
}

void File::Close()
{
    fclose(m_stream) ;
}