#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <ctime>
#include <cmath>
#include <sstream>
#include <vector>

#include "AbstractGeometricObject.h"

/*
remember,only copy and paste functions and constructors to the class cpp file
*/
// I like putting my functions above constructors because the constructors seem to relyon the functions

//----------------------------------------
//  functions
std::string GeometricObject::getColor() const
{
    return color;
}
void GeometricObject::setColor(const std::string &color)
{
    // this color from the datafield = the color in the param
    this->color = color;
}
// sh*t is annoying. was wonder what the hell isfilled (convention) meant.. Look at it as getFilled. Thats what I wouldve named it
bool GeometricObject::isFilled() const
{
    return filled;
}
void GeometricObject::setFilled(bool filled)
{
    // this filled from the datafield = the filled in the param
    this->filled = filled;
}
std::string GeometricObject::toString() const
{
    return "I am the parent. THE MUH FU**N GUARDIENN 💥💥💥💥💥. IM THE ENVIRONMENT OF OBJECTS";
}
//----------------------------------------
// constructors
GeometricObject::GeometricObject()
{
    // always think datafields go here. They need a default implemtation in here like [color = white]
    color = "white";
    filled = false;
}
GeometricObject::GeometricObject(const std::string &color, bool filled)
{
    // calling the setColor function with ->color<- as the actual arguement
    setColor(color);
}
