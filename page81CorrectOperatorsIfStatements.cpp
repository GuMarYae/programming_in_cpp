#include <iostream>
using namespace std;

int main()
{
    bool x = false;
    if (x = true)
    {
        cout << "this is a common error it says x = false buut then in line 7 it says x is true not x is equal to true. theres a difference" << endl;

        x = false;
        if (x == true)
        {
            cout << "nothing";
        }
        else
        {
            cout << "Now, the reason why you're seeing this is because this x is an equality operator and this is the correct way";
        }
    }
}