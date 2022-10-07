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
  const double PIE = 3.14159;

  // constructors dont return anything, they just initialize the datafield
  // so you dont need void or anything before them, just the class name for the constructor
  //  default constructor
  Circle()
  {
    radius = 7;
  }
  // this one will run when you add an arguement inside of int main
  // modded constructor
  // note constructors have the same name as the class itself
  Circle(double moddedRadius)
  {
    radius = moddedRadius;
  }
  // so, either circle() or circle(double moddedRadius) will run, depending on if you put in a parameter or not
  // then the get area function will run. just like all other code, everything will run from top to bottom
  double getArea()
  {

    return pow(radius, 2) * PIE;
  }
};

int main()
{
  Circle circle;
  // most people write it as
  // Circle circle(11);
  // i like it the way i did it cause im not use to the other way yet
  // if you just put 'Circle circle; itll just push out the default value for the radius of the circle which is 7
  std::cout << "Area of the radious " << circle.radius << " is " << circle.getArea(); // when you call the actual function from te class, you ,ust add the ().
                                                                                      // actual functions dont have a class name in them, thats how youll know the difference between
                                                                                      // functions and constructors inside of the class itself

  return 0;
}
