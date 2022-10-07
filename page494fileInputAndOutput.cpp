#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <string>
#include <sstream>
#include <vector>

//💥💥💥To read data correctly, you need to know exactly how data are stored.  💥💥💥💥

int main()
{
    std::ifstream input("scores.txt"); // making a variable called input and using it through
                                       // ifstream. (opening scores with input)
                                       //[i]fstream, the "i" means input and input means to read
                                       // from it
    std::string firstName;
    char middleInitial;
    std::string lastName;
    int score;

    input >> firstName >> middleInitial >> lastName >> score;
    // we use cout while using ifstream to "DISPLAY" the information to us
    std::cout << firstName << " " << middleInitial << " " << lastName << " " << score << std::endl;
    // I literally just copied and pasted these two lines of code to get Shainas info.
    input >> firstName >> middleInitial >> lastName >> score;
    std::cout << firstName << " " << middleInitial << " " << lastName << " " << score << std::endl;

    // note.. if you put  the wrong variable type above and cout,close() the file, depending on what the type is, it can make an error
    // for ex, you can put double score. c++ no longer knows that the file was an int form from the output file we made earlier
    // it just knows its a number. So double will still work
    // it wont work if its a string score

    // if i copy and past those two lines again, it remains at the last line of code enterd from output, Shaina

    input >> firstName >> middleInitial >> lastName >> score;
    std::cout << firstName << " " << middleInitial << " " << lastName << " " << score << std::endl;

    // this part is to check if a specific file name is open
    // notice how the open function has a different arguement in it (yes that is the actual arguement) thats not a parameter. not this time
    // its a parameter when we are creating out own function and invoking the function, with a an arguement to the function we created
    // HERE, we are invoking a function, yes, but since we never made the open() function [cause its embedded in C++]
    // we're just calling it.
    // so basically, we are doing the part we do last if we were to make the actual function called open()
    // so, we are invoking open("scoreez.txt") and whoever the hell made the actuall function, makes it open the actual file, if there is one

    input.open("scoreez.txt");

    if (input.fail())
    {

        std::cout << "There is such file check ya spelling, ock!";
    }

    input.close();
    std::cout << "If you see this, we litt, Done" << std::endl;
}
