// List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include "Listfunc.h"
#include "Stack.h"
#include <stdio.h>
#include <iostream>
#include <crtdbg.h>

int main()
{
    _CrtMemState ms ;
    _CrtMemCheckpoint(&ms) ; {

    int count ;
    int i = 10 ; 
    const char *s = "Hello" ; 
    Stack Stackfunc ; 
    Data data(10, s) ;

    Stackfunc.Push(data) ;
    Stackfunc.Push(data) ;
    Stackfunc.Push(data) ;
    data = Stackfunc.Pop() ; 
    count = Stackfunc.GetCount() ;

    Stackfunc.RemoveAll(count) ; 

    } _CrtMemDumpAllObjectsSince(&ms) ;
}
