#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <vector>
#include <string>

#include "DerivedCircle.h"
#include "derivedCircle.cpp"
#include "GeometricObject.h"
#include "geometricObject.cpp"

// generic programming
// that GeometricObject in the parameter is declaring a class/ variabke type

void displayGeometricObject(GeometricObject& shape)
{
    std::cout << shape.getColor();
}

int main()
{
    // first, make the main attrubutes for a geometric shape
    GeometricObject parent;
    parent.setColor("red");
    parent.setFilled(true);
    std::cout << parent.getColor() << std::endl;
    std::cout << parent.isFilled() << std::endl;
    std::cout << parent.toString() << std::endl;

    // so circle is getting color and filled from geometric shape. you invoke
    // it the same way as you would if it were the parent
    Circle child_c1;
    child_c1 = (11);
    // or child_c1(3) this is the actual right way
    child_c1.setColor("black");
    child_c1.setFilled(false);

    // easy invoke from parent
    std::cout << child_c1.getColor() << std::endl;
    std::cout << child_c1.isFilled() << std::endl;

    // easy invoke from itself
    // note, the both need their own separate  toString fnctions because
    // they have different names; GeometricObject and Circle Object
    std::cout << child_c1.toString() << std::endl;
    std::cout << child_c1.getRadius() << std::endl;
    std::cout << child_c1.getDiameter() << std::endl;
    std::cout << child_c1.getPerimeter() << std::endl;

    // we can make the rectangle object but its like making a circle lass twice.. as long as we can see how one child is compiled, we should be good

    // so at the end, when you make a parent class , you do the norm. To make a child or sub class after you make you normal functions for that class
    // you dont need to put anything from the parent class into the child class. you use the functions etc from the parent inside the shild class in this driverMain.cpp file

    displayGeometricObject(GeometricObject("black", true));
    displayGeometricObject(Circle(5));
    return 0;
}