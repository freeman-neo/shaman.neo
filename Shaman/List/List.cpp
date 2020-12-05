// List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Listfunc.h"
#include <stdio.h>
#include <iostream>

int main()
{
    List Listfunc ; 
    Data data ; 
    int count ;

    Listfunc.AddTail(data) ; 
    Listfunc.AddTail(data) ;
    Listfunc.AddTail(data) ;
    Listfunc.AddTail(data) ;
    Listfunc.AddTail(data) ;

    Listfunc.AddHead(data) ; 
    Listfunc.AddHead(data) ;

    Listfunc.RemoveHead() ; 


    Listfunc.RemoveTail() ;    
    count = Listfunc.GetCount() ; 
}
