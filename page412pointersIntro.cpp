#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>
#include <sstream>

int main()
{
    int count = 7;
    int* pCount = &count; // pointer count = the address of count

    // being that int* pCount and int *pCount are the same
    // seeing that pCount and *pCount are different botherts me. So remember
    // that *pCount points to a number and pCount is an address

    //🔥🔥UPDATE🔥🔥  by convention, put the star next to the variable type instead of the variable name
    // also, remember that (*pCount)++ is indirectly adding the value of count++ while count++ is directly adding
    // its value

    std::cout << count << "\n"   // 7 🔥🔥UPDATE🔥🔥 The value stored in count is retrieved directly from
                                 // count and indirectly through a pointer variable using *pCount
              << *pCount << "\n" // 7

              << &count << "\n" // address
              << pCount << "\n" // 🔥🔥UPDATE🔥🔥 this line displays the value stored in pCount, which is same as &count
                                // Referencing a value through a pointer is often called indirection.
                                // The syntax for referencing a value from a pointer is
                                // *pointer

              << "-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --" << std::endl;
    std::cout << ++count << "\n"
              << (*pCount)++ << "\n"
              << pCount++ << "\n";

    return 0;
}
