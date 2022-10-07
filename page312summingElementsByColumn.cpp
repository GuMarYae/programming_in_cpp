#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>
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

    // this is really i if you look at it
    for (int i_column = 0; i_column < COLUMN_SIZE; i_column++)
    {
        //remember, th inner loop iterates and also completes all the way before it starts over
        //the outer loop iterates by one but only after the inner loop completes one full cycle

        int total = 0;
        for (int i_row = 0; i_row < ROW_SIZE; i_row++)
        //since i_row is the outer loop, the only thing going through full cycles is this loop below
        //its saying 
        //column 0 has  1+11+0+1+3123+1+1+1+311231+1  //because its going down rows since i_row is inside the main loop
        //so in this case row is iterating faster than column because we set column to be in the outer loop and row in the inner loop
            total += matrix[i_row][i_column];
        std::cout << "Sum for column " << i_column << " is " << total << std::endl;
    }

    return 0;
}