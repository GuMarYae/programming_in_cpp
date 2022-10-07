#include "Rational.h"
#include "rational.cpp"

#include <iostream>
#include <iomanip>
#include <fstream>
#include <ctime>
#include <cmath>
#include <string>
#include <vector>
#include <cstdlib>

int main()
{
    // create two rational objects with a numerator and a denominator
    Rational r1(4,3);
    Rational r2(2, 3);
    // test toString, add, sub, mult and divide
    // remember if its trying to get to a member function ("using the .") you have to have the parens.d toString()
    // to string and add
    std::cout << r1.toString() << " + " << r2.toString() << " = " << r1.add(r2).toString()<<"\n";

    // toString and sub
    std::cout << r1.toString() << " - " << r2.toString() << " = " << r1.subtract(r2).toString()<<"\n";
    // toString and mult
    std::cout << r1.toString() << " * " << r2.toString() << " = " << r1.multiply(r2).toString()<<"\n";
    // toString and div
    std::cout << r1.toString() << " / " << r2.toString() << " = " << r1.divide(r2).toString()<<"\n";

    std::cout<<r1[0]<<"\n";
    std::cout<<r1[1]<<"\n";

    std::cout<<r2[0]<<"\n";
    //operator<<(cout,r[0]);

    return 0;
}
