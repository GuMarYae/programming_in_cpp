#ifndef BOOK
#define BOOK
#include <iostream>
#include <string>

#include "Author.h"

// Declarations (making a statement)

class Book
{
private:
    // datafields
    // internals  -> _
    std::string name_;
    Author author_;
    double price_;

public:
    // constructor
    Book(std::string, Author, double);
    Book();

    // destructor
    ~Book();

    // functions
    // getters
    std::string getName() const;
    Author getAuthor() const;
    double getPrice() const;

    // setter(s)
    void setPrice(double);

    std::string print();
    
};

#endif