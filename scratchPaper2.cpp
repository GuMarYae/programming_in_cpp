#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int num = 2;
    int num2 = 3;

    num = num2;
    num2 = num;

    std::cout << num << "\n";
    std::cout << num2;

    return 0;
}