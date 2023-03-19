#include <iostream>
#include <iomanip>

int main()
{
    // assigning objests vs initializing variables

    // assigning objests
    int number;
    number = 0;
    // initializing variables
    int number2 = 1;
    int number3(2);

    std::cout << "Overall, I use the first one by default but\n"
              << "initializing variables might be a better practice when using"
              << "constants and usng initialization lists for inheritance\n";

    std::cout << number << "\n"
              << number2 << "\n"
              << number3;

    system("pause>0");
}