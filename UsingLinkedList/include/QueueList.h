#ifndef QueueList_h
#define QueueList_h

#include "Queue.h"

class List : public Queue
{
    public:
    

    List(){}
    ~List(){}

    void enqueue(int data);
    void dequeue();
    bool isEmpty();
    
    int front();
    int back();

        




};


#endif