#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>

const int COLUMN_SIZE = 5;
//const int ROW_SIZE = 2;//I added this here because I wanted to see
                         //if it can be global and plug it in line 12 to see if it still works
                         //it does !!!! you can even plug in a number
                         //the reason why its blank by default in the bool is because
                         //the book is stressing how you dont need anything in the row array but you MUST have something in the column array

int sum(const int array[][COLUMN_SIZE], int rowSize)//like 1 dimension arrays always specify the column size ALWAYS!!!!
{
    int total = 0;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < COLUMN_SIZE; j++)
        {
            total += array[i][j];
        }
    }
    return total;
    //another way to do this is to again out in ROW_SIZE in the parameter and also ROW_SIZE in line 18 and not even use the
    //rowSize as a parameter. but im guessing the book did it for a more serious reason or for CONVENTIONAL purposes. but that oh=ther way 
    //works too
}

int main()
{
    const int ROW_SIZE = 2;
    int myArray[ROW_SIZE][COLUMN_SIZE];
    std::cout << "Enter " << ROW_SIZE << " rows and " << COLUMN_SIZE << " columns" << std::endl;

    for (int i = 0; i < ROW_SIZE; i++)//DENOTING "i" to iterate insode of ROW_SIZE
    {
        for (int j = 0; j < COLUMN_SIZE; j++)//DENOTING "j" to iterate insode of COLUMN_SIZE
        {
            std::cin >> myArray[i][j];//denoting for both i and j ACTIVE!!!
                                      //remember, the inner loop loops from 0 to whatever the column size is so I..1  J.. 1 2 3 4
                                      //                                                                   then I..2  J.. 1 2 3 4
        }
    }
    std::cout << sum(myArray, 2);  //now, we call the sum function with all the values that we entered for i and j and send it to the funtion
                                   //sending it to the function, we just send the variable name to the function. 
                                   //so, just typing myArray, its gonna send everything thats denoted in myArray,
                                   //the 2 is ANOTHER PARAMETER WE;RE GONNA USE LATER IN THE FUNCTION 

    return 0;
}