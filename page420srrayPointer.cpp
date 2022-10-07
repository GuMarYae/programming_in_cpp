#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string.h>
#include <sstream>

/*
FROM PROFESSOR TANNER-REFERENCING IS TO GET THE ADDRESS
DE-REFERNCING IS KNOWING THE ADDRESS AND INSTEAD, GET THE VALUE
*/

int main()
{

    int gu = 35;

    std::cout << &gu << std::endl; // boom I got the address because the & symbol now lets get a pointer and store this address in it

    int *pGu = &gu;

    std::cout << pGu << std::endl; // boom its the same address
                                   // keep in mind that you dont have to put the star, just pGu
                                   // if you put the *, like *pGu, you are "DEREFERENCING" pGu and instead, you are gonna get the value of gu
                                   // referencing is getting the address of, dereferencing means not getting the address and going back to getting the
                                   // value instead.
                                   // in other words,*pGu == gu
    std::cout << ((*pGu) == gu);   // this returns 1 because its true. *pGu gets the value from the address of pGu which
                                   // is gu, which is 35;

    return 0;
}