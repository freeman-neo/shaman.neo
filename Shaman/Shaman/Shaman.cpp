// Shaman.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "strfunc.h"
#include "filefuncex.h"
#include "stdio.h"


char *StringAlloc(int length)
{
    if (length > 10)
    {
        //  length < 1 -> return -1 ;
        //  length > 10 -> return 0 ;
        //  length >= 1 && length <= 10 -> return 1 ;
    }
    char *p = new char[length + 1] ;
    return p ;
}

int StringAllocEx(int length, char **p1)
{
    if (length < 1)
    {
        return -1 ;
    }
    if (length > 10)
    {
        return 0 ;
    }
    (*p1) = new char[length] ;
    
    return 1 ;
}

void str_test()
{
    char *p1 = nullptr ;
    int result = StringAllocEx(10, &p1) ;
    if (result == 1)
    {
        delete[] p1 ;
    }
    else
    {
        std::cout << "error" ;
    }
    const int Length = StringLength("123") ;
    const char *Output = StringCopy("abc", Length) ;
    char *FirString = new char[100] ;
    char *SecString = new char[100] ;
    std::cout << "enter string: " ;
    std::cin >> FirString ;
    std::cout << "enter string: " ;
    std::cin >> SecString ;

    bool s8 = StringCompareI(FirString, SecString) ;

    std::cout << "enter string: " ;
    std::cin >> FirString ;
    char *s6 = StringUpper(FirString) ;
    std::cout << "enter string: " ;
    std::cin >> SecString ;
    char *s7 = StringLower(SecString) ;

    std::cout << "enter string: " ;
    std::cin >> FirString ;
    std::cout << "enter string: " ;
    std::cin >> SecString ;

    bool s5 = StringCompare(FirString, SecString) ;
    const char *s1 = StringAppend("ABCDEFG", "123") ;
    const char *s2 = StringReverse("123") ;
    const char *s3 = StringLeft("123456") ;
    const char *s4 = StringRight("123456") ;

    delete[] Output ;
    delete[] s1 ;
    delete[] s2 ;
    delete[] s3 ;
    delete[] s4 ;
    delete[] FirString ;
    delete[] SecString ;
}

void file_test()
{  
    const char FileName1[] = "C:\\projects\\Hello.txt" ;
    const char FileName2[] = "C:\\projects\\World.txt" ;
    int Ivalue = 10 ; 
    char Cvalue = 'A'; 
    float Fvalue = 3.141592f ; 
    bool Bvalue ; 
    FILE *stream1 = FileOpen(FileName1) ; 
    FILE *stream2 = FileOpen(FileName2) ;
    FileWriteString("Hello World") ;
    FileWriteString("Thank You") ;
    FileWriteString("For") ;
    FileWriteString("Your Mercy") ;
    FileWriteInt(Ivalue) ;
    FileWriteFloat(Fvalue) ;
    Bvalue = FileWriteChar(Cvalue) ;
    FileWriteBool(Bvalue) ;
    FileClose() ;

    //FileCopy(FileName1, FileName2) ; 
}

int main(int argc, char *argv[])
{
    file_test() ; 

    /*
    if (argc == 3)
    {
        FileCopy(argv[1], argv[2]) ; 
        return 0 ; 
    }
    std::cout << "error" << std::endl ;  
    */
    return 0 ;
}

