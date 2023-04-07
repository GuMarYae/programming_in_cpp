#include <iostream>
#include <cmath>
#include <iomanip>

// using namespace std;

int main()
{
    int number = 0, i, j;

    number = 10, i, j;

    for (i = 1; i < number; i++)
    {

        for (j = 0; j < i; j++)
        {
            std::cout << "*";
        }

        std::cout << " " << std::endl;
    }
    number = 0;
    for (i = 10; i >= number; i--)
    {

        for (j = 0; j < i; j++)
        {
            std::cout << "*";
        }

        std::cout << " " << std::endl;
    }

    // system("pause>0");
    return 0;
}