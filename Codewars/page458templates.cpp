#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>
#include <sstream>

template <typename T>       // declaring T as name.
                            // note template and typename are words in the c++ library
                            // so you have to name them them that.
                            // you can use class instead of typeneme but typename
                            // wont confuse you in the future
T numbers(T num_1, T num_2) // the lettet T is basically replacing int, double, short, long, string, char, etc with just T..
                            // T can be cny name but its good to put T foe Template
{

    return num_1 + num_2;
}

int main()
{
    int num1, num2;

    char char1, char2;
    std::string str1, str2;

    num1 = 7;
    num2 = 8;
    char1 = 't';
    char2 = 'T';
    str1 = "t";
    str2 = "T";

    std::cout << numbers(num1, num2) << std::endl;
    std::cout << numbers(char1, char2) << std::endl;
    std::cout << numbers(str1, str2) << std::endl;
    std::cout << numbers(2.9, 3.9) << std::endl; // you cant hace an integer number and a decimal number.
                                                 // its either two integers or two decimal numbers

    return 0;
}