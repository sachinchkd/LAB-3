#ifndef Queue_h
#define Queue_h

#include "iostream"
#define MAX_SIZE 8

class Node
{

    public:
        int info;
        Node * next;

        Node(){}
        Node(int data, Node next ): info(data), next(nullptr) {}
        
};

class Queue 
{

public:
    Node *Head = nullptr;
    Node *Tail;

   int r = -1, f = -1;
    int array[MAX_SIZE];

};


#endif