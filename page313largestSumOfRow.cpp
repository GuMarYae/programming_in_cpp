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

    int maxRow = 0;
    int indexOfMaxRow = 0;
    // Get sum of the first row in maxRow
    for (int column = 0; column < COLUMN_SIZE; column++)
        maxRow += matrix[0][column];

    for (int row = 1; row < ROW_SIZE; row++)

    {
        int totalOfThisRow = 0;
        for (int column = 0; column < COLUMN_SIZE; column++)
            totalOfThisRow += matrix[row][column];
        if (totalOfThisRow > maxRow)
        {
            maxRow = totalOfThisRow;
            indexOfMaxRow = row;
        }
    }
    std::cout << "Row " << indexOfMaxRow + 1
              << " has the maximum sum of " << maxRow << std::endl;

    return 0;
}