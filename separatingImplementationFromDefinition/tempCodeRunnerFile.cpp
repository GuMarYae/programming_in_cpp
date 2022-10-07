
#include "circle.cpp"

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

