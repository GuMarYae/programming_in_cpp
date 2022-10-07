#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>
#include <sstream>
/*
FROM PROFESSOR TANNER-REFERENCING IS TO GET THE ADDRESS
DE-REFERNCING IS KNOWING THE ADDRESS AND INSTEAD, GET THE VALUE
*/


int *reverse(int *list, int size)
{ // remember, this for loop, you can declare more than one variabe with ","
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        int temp = list[i];
        list[i] = list[j];
        list[j] = temp;
    }
    return list;
}

void printArray(const int *list, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << list[i] << " ";
    }
}

int main()
{
    const int ARRAY_NUMBER = 10;
    int list[ARRAY_NUMBER] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 987654321};
    int *p = reverse(list, ARRAY_NUMBER);
    printArray(p, ARRAY_NUMBER);

    return 0;
}