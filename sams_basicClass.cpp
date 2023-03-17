#include <iostream>
#include <cmath>
#include <string>

// this class has no manual constructor. I just didnt know that you could do this so I just wrote this small block of code
class Panties
{
public:
    
    std::string color;
    std::string size;
};

int main()
{

    Panties oPanty;

    oPanty.color = "Lavender";

    std::cout << oPanty.color;
}