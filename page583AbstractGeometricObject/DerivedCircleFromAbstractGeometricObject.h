#ifndef DERIVED_CIRCLE_FROM_ABSTRACT_GEOMETRIC_OBJECT
#define DERIVED_CIRCLE_FROM_ABSTRACT_GEOMETRIC_OBJECT
#include <string>
#include <iostream>

#include "AbstractGeometricObject.h"




// dont forget its inherited (born from) from GeometricObject
// its like GeometricObject reproduced a baby, asexually 🤭😂🤣

//it starts  : <- there ⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️ 43iuuh
class Circle : public GeometricObject
{
private:
    double radius;

public:
    // constructors
    Circle();
    Circle(double);
    Circle(double radius, const std::string &color, bool filled);

    // functions
    double getRadius();
    void setRadius(double);

    double getArea();
    double getPerimeter();
    double getDiameter();

    //then copy and paste the constructors and functions
    //notice we didnt need the abstract function in the header
};

#endif