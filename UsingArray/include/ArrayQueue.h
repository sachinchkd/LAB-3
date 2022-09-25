#ifndef ArrayQueue_h
#define ArrayQueue_h

#include "Queue.h"

class ArrayQueue : public Queue
{

public:
    
    void enqueue(int data);
    int dequeue();
    bool isEmpty();
    bool isFull();
    int front();
    int back();

};

#endif