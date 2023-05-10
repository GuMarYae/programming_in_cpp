#include <iostream>

#include "sams_linkedListsOYO.h"

// instead of run
//  (a) g++ -o test driverMain.cpp sams_linkedListsOYO.cpp
//  (a) ./test

int main()
{
  //in a complete sentence.. "i made a pointer of type  Data"
    Data* pData; //made a Data type (pointer) and named it pData. didnt set anything to it, yet.
    int value;   //made an int type and named it value. it has no value yet.
    LinkedList infinityNodes; //made a linkedList type and named it infinityNodes. didnt set anything to it yet

    // store values in the linkedlist
    while (true)
    {
        std::cout << "enter as many unordered or ordered values, yo. Or, press \"0\" to stop: \n";
        std::cin >> value;
        if (!value)
            break;
        pData = new Data(value);
        infinityNodes.insert(pData);
    }

    // show all numbers after pressing 0

    infinityNodes.showAll();

    return 0;
    // return false;
    // system("pause>0");
}

