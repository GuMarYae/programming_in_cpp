#ifndef POINTERS_IN_THE_HEAP
#define POINTERS_IN_THE_HEAP
#include <iostream>
#include <iomanip>
#include <string>

// dot h files are where you declare

class SimpleCat
{
public:
    // constructor
    SimpleCat();
    // destructor
    ~SimpleCat();

private:
    // remember. only bring the declared objects etc from public to the .cpp file where you define them (their definitions)
    // so here, youre only copying the constructor and the destructor BC they are located in public
    int itsAge;
};

#endif
