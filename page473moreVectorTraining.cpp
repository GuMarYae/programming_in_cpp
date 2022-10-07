#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>
#include <sstream>
#include <vector>

int main()
{

    std::vector<int> numbers;
    // was trying to do      std::vector<int> numbers{1,2,3,4,5,6,7}; but it wouldnt work
    // a vector is a class

    numbers.push_back(7);
    numbers.push_back(2);
    std::cout << numbers[0] << std::endl;
    std::cout << numbers[1];


    return 0;
}