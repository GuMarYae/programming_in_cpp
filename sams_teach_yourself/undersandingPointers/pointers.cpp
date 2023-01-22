#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

int showNUmber(int);
/*
int main()
{
    int number = 7;
    int active;

    active = showNUmber(number);

    std::cout << active;

    return 0;
}

int showNUmber(int num)
{

    return num;
}
*/

/*
int main()
{
    char sentence[] = {'t', 'o', 'n', 'y', ' ', 'w', 'a', 's', ' ', 'h', 'e', 'r', 'e', '\0'};
    std::cout << sentence << std::endl;

    char sentence2[] = "even though this is char, this is an easier way to write an array full of characters. but, you're not using the tildes ' ' !";
    std::cout << sentence2 << std::endl;
    std::cout<<sentence2[17];
}
*/

int main()
{
    int myAge = 35;
    int *pAge = &myAge;

    std::cout << "1 myAge = " << myAge << "\n";     //value
    std::cout << "2 *pAge = " << *pAge << "\n";     //value

    std::cout << "3 pAge = " << pAge << "\n";       //address of myAge (&myAge's address)
    std::cout<< "4 &myAge = " <<&myAge<<"\n";      //address of myAge

    *pAge = 8405;                                   //changing the value of myAge
    pAge = &myAge;                                  //same as line 42 but when redeclaring it, you need not the (*) or else you would be referring to the value of myAge indirectly

    std::cout << "5 *pAge = " << *pAge << "\n";     //*pAge indirectly changed myAge
    std ::cout << "6 myAge = " << myAge << "\n";    //you see the change that *pAge made  in line 52 and 53
    std::cout << "7 pAge = " << pAge << "\n";       //address of myAge (&myAge's address) out of those changes, you see the address remains the same

    std::cout << "8 so you can indirectly change myAge by changinf the pointer value of *pAge since its pointing to the address of it (myAge)";
    std::cout << "9 \n"
              << std::endl;
    myAge = 9;
    std::cout << "10 myAge = " << myAge << "\n";
    std::cout << "11 *pAge = " << *pAge << "\n";

    std::cout << "10 and you can also change the actual value of myAge which will also be in sync when *pAge points to myAge and displays it\n moral of the story, it can change if you change the value to either";
}
