#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include "Listfunc.h"
#include "Stack.h"

Data::Data()
{
    m_i = 0 ;
    m_s = nullptr ; 
}

Data::Data(int i, const char *s)
{
    m_i = i ;
    size_t size = strlen(s) + 1 ; 
    m_s = new char[size] ; 
    strcpy(m_s, s) ; 
}

Data::~Data()
{
    delete[] m_s ;
}

void List::AddTail(Data data)
{
    if (m_head == nullptr)
    {
        Node *node = new Node ; 
        node->data = data ; 
        node->next = nullptr ; 
        m_head = node ; 
    }
    else
    {
        Node *node = new Node;
        Node *temp = m_head ; 
        node->data = data ;
        node->next = nullptr ;

        if (m_head->next == nullptr)
        {
            m_head->next = node ; 
        }
        else
        {
            while (temp->next != nullptr)
            {
                temp = temp->next ; 
            }
            temp->next = node ; 
        }
    }
}

void List::AddHead(Data data)
{
    Node *node = new Node ; 
    node->data = data ; 
    node->next = m_head ; 
    m_head = node ;
}

void List::RemoveTail() 
{
    Node *temp = m_head ; 
    while (temp->next->next != nullptr)
    {
        temp = temp->next ;
        
    }
    delete temp->next ; 
    temp->next = nullptr ;
}

void List::RemoveHead()
{
    Node *temp = m_head ; 
    m_head = m_head->next ; 
    temp->next = nullptr ; 
    delete temp ; 
}

int List::GetCount() 
{
    int count = 1 ; 
    Node *temp = m_head ;
    while (temp->next != nullptr)
    {
        temp = temp->next ;
        count++ ; 
    }
    delete temp ; 
    return count ; 
}

void List::RemoveAll(int count)
{
    for (int i = 1 ; i < count ; i++)
    {
        Node *temp = m_head ;
        m_head = m_head->next ;
        temp->next = nullptr ;
        delete temp ;
    }
}


