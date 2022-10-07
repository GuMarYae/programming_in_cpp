#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>
#include <sstream>
#include <vector>

int main()
{

    std::string filename;
    std::cout << "Enter a name: ";
    std::cin >> filename;

    std::ifstream input(filename.c_str()); // fulename is the name we just declared. we are using it with this
                                           // c_str() function from the fstream header
    if (input.fail())
    {
        std::cout << "file does not exist. Make sure you add the file type. eg: abc.txt\n";
    }
    else
    {
        std::cout << filename << " -> exists\n";
    }

    //NOTE so when I put scores, it shows as it doesnt exhit.
    //but when I type scores.txt, it shows that it exhists.
    //so its looking for the exact filename

    //SHOOOOT you dont only have to see if scores exists.. Anything in this computer, you can check for
    //you just have to know the file path and name
    //shoot I just did scratchPaper and practice2.cpp ANNND README.md

    return 0;
}