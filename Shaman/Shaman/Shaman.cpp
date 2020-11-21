// Shaman.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "strfunc.h"


int main()
{
    const char *s = StringCopy("123") ;
    const int length = StringLength("123") ;
    const char *s1 = StringAppend("ABCDEFG", "123") ;
    return 0 ;
}

