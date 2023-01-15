#include <iostream>
#include <cmath>

int main()
{

    char letterA = 'A';
    char letterB = 'B';

    long long whatThe = 15;

    int tot = letterA + letterB;

    std::cout << sizeof(tot) << "\n";
    std::cout << sizeof(letterB) << "\n";

    std::cout << sizeof(long long) << "\n";
    std::cout << sizeof(whatThe);

    return 0; // return 0 meant return true this whole time..  return any number but 1 results in return false
}