#include "QueueList.h"


bool List :: isEmpty()
{
    if(Head == nullptr)
    {
        return true;
    }
        
    else 
    {
        return false;
    }
}

void List :: enqueue(int data)
{
    Node *newNode = new Node();
    newNode -> info = data;
    newNode->next = nullptr;    
    Head = newNode;
    
    
    
    
    
}

void List :: dequeue()
{
    if(!isEmpty()){
        Node * NodeToDelete = Head;
        Head = NodeToDelete->next;
        delete NodeToDelete;
        
        

    }
    
}

int List :: front()
{
    if(!isEmpty())
    {
        return Head->info;
    }
    
}

int List :: back()
{
    if(!isEmpty())
    {
        return Tail->info;
    }
    
}
