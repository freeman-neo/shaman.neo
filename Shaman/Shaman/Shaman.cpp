// Shaman.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "strfunc.h"


int main()
{
    const int Length = StringLength("123") ;
    const char *Output = StringCopy("abc", Length) ;
     
    const char *s1 = StringAppend("ABCDEFG", "123") ;

    delete[] Output ; 
    delete[] s1 ; 
    
    return 0 ;
}

