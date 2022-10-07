#include <iostream>
using namespace std;

// Write a program that prompts the user to enter the minutes (e.g., 1 billion),
// and displays the number of years and days for the minutes. For
// simplicity, assume a year has 365 days. Here is a sample run

int main()
{

    // prompt for minutes
    cout << "Enter a number of minutes ";
    int minutes;
    cin >> minutes;
    // convert the minutes number to years. there are 525600 minutes in one year
    int years = minutes / 525600;
    // cout << minutes << " minutes is approx " << years << " years";

    // convert the remaining minutes to days
    // since we are entering minutes, we have to figure out how many minutes in one day. its 1440
    // so for ex.  if i put 525600 minutes, 525600 / 1440 = 365 for days.
    // ---->365 % 365 = 0 which means no remainder of days.
    int days = minutes / 1440;
    int remaingDays = days % 365;
    cout << minutes << " minutes is approx " << years << " years and " << remaingDays << " days";

    return 0;
}