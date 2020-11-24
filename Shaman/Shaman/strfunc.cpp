#include "strfunc.h"
#include "stdio.h"

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
    int Length = FirstLen + SecLen + 1 ; 
    
    char *Temp = new char[Length] ; 
    
    for (int i = 0 ; i < FirstLen ; i++)
    {
        Temp[i] = s[i] ; 
    }
    
    for (int i = FirstLen ; i < Length - 1 ; i++)
    {
        Temp[i] = s1[i - FirstLen] ;
    }

    Temp[Length - 1] = '\0' ; 
    
    return Temp ; 
}

const char *StringReverse(const char *s)
{
    int Length = StringLength(s) + 1 ;
    
    char *Temp = new char[Length] ;

    Length = Length - 1 ;

    for (int i = 0 ; i < Length ; i++)
    {
        Temp[i] = s[Length - 1 - i] ;
    }

    Temp[Length] = '\0' ; 

    return Temp ; 
}

const char *StringLeft(const char *s) 
{
    int Length = StringLength(s) + 1 ; 
    int Num ; 

    char *Temp = new char[Length] ;

    Length = Length - 1 ; 

    printf("Num : ") ; 
    scanf_s("%d", &Num) ; 

    if (Num < Length)
    {
        for (int i = 0 ; i < Num ; i++)
        {
            Temp[i] = s[i] ; 
        }
        Temp[Num] = '\0' ; 
    }
    else
    {
        for (int i = 0 ; i < Length ; i++)
        {
            Temp[i] = s[i] ; 
        }
        Temp[Length] = '\0' ; 
    }

    return Temp ; 
}

const char *StringRight(const char *s)
{
    int Length = StringLength(s) + 1 ;
    int Num ;

    char *Temp = new char[Length] ;

    Length = Length - 1 ;

    printf("Num : ") ;
    scanf_s("%d", &Num) ;

    if (Num < Length)
    {
        for (int i = 0 ; i < Num ; i++) 
        {
            Temp[i] = s[Length - Num] ;
            Length++ ; 
        }
        Temp[Num] = '\0' ;
    }
    else
    {
        for (int i = 0 ; i < Length ; i++)
        {
            Temp[i] = s[i] ;
        }
        Temp[Length] = '\0' ;
    }

    return Temp ;
}