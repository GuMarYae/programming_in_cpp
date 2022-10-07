#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>
#include <sstream>
#include <vector>

/*neither of these compile,.. will get back to this*/

int main()
{

    std::vector<int> v{1, 9};
    std::cout << v[1];

    /* std::vector<std::vector<int> > matrix{
         {1, 2},  // remember, ROWS THEN COLUMNS
         {3, 4},  // you count down 5 rows
         {5, 6},  // in eaach row, you go from left to right, 2 columns
         {7, 8},  // so, to get the 8 its in row 4, 2nd element
         {9, 0}
         };       // so, its 3(counting from 0), and 1
                  // std::cout << matrix[3][1];
                  */

    return 0;
};
