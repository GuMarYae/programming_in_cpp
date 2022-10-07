#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <ctime>
#include <string>
#include <sstream>
using namespace std;

template <typename T>
T maxValue(T value1, T value2)
{
    int result;
    if (value1 > value2)
        result = value1;
    else
        result = value2;
    return result;
}
int main()
{
    cout << "Maximum between 1 and 3 is "
         << maxValue(1, 3) << endl;
   
   























   
    return 0;
}