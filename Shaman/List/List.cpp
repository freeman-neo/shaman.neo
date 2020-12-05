// List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Listfunc.h"
#include <stdio.h>
#include <iostream>
#include <crtdbg.h>

int main()
{
    _CrtMemState ms ;
    _CrtMemCheckpoint(&ms) ; {

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
    
    Listfunc.RemoveAll(count) ; 

    } _CrtMemDumpAllObjectsSince(&ms) ;
}
