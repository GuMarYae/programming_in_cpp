#ifndef Circle_H//if not defined
#define Circle_H//then define
#include <iostream>

using namespace std;

class Circle
{
public:
    // constructor
    // we goon try somethin a lil different and make area instead of radius
    // we're gonna get the radius though, thats the new goal
    double area;
    // construct defaut circle
    Circle();
    // construct a circle after creating an object in main
    Circle(double); /*I couldve put Circle(int argumentName){}; but its better to put just
                     the variable type and put the name in the circle,cpp file
                     */
    // function. we know its a function because it doesnt have the calssName in front of it
    double getRadius();
    // so basically, this page is for creating the class Circle and all its definitions
};
#endif//end the if statement