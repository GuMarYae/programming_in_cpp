#include <iostream>
#include <cmath>
#include <ctime>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>

int main()
{

    int a, b, c;

    b = 11;
    c = 51;

    a = c = b + 11;

   // going from right to left, b+11 = 22..  c now equals 22 and a now equals b (22)  a = 22

    std::cout << a;

    return 0;
}