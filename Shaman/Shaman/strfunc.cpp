#include "strfunc.h"

const char *StringCopy(const char *s)
{
    return s ; 
 
}

const int StringLength(const char *s)
{
    int l = 0 ;

    while (s != "/0")
    {
        s++ ;
        l++ ; 
    }


   
   

    
   
    return l - 1 ; 
}

const char *StringAppend(const char *s, const char *s1)
{
    return s ; 

}
