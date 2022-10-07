#include <iostream> //input and output stream of cin and cout
#include <fstream>  //input and output of ifstream and ofstream. NOTE remember the "i" in ifstream. I for input and "o" for output
#include <cstdlib>  //for using keyword functions like rand() and srand(seed) like srand(1)
#include <cmath>    //like pow(a,b)
#include <ctime>    //to use srand(time(0)) thats the only one i used; time(0)
#include <string>   //using string. remember to use std:: before a string
#include <vector>   //to use vextors. remember to use std:: before a vector
#include <sstream>  //to use string streams.. i have to read bck on that one

int main()
{

    std::ofstream output_9162022; // im outputting a variable name called output

    output_9162022.open("scores.txt"); // now, im using the variabe name with the open function thats in the frstram header.
                                       // im making a name called scores.. sonce im using ofstream for output, if theres no names called scores.txt
                                       // it will create one. If theres already a name called scores.txt, then itll get over written after
                                       // i use the output.close() function.
    //you can also write std::ofstream output_9162022('scores.txt)
    //instead of the two lines above. 

    output_9162022 << "Tony"
                   << " "
                   << "D"
                   << " "
                   << "Daniels"
                   << " " << 90 << std::endl; // im using output (The variable name I made) as cout
                                              // the only reason why i cn do that is because its coming from ofstream
                                              // another type of stream output
    output_9162022 << "Shaina"
                   << " "
                   << "N"
                   << " "
                   << "Daniels"
                   << " " << 95 << std::endl;
    output_9162022.close();
    // every time I run this code[output_9162022.close();], whatever is in the code itself will be written to scores.txt.. freakin dope

    std::cout<<"If you see this, we litt, Done"<<std::endl;

    return 0;
}