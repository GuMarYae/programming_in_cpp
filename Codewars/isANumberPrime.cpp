#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <vector>
#include <string>

bool isPrime(int num);

int main()
{
    int number = 77;

    std::cout << isPrime(number) << std::endl;

    return 0;
}

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}