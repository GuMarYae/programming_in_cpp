#include <iostream>
using namespace std;

// converting feet into meters

int main()
{

    // define number in feet
    int feet = 0;
    // equate the feet into meters
    cout << "enter number in feet ";
    cin >> feet;
    // display number in meters
    double meters = (feet / 3.28);
    cout << feet << " feet in meters is " << meters;
}