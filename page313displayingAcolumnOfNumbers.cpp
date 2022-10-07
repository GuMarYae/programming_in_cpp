#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int matrix[4][4] =
        {{1, 2, 3, 4},
         {4, 5, 6, 7},
         {8, 9, 10, 11},
         {12, 13, 14, 15}};

    for (int i = 0; i < 4; i++)
    {
        sum += matrix[i][1];
        cout << matrix[i][1] << " "
             << "\n";
    }
    std::cout << "The sum for matrix[1][1] is " << sum << std::endl;
    return 0;
}