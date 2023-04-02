#include <iostream>

#include "sams_linkedListsOYO.h"

// instead of run
//  (a) g++ -o test driverMain.cpp sams_linkedListsOYO.cpp
//  (a) ./test

int main()
{

    Data *pData;
    int value;
    LinkedList infinityNodes;

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