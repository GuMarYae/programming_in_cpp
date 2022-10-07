#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <cmath>
#include <ctime>
#include <vector>
#include "DerivedCircle.h"

// Protos
const double Circle::PIE()
{
    return 3.14159;
};

Circle::Circle()
{
    radius = 1;
}
// when the number is a custom number
Circle::Circle(double radius)
{
    setRadius(radius);
}
// the string is for the string color from the parent
// the bool is for the filled boolean from the parent
// they arent scoping from the private data from the parent->
//->(not to get confused with color and filled from the .h as those arent pubic members)

Circle::Circle(double radius, std::string &color, bool filled)
{ //💥💥💥💥💥 shots fired... why does it throw no error when i remove the const from both . h and .cpp for &string
    setRadius(radius);
    // why doesnt setRadius = radius work
    // I know why.. because its calling the function setRadius(double) and putting radius as the argurment

    //same for these.. so, functions are being called (2) and each indevidual parameter is
    //being used simultaniously in each function itself.. kinda dope
    setColor(color);
    setFilled(filled);
}

// functions
double Circle::getRadius()
{
    return radius;
}
void Circle::setRadius(double thatRadius)
{
    //. ................B)radius is >=0           //A)⬇ means if
    this->radius = (thatRadius >= 0) ? thatRadius : 0;
    // then this->radius = thatRadius or else this->radius = 0
}
double Circle::getArea() const
{
    return (pow(radius, 2)) * 3.14159;

    // or radius * radius * PIE
}
// see this is why we dont need setters for perimeter
// because we just want the equation for it which involves radius
double Circle::getPerimeter() const
{
    return 2 * radius * 3.14159;
}
// see this is why we dont need setters for diameter
// because we just want the equation for it which involves radius
double Circle::getDiameter() const
{
    return radius * 2;
}
std::string Circle::toString() const
{
    return "Circle Object 💥💥💥💥 im the first child";
}