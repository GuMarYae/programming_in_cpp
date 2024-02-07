#include <iostream>
#include <iomanip>
#include <string>

#include "heapPointers.h"

// constructor
SimpleCat::SimpleCat()
{
    std::cout << "Constructor called\n";
    itsAge = 1;
}
// destructor
SimpleCat::~SimpleCat()
{
    std::cout << "Destructor called. freed memory activated!\n";
}