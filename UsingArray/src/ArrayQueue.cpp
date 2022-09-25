#include "ArrayQueue.h"

void ArrayQueue :: enqueue(int data)
{
    if(!isFull())
    {
        r++;
        array[r] = data;
    }
    else
    {
        std::cout << "\nQueue Overflow\n";
    }

}

int ArrayQueue :: dequeue()
{
    if(!isEmpty())
    {
        f++;
        int dequeuing_array = array[f];
        return dequeuing_array;
    }
    else
    {
        std::cout << "\nQueue Underflow\n";
    }
}

bool ArrayQueue :: isEmpty()
{
    if(r == f)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool ArrayQueue :: isFull()
{
    if(r == MAX_SIZE-1)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int ArrayQueue :: front()
{
    if(!isEmpty())
    {
        return array[f];
    }
    
}

int ArrayQueue :: back()
{
    if(!isEmpty())
    {
        return array[r];
    }
    
}