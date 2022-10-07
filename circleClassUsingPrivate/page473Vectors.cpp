#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>
#include <sstream>

#include <vector>

// using namespace std;

int main()
{
    const int vectorSIZE = 7;
    int sum = 0;

    std::vector<int> numbers; // you dont really need this [SIZE]
                                          // you can just put numbers or numbers(7);

    /*
    i know you want to put numbers(vectorSIZE) like an array. but when you print it in the forLOOP
       std::cout << numbers[i], its gonna display 0000000.. dont know why but
       treat this like an actual vector cause thats what it is
    */

    std::vector<std::string> words;

    for (int i = 0; i < vectorSIZE; i++)
    {
        numbers.push_back(i); //..i put numbers.push_back and auto formatted and it came u with ->
                              // then came up with an error, then manually put it back to "dot notation  .push_back()"
                              // push back is adding an element

        std::cout << numbers[i] << "\n";
    }
    return 0;
}