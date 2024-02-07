#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>

//#include "Circle.h"
#include "circle.cpp"

int main()
{
    Circle circle_1;
    circle_1 = 15;

    std::cout << "The area of the circle of radius " << circle_1.getRadius() << " is " << circle_1.getArea() << std::endl;

    circle_1.setRadius(15);

    std::cout << "The  new modified area of the circle of radius " << circle_1.getRadius() << " is " << circle_1.getArea() << std::endl;
    std::cout << "\n"
              << std::endl;

    // std::cout<<circle_1.radius;
    // std::cout<<circle_1.radius; doesnt work anymore because its in private now.. it use t work but now, you need get snd set
    return 0;
}