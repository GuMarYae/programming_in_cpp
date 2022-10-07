#include <iostream>
using namespace std;

int main()
{
    int daysTot = 700;
    int days = 0;
    string day_1 = "Monday";
    string day_2 = "Tuesday";
    string day_3 = "Wednesday";
    string day_4 = "Thursday";
    string day_5 = "Friday";
    string day_6 = "Saturday";
    string day_7 = "Sunday";
    for (int i = 1; i <= daysTot; i++)
    {
        days = ((i) % 7);

        if (days == 1)
        {
            cout << day_1 << " " << i << endl;
        }
        else if (days == 2)
        {
            cout << day_2 << " " << i << endl;
        }
        else if (days == 3)
        {
            cout << day_3 << " " << i << endl;
        }
        else if (days == 4)
        {
            cout << day_4 << " " << i << endl;
        }
        else if (days == 5)
        {
            cout << day_5 << " " << i << endl;
        }
        else if (days == 6)
        {
            cout << day_6 << " " << i << endl;
        }
        else
        {
            cout << day_7 << " " << i << endl;
        }
        // cout << days << endl;
    }
    return 0;
}