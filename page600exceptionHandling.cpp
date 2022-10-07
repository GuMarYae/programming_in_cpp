#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <sstream>
#include <string>
#include <vector>

int main()
{
    float num1, num2;
    num1 = 7;
    num2 = 0;
    try
    {
        if (num2 == 0)
        {
                       // if number 2 is 0, throwing number 1 means to throw an exception(or exclude what you want to throw)
                       // in code, you can throw what you want but it makes since to throw num1 as the exception cause num2 fu*ked everything up in the first
                       // meaning if num2 == 0, exclude num1. Throw num1 so that it can be excluded
                       // throw num1 so that line 33 can catch it
                       // in order for the catch to catch num1, catch has to be the same type (float) as num1. trust me, i tried other types for line 33
                       // if num1 is thrown, this block automatically terminates (breaks. so you dont even need a return type neither) and goes
                       // straight to the catch block of code. 
                       //                     the value for float num1 now becomes the value for float exception
                       // if num2 is not 0, it wont throw num1 and will std::cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
            throw num1;
        } // else
                        // you actually can have an else in there. it doesnt mess up anything but
                        // since the code works either way, its better to have less words. by convention, its used without else
        std::cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
    }
    catch (float exception)
    {
        std::cout << "Exception: an integer " << exception << " cannot be divided by zero" << std::endl;
    }

    std::cout << "Execution continues ..." << std::endl;
    return 0;
}