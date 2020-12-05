#pragma once

#include <stdio.h>
#include "Listfunc.h"


class Stack : public List
{
    public:
        void Push(Data data) ;
        Data Pop() ;
} ;

