#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int guessingNUmber;
    int luckyNumber = 7;

    // cout << "Guess the lucky number\n";
    // cin >> guessingNUmber;

    while (guessingNUmber != luckyNumber)
    {
        cout << "Guess the lucky number\n";
        cin >> guessingNUmber;
        cout << "Thats not the lucky number\n";
        cin >> guessingNUmber;
    }

    cout << "Thats the number. But notice how if you were wrong, the code will just be looping from line 13 to ine 17" << endl;
    cout << "\n\t\n\t "
         << " I would suggest to do write the cout before the while loop since its simpler. This was simply saying that its the correct number\n"
         <<"ORRr oooor  simply, do what the book suggests.\n 1 write the whole code, being that everything s true\n 2 slap it in a while loop and put while(true)\n 3 after seeing that it works change true to while (loop-continuation-condition)";

    return 0;
}