#include "Circle.h"
using namespace std;


#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>

// always skip the datafields. this page is for the constructors and functions
// so copy and paste them and scope them all (literally all of them) with Circle::

/*
 Circle(){};
 Circle(double){};
 double getRadius(){};
💥💥💥💥💥Note: add {} after each function copied. notice how each functionn
doesnt have them in the .h file💥💥💥💥💥
*/
// again this is the default value for area if nothing is entered as an argument
Circle::Circle()
{
    area = 173.559;
}
// this one, again (from the .h) is when an arguement is entered
Circle::Circle(double areaArg)
{
    // joint fire..  notice how double area isnt in here
    // its noticing it from the .h file
    area = areaArg;
}
double Circle::getRadius()
{
    return sqrt(area/3.14159);
}
