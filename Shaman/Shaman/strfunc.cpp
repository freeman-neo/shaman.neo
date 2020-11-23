#include "strfunc.h"

const char *StringCopy(const char *s, int length)
{
    length = length + 1 ; 
    char *temp = new char[length] ;
    
    for (int i = 0 ; i < length ; i++)
    {
        temp[i] = s[i] ;
    }

    s = temp ;

  

     
    return s ; 
 
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




const char *StringAppend(const char *s, const char *s12)
{
    return s ; 

}
