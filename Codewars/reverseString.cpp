#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>
#include <sstream>
// using namespace std;

std::string reverse_words(const std::string &str)
{
    std::string wordRev;
    for (int i = (str.length() - 1); i >= 0; i--)
    {
        wordRev += str[i];
    }
    
    // std::cout << wordRev;
    return wordRev;
}

int main()
{
    std::string words="thank you for blessing me with Shaina, Lord. Hopefully, I wont fail. I pray that you hear me all the time ";
    //std::cout << "Enter some words, letters basically, enter a string lol! : " << std::endl;
    //getline(std::cin, words, '\n');

    // std::cout << words[0];
    std::cout << reverse_words(words);
    std::cout<<'\n';

    return 0;
}