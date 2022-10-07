#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>

int main()
{

    const int ROW_SIZE = 10;
    const int COLUMN_SIZE = 10;
    int matrix[ROW_SIZE][COLUMN_SIZE] = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},

                                         {11, 12, 13, 14, 11, 10, 9, 8, 7, 5},
                                         {0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                                         {1, 2, 3, 4, 1, 2, 3, 2, 3, 2},
                                         {3123, 3213, 543, 423, 3, 654, 234, 534, 23, 2},
                                         {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
                                         {1, 2, 3, 34, 52, 6, 17, 48, 9, 10},
                                         {1, 2, 3, 424, 5, 26, 7, 248, 9, 10},
                                         {311231, 2, 3, 44, 5, 6, 7, 8, 9, 10},
                                         {1, 2, 3, 4, 5, 6, 7, 43248, 9, 10}};

    srand(time(0));

    for (int i = 0; i < ROW_SIZE; i++)
    {
        for (int j = 0; j < COLUMN_SIZE; j++)
        {
            int i_Row = rand() % ROW_SIZE;
            int i_Col = rand() % COLUMN_SIZE;

            double temp = matrix[i][j];
            matrix[i][j] = matrix[i_Row][i_Col];
            matrix[i_Row][i_Col] = temp;
        }
    }
    //IM GETTIN USED TO CHANGING ARRAYS IN FORLOOPS TO UNDERSTAND ENOUGH THAT THE FORLOOP ABOUT DENOTED AND SWITCHED
    //THE ACTUALL ARRAY A LITTLE TO MAKE ANOTHER FORLOOP TO SEE WHAT IT DID..   💥💥💥💥💥PROGRESS 💥💥💥💥💥
    for (int i = 0; i < ROW_SIZE; i++)
    {
        for (int j = 0; j < COLUMN_SIZE; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}