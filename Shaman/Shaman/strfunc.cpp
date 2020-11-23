#include "strfunc.h"

const char *StringCopy(const char *Inputs, int Length)
{
    int Length_1 = Length + 1 ; 
    char *Temp = new char[Length_1] ;
    
    for (int i = 0 ; i < Length_1 ; i++)
    {
        Temp[i] = Inputs[i] ;
    }

    return Temp ; 
}

const int StringLength(const char *s)
{
    int l = 0 ;

    while (*s != '\0')
    {
        s++ ;
        l++ ; 
    }

    return l ;
}


const char *StringAppend(const char *s, const char *s1)
{
    int FirstLen = StringLength(s) ;
    int SecLen = StringLength(s1) ; 
    int Len = FirstLen + SecLen + 1 ; 
    
    char *Temp = new char[Len] ; 
    for (int i = 0 ; i < FirstLen ; i++)
    {
        Temp[i] = s[i] ; 
    }
    
    for (int i = FirstLen ; i < Len - 1 ; i++)
    {
        Temp[i] = s1[i - FirstLen] ;
    }

    Temp[Len - 1] = '\0' ; 
    
    return Temp ; 
    
}
