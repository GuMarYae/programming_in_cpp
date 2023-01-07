#ifndef BICYCLE
#define BICYCLE
#include <iostream>
#include <iomanip>

class Bicycle
{
private:
    // by convention, its best to make member variables privete
    // member variables that i made with "_" at the end are my internals
    int speed_;

public:
    Bicycle();
    // getters
    int getSpeed();
    // setters. setters are usually void data types
    void setSpeed(int);
    // functions
    void pedal();
    void brake();
};

#endif