#pragma once

#include <stdio.h>

class Data
{
};

struct Node
{
    Data data ;
    Node *next ;
} ;

class List
{
    private :
        Node *m_head = nullptr ; 

    public :
        void AddTail(Data data) ; 
        void AddHead(Data data) ; 
        void RemoveTail() ; 
        void RemoveHead() ; 
        int GetCount() ; 
        void RemoveAll(int count) ; 

};


