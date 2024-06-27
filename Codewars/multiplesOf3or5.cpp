#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <vector>

// g++ -o test filename.cpp
// ./test

/**
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Finish the solution so that it returns the sum of all the multiples of 3 or 5 below the number passed in.

Additionally, if the number is negative, return 0.

Note: If the number is a multiple of both 3 and 5, only count it once.

Courtesy of projecteuler.net (Problem 1)
 */

int solution(int number)
{
    int result = 0;

    std::cout << "The numbers that are multiples of 3 and 5 of " << number << " are ";

    for (int i = 0; i < number; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            result += i;
            std::cout << " " << i;
        }
    }
    std::cout << std::endl;

    return (result < 0 ? 0 : result);
}

int main()
{

    std::cout << "enter a number ";
    int num;

    std::cin >> num;

    std::cout << "and the sum of the numbers that are multiples of 3 and 5 with the number " << num << " is " << solution(num);

    system("pause>0");
    return 0;
}