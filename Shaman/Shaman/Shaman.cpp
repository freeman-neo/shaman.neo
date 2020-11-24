// Shaman.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "strfunc.h"
#include "stdio.h"

int main()
{
    const int Length = StringLength("123") ;
    const char *Output = StringCopy("abc", Length) ;
     
    const char *s1 = StringAppend("ABCDEFG", "123") ;
    const char *s2 = StringReverse("123") ; 
    const char *s3 = StringLeft("123456") ; 
    const char *s4 = StringRight("123456") ;

    delete[] Output ; 
    delete[] s1 ; 
    delete[] s2 ; 
    delete[] s3 ; 
    delete[] s4 ; 
    return 0 ;
}

