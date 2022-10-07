#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>
#include <sstream>
#include <vector>

// this was from the youtuber saldina
// prototype
int recursionFunction(int, int);

int main()
{

    int _num1 = 2;
    int _num2 = 4;
    int invoke = recursionFunction(_num1, _num2);

    std::cout << invoke; //(A.) we're invoking the function here

    return 0;
};

int recursionFunction(int num1, int num2) //(B.) we're sending _num1,num2 to the recursion params
{
    if (num1 >= num2)
    {
        return num1; // we need this so we dont make an infinite loop
    }            
                  //we're invoking the function with arguements .. we're literally invoking it.. line 26, we're just declaring it. right here were straight invoking it
    return num1 + recursionFunction(num1+1, num2); //(C.) we return num1 + ()=>{}  ..Whatever is in the function is being called within itself
                                                   // so return num1 + (1+1,11)
                                                   //           1 + rec(2, 11)// the reasn why we are still in the function b/c we are returning the same damn function that we're in!!
                                                   // so since we called it, the function runs again but with the param num1 having a higher value each time
    //           2 + rec(3,11)
    //           3 + rec(4,11) //and so on. the reason why its incrementing is because of the num1 + 1 in the param, then after the param, num1's value becomes what num1 + 1 was
}