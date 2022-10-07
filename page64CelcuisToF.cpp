#include <iostream>
using namespace std;

int main()
{
    // ask user to enter number in celcius
    cout << "enter number in celcius! ";
    double celcius;
    cin >> celcius;
    // cout << celcius << "yo";

    // convert celcius to fereinheight
    //
    double conversionFromCtoF = ((9.0 / 5.0) * celcius) + 32;

    // display number conversion
    cout << celcius << " conversion number is " << conversionFromCtoF << " in fahrenheit";
}