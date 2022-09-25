#include "ArrayQueue.h"


int main()
{
    ArrayQueue A;
    std::cout << "\nChecking Empty or not" <<std::endl;
    std::cout << "**********************" << std::endl;
    if(A.isEmpty())
    {
        std::cout << "\tEmpty\n" << std::endl;
    }
    else{
        std::cout << "\tnot empty\n" << std::endl;
    }

    std::cout << "\tenqueuing ...";
    A.enqueue(11);
    std:: cout << A.back() << std::endl;

    std::cout << "\tenqueuing ...";
    A.enqueue(12);
    std:: cout << A.back() << std::endl;
   

    std::cout << "\tenqueuing ...";
    A.enqueue(13);
    std:: cout << A.back() << std::endl;

    std::cout << "\tenqueuing ...";
    A.enqueue(14);
    std:: cout << A.back() << std::endl;
    
    std:: cout << "\n\tRear is " << A.back() << std::endl;
    
    
    
    std::cout << "\n\nChecking Full or not" <<std::endl;
    std::cout << "**********************" << std::endl;
    if(A.isFull())
    {
        std::cout << "\tFull\n" << std::endl;
    }
    else{
        std::cout << "\tnot Full\n" << std::endl;
    }

    std::cout << "\tdequeuing ..." << A.dequeue() <<std::endl;
    std::cout << "\tdequeuing ..." << A.dequeue() <<std::endl;
    std::cout << "\tdequeuing ..." << A.dequeue() <<std::endl;
    std::cout << "\tdequeuing ..." << A.dequeue() <<std::endl;

    std::cout << "--------------------------" << std::endl;
    std::cout << "\tenqueuing ...";
    A.enqueue(1);
    std:: cout << A.back() << std::endl;

    std::cout << "\tenqueuing ...";
    A.enqueue(2);
    std:: cout << A.back() << std::endl;

    std::cout << "\tenqueuing ...";
    A.enqueue(3);
    std:: cout << A.back() << std::endl;

    

    std::cout << "\n\nChecking Full or not" <<std::endl;
    std::cout << "**********************" << std::endl;
    if(A.isFull())
    {
        std::cout << "\tFull\n" << std::endl;
    }
    else{
        std::cout << "\tnot Full\n" << std::endl;
    }
}