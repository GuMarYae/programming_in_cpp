#ifndef DERIVED_CIRCLE
#define DERIVED_CIRCLE
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <string>
#include <sstream>
#include <vector>

// trying to remember how to route from GA
#include "../inheritanceObjects/GeometricObject.h"

class Circle : public GeometricObject
{
public:
    // Protos
    Circle();
    Circle(double);
    // the string is for the string color from the parent
    // the bool is for the filled boolean from the parent
    // they arent scoping from the private data from the parent->
    //->(not to get confused with color and filled from the .h as those arent pubic members)
    Circle(double,  std::string &, bool);

    // functions
    double getRadius();
    //we only need a set radius and not setters for perimeter/ diameter because
    //line 25, is where the radius will be. also Circle() has a default value of radius
    //we arent looking for the perimeter or diameter even though its gonna be part of some functions
    //we just need them to help us get te radius
    void setRadius(double);
    double getArea()const;
    double getPerimeter()const;
    double getDiameter()const;
    std::string toString()const;
    const double PIE();

private:
    double radius;
};

#endif