#include <iostream>
using namespace std;

/*
(Sum the digits in an integer) Write a program that reads an integer between 0 and
1000 and adds all the digits in the integer. For example, if an integer is 932, the sum
of all its digits is 14.
 Hint: Use the % operator to extract digits, and use the / operator to remove the
extracted digit. For instance, 932 % 10 = 2 and 932 / 10 = 93.
*/

int main()
{

    // read from 0 to 1000
    int range;

    cout << "Enter a range between 1 and 1000 ";
    cin >> range;
    // make variables for each digit
    int tenthsPlace;
    int hundredthsPlace;
    int onesPlace;

    // ex 456 /100 = 4.56 but since its an int, its just 4. so thats the hundredths place
    hundredthsPlace = range / 100;

    // ex 456/10 = 45.6 but 45 since its an int.. 45 % 10 has a remainder of just 5. so thats the tenths place
    tenthsPlace = (range / 10) % 10;

    // 456 % 10..  well, 45 * 10 = 450..  456 - 450 = 6 so thats the ones place
    onesPlace = range % 10;

    // cout << " " << hundredthsPlace;

    // sum them up
    int sum = onesPlace + tenthsPlace + hundredthsPlace;

    // if number exeeds 999
    if (range > 999)
    {
        cout << " The number has to be less than 1000";
        return 0;
    }
    // display the sum
    cout << " the sum is \n" << sum<<endl;
    return 0;
}