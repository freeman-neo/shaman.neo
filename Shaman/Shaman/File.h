#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
class File
{
    private :
        
        FILE *m_stream ;
    public :
        
        FILE *Open(const char *name) ; 
        bool WriteString(const char *value) ;
        bool WriteInt(int value) ;
        bool WriteFloat(float value) ;
        bool WriteChar(char value) ;
        bool WriteBool(bool value) ;
        void Close() ;
} ;

