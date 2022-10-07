#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>
#include <sstream>

int main()
{
    double num = 3.14159;
    std::stringstream ss;
    // if this adds up to
    ss << num;
    std::string s = ss.str();

    std::cout << s << "this is a string of 3.14159 because if I tried to add by std::cout << s + 1, it wont compile";

    return 0;
}