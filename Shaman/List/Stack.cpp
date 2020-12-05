#include "Listfunc.h"
#include "Stack.h"

void Stack::Push(Data data)
{
    Node *node = new Node ;
    node->data = data ;
    node->next = m_head ;
    m_head = node ;
}

Data Stack::Pop()
{
    Node *temp = m_head ;
    Data data ;
    m_head = m_head->next ;
    temp->next = nullptr ;
    data = temp->data ; 
    delete temp ; 
    return data ; 
}




