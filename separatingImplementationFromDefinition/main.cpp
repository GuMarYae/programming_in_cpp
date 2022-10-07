#include <iostream>
#include "circle.cpp"
#include "Circle.h"//notice how I included this in the circle.cpp and here also
                   //its because of the ifndef,define, and endif directives which prevents c++
                   //from reading circle more than just once. this is good practice 

#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>
using namespace std;

int main()
{
    Circle circle_1;
    circle_1.area = 1000000;
    std::cout << "The radius of the a circle with an area of " << circle_1.area << " is " << circle_1.getRadius() << std::endl;

    return 0;
};


