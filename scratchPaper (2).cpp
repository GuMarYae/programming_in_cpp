#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <sstream>
#include <string>
#include <vector>

void maxNUmber(int maxN)
{
    int maximumNumber;
    for (int i = 0; i < maxN; i++)
    {
        if (maxN[i])
        {
            maximumNumber = i;
        }
        else
        {
            maximumNumber = i - 1;
        }
    }
    std::cout << maximumNumber;
}

int main()
{

    const int ARRSIZE = 7;
    int myArr[ARRSIZE] = {1, 2, 3, 15, 5, 6, 7};
    maxNUmber(myArr[ARRSIZE]);

    return 0;
}