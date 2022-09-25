
#include "QueueList.h"

int main()
{
    List L;
    std::cout << "\nChecking Empty or not" <<std::endl;
    std::cout << "**********************" << std::endl;
    if(L.isEmpty())
    {
        std::cout << "\tEmpty\n" << std::endl;
    }
    else{
        std::cout << "\tnot empty\n" << std::endl;
    }

    std::cout << "\tenqueuing ";
    L.enqueue(5);
    std:: cout << L.back() << std::endl;

    std::cout << "\tenqueuing ";
    L.enqueue(6);
    std:: cout << L.back() << std::endl;

    std::cout << "\tenqueuing ";
    L.enqueue(7);
    std:: cout << L.back() << std::endl;

    std::cout << "\tenqueuing ";
    L.enqueue(8);
    std:: cout << L.back() << std::endl;

    std::cout << "----------------------------" << std::endl;
    
    
    std::cout << "\nChecking Empty or not" <<std::endl;
    std::cout << "**********************" << std::endl;
    if(L.isEmpty())
    {
        std::cout << "\tEmpty\n" << std::endl;
    }
    else{
        std::cout << "\tnot empty\n" << std::endl;
    }
    std::cout << "\tdequeuing ... \n";
    std:: cout << "\tFront is " << L.front() << std::endl;
    L.dequeue();

    std::cout << "\tdequeuing ...\n " ;
    
    L.dequeue();

    std::cout << "\tdequeuing ...\n";
    
    L.dequeue();

    
    




   
    
    

}
