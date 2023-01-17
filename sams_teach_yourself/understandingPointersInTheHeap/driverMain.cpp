#include <iostream>
#include <iomanip>
#include <string>

#include "heapPointers.h"

// using namespace std;

// g++ -o test heapPointers.cpp driverMain.cpp

int main()
{
    std::cout << "this calls the constructor by making an object of a simplecat named spot\n";
    SimpleCat spot;

    std::cout << "this creates a pointer and puts it in the heap of the type simpleCat\n. It also calls the constructor again because of the variable type SimpleCat. yes, the class is a variable type";
    SimpleCat *pRags = new SimpleCat;

    std::cout << "this deletes the new pointer variable name, pRags and frees it from the heap\n";
    delete pRags;
    std::cout << "Exiting Frisky. \n in the terminal, you should see two destructors. This is BC two construcors were created; spot and pRags"
              << "after you make constructors, destructors must be called automatically\n";
    return 0; // or return 0;
}
