#include <iostream>
#include<vector>
using namespace std;

std::vector<int> whatIsBetween(int number1, int number2)
{
    int num1 = number1;
    int num2 = number2;
    int largerNum;
    int smallerNum;

    if (num1 > num2)
    {
        largerNum = num1;
        smallerNum = num2;
    }
    else
    {
        largerNum = num2;
        smallerNum = num1;

        // int temp = largerNum;
        // largerNum = smallerNum;                    
        // smallerNum = temp; 
    }
    // cout<<"L is "<<largerNum;

    std::vector<int> myVector;

    // cout << "L is " << *myArr<<endl;
    //////////////////////////////////////
    for (int i = smallerNum; i <= largerNum; i++)
    {
        myVector.push_back(i);
       
       
        return myVector;
    }
    
    
    
}

int main()
{

    int number1 = 0;
    int number2 = 0;

    cout << "enter number " << endl;
    cin >> number1;
    cin >> number2;
    whatIsBetween(number1, number2);
}