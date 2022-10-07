#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>

#include "Circle.h"

// constructors
Circle::Circle() { radius = 0; } // default value. if nothing entered, radius is nothin
Circle::Circle(double newRadius)
{
    radius = newRadius;
};
// function
double Circle::getArea()
{
    return pow(radius, 2) * 3.14159;
}
// get the radius
double Circle::getRadius()
{
    return radius;
}
// the setter to possibly modify, radius
void Circle::setRadius(double newRadius)
{
    if (radius >= 0)
    {
        radius = newRadius;
    }
    else
    {
        radius = 0;
    }
}