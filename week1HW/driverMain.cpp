#include <iostream>
#include <string>


#include "Author.h"
#include "Book.h"

//instead of run
// (a) g++ -o test driverMain.cpp author.cpp book.cpp
// (a) ./test

int main()
{
    Author author("Tony", "tddanielsjr@gmail.com", 'M');
    std::cout << author.print();

    Book book_1("legends",author,100.0);
    std::cout<< book_1.print();

    

    
}