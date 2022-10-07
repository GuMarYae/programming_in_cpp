#include <iostream>
using namespace std;

/*  int i = 1;
    int sum = 0;
    while (sum < 10000)
    {
        sum = sum + i;
        i++;
    }
    cout << sum;*/

int main()
{
    int loop = 0;
    for (int i = 0; i < 8; i++)
    {
        loop += 1;
        cout << "loop " << loop << "\n";
        for (int j = 0; j < i; j++)
        {
            cout << i * j << endl;
        }
    }
    return 0;
}
