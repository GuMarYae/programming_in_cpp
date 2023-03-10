#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>
#include <sstream>
#include <vector>

/*neither of these compile,.. will get back to this*/

int main()
{

    double numbers;
    long numbers2;

    if (sizeof(numbers2) == sizeof(numbers))
    {
        std::cout << sizeof(numbers2) << "\n"
                  << sizeof(numbers);
    }
    else
        std::cout << "not equal";

   

    return 0;
};
