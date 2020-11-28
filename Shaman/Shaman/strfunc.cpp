#include <ctype.h>
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
    int FirstLen = StringLength(s) ; // 7
    int SecLen = StringLength(s1) ;  // 3
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

<<<<<<< HEAD
bool StringCompare(char *FirString, char *SecString)
{
    int FirLength = StringLength(FirString) ; 
    int SecLength = StringLength(SecString) ;

    if (FirLength != SecLength)
    {
        return false ;
    }
    for (int i = 0 ; i < FirLength ; i++)
    {
        if (FirString[i] != SecString[i])
        {
            return false ;
        }
    }
    return true ;
}

char *StringUpper(char *s)
{
    int Length = StringLength(s) ; 

    for (int i = 0 ; i < Length ; i++)
    {
        s[i] = static_cast<char>(toupper(s[i])) ; 
    }
    return s ; 
}

char *StringLower(char *s) 
{
    int Length = StringLength(s) ;

    for (int i = 0 ; i < Length ; i++)
    {
        s[i] = static_cast<char>(tolower(s[i])) ;
    }
    return s ;
}

bool StringCompareI(char *FirString, char *SecString)
{
    int FirLength = StringLength(FirString) ;
    int SecLength = StringLength(SecString) ;
    
    if (FirLength != SecLength)
    {
        return false ;
    }
    
    FirString = StringUpper(FirString) ;
    SecString = StringUpper(SecString) ;
    
    for (int i = 0 ; i < FirLength ; i++)
    {
        if (FirString[i] != SecString[i])
        {
            return false ;
        }
    }
    return true ;
}
=======
bool StringCompare() 
{
    const char *FirString = "123" ; 
    const char *SecString = "123" ; 
    int Length = StringLength(FirString) ; 
    int Tnum = 0 ;
    int Fnum = 0 ;  
    

    /*
    printf("FirstString : \n") ; 
    scanf_s("%s", FirString) ; 
    printf("SecondString : \n") ; 
    scanf_s("%s", SecString) ;
    */
   
    for (int i = 0 ; i < Length ; i++)
    {
        if (FirString[i] != SecString[i])
        {
            Fnum++ ;     
        }
        else 
        {
            Tnum++ ; 
        }
    }

    if (Fnum == Length)
    {
        return false ;     
    }
    else 
    {
        return true ; 
    }

}



    
>>>>>>> 02f10aa5a31771720b3cdb66206a729a2a4e001b
