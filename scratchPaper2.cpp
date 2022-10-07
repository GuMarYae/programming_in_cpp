#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int number = (rand() + 1) % 100;
    cout << number;

    return 0;
}