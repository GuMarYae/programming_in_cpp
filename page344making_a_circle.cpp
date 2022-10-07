#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>

class Circle
{
public:
    double radius;
    double area;
    // constructer builder, maker
    Circle(int currentRadius, int currentArea)
    {
        radius = currentRadius;
        area = currentArea;
    }
    // after this code (above)is ran, radius is denoted or changed to whatever
    // the number you entered inside of int main. and it saves it. Even if it doesnt have a
    // return inside the constructer
    int getArea(double currentRadius)
    {
        // that number that was saved for radius (or sent to line 11) is now used
        // in the next code below and calculated with the miscNumber to send a miscalculation of area
        // the reason why I added a miscalculation is bacause I wanted to see how radius
        // gets updated, saved  and reused for later
        int miscNumber = currentRadius;
        return pow(radius, 2) * 3.14159 * miscNumber;
    }
};

int main()
{
    // this is literally whenn the book says you can just change values of
    // a publuc constructer. kind of look at this part as Circle's radius and area
    // is whatever entered in the parameter which is why you can simply just write
    // circle_1.radius circle_1.area which will denote line 14
    // kind of look at it as
    // Circle circle_1(int currentRadius,int currentArea)
    // or Circle circle_1 = int currentRadius and int currentArea
    // if you made another circle object
    // itll be Circle circle_2 = int currentRadius and int currentArea as the values would be different
    // using the same recipe in Circle class

    Circle circle_1(2, 5);
    /*
    if just one parameter.......
     or  Circle circle_1(2);

     or  Circle circle_1;
                circle_1 = 2;
     or  Circle circle_1;
                circle_1(2);
    */

    // circle_1.getArea(3) is written with "()" because you're calling on the function inside the class
    std::cout << circle_1.getArea(3) << std::endl;

    circle_1.getArea(4);
    // circle_1.radius is written without "()" because youre calling on the constructor inside the lass
    std::cout << circle_1.radius << std::endl;
    std::cout << circle_1.area << std::endl;
}