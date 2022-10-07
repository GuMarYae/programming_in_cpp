#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <cstdlib>
#include <string>

#ifndef circle_h
#define circle_h

class Circle
{
private:
    // datafield
    double radius;

public:
    // constructors
    Circle();
    Circle(double);
    // function
    double getArea();
    // get and set the circle
    double getRadius(); // I dont think that getters will have anything in their parameters most of the time
                        // youre just returning the value.
    void setRadius(double); // I think when you have setters, you might most likely use void
};
#endif