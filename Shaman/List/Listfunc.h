#pragma once

#include <stdio.h>

class Data
{
    private :
        int m_i ; 
        char *m_s ; 
    public :
        Data() ;
        Data(int i, const char *s) ; 
        ~Data() ;
} ;

struct Node
{
    Data data ;
    Node *next ;
} ;

class List
{
    protected :
        Node *m_head = nullptr ;
    public :
        void AddTail(Data data) ; 
        void AddHead(Data data) ; 
        void RemoveTail() ; 
        void RemoveHead() ; 
        int GetCount() ; 
        void RemoveAll(int count) ; 
} ;


