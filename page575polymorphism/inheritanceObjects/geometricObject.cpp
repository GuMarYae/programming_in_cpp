#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <sstream>
#include <string>
#include <vector>

#include "GeometricObject.h"
//constructors

GeometricObject::GeometricObject(){};
GeometricObject::GeometricObject(std::string &color, bool isFilled)
{
    color = "white";
    isFilled = false;
}

// setter functions
std::string GeometricObject::getColor()
{
    return color;
}
//💥💥💥💥💥i removed the & from string& and driverMain worked smh
void GeometricObject::setColor(std::string thatColor)
{
    // the color from the .h file assigns to the color from the parameter that is recieving an arguement of an actial color
    this->color = thatColor;
    // thatColor is now assigned to color. so if thatColor was red, then color(defaulted to white) would have the color in the arguement (red)
}

// functions
bool GeometricObject::isFilled() const
{
    return filled;
}

/*The
isFilled() function is the accessor for the filled data field. Since this data field is the
bool type, the accessor function is named isFilled() by convention.
*/
void GeometricObject::setFilled(bool thatFilled)
{
    this->filled = thatFilled;
}
 std:: string GeometricObject::toString() 
{
    return "GeometricObject im da 🔌 without me, yall aint sh*t";
}
