#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cmath>
#include <ctime>
#include <vector>
#include <cstdlib>

// this part is to check if a specific file name is open
// notice how the open function has a different arguement in it (yes that is the actual arguement) thats not a parameter. not this time
// its a parameter when we are creating out own function and invoking the function, with a an arguement to the function we created
// HERE, we are invoking a function, yes, but since we never made the open() function [cause its embedded in C++]
// we're just calling it.
// so basically, we are doing the part we do last if we were to make the actual function called open()
// so, we are invoking open("scoreez.txt") and whoever the hell made the actuall function, makes it open the actual file, if there is one

int main()
{

    std::ifstream input;
    input.open("scoreez.txt");

    if (input.fail())
    {

        std::cout << "There is such file check ya spelling, ock!";
    }

    return 0;
}