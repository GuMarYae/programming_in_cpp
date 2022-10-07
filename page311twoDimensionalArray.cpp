#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cmath>
#include <ctime>

int main()
{
    const int ROW_SIZE = 2;
    const int COLUMN_SIZE = 2;

    int totalSum = 0;
    int rowNumber = 0;

    int matrix[ROW_SIZE][COLUMN_SIZE];

    std::cout << "Enter " << ROW_SIZE << " rows and "
              << COLUMN_SIZE << " columns: " << std::endl;

    for (int i = 0; i < ROW_SIZE; i++)
    {
        for (int j = 0; j < COLUMN_SIZE; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < ROW_SIZE; i++)
    {

        for (int j = 0; j < COLUMN_SIZE; j++)
        {
            std::cout << matrix[i][j] << " ";

            totalSum += matrix[i][j];

            rowNumber += 1;
            
        }
        
        std::cout << "row number " << rowNumber << " total is " << totalSum;
        std::cout << "\n";
    }
    std::cout << "total sum is " << totalSum;

    return 0;
}