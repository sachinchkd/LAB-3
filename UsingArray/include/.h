#ifndef Queue_h
#define Queue_h

#include "Queue.h"

class ArrayStack : public Stack
{

public:
    int top_index = -1;
    

    void push(int data);
    int pop();
    bool isEmpty();
    bool isFull();
    int top();

};




#endif