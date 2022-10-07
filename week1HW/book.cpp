#include <iostream>
#include <string>
#include <sstream>

#include "Book.h"

// definitions/ implementations

// constructor
Book::Book()
{
    name_ = "legendOfJonhSmith";
    author_ = Author();
    price_ = 0;
}
Book::Book(std::string name, Author author, double price)
{
    name_ = name;
    author_ = author;
    price_ = price;
}
// destructr
Book::~Book() {}

//==================================
// functions
// getters
std::string Book::getName() const
{
    return name_;
}
Author Book::getAuthor() const
{
    return author_;
}
double Book::getPrice() const
{
    return price_;
}

// setter(s)
void Book::setPrice(double price)
{
    price_ = price;
}
//==================================
// If I give the user something, I dont want them to change the information that they recieve (const)
std::string Book::print()
{
    std::stringstream ss;

    ss << name_ << " by " << author_.getName() << "(" << author_.getGender() << ")"
       << " at " << author_.getEmail();

    std::string s = ss.str();

    return s;
}