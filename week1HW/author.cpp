#include <iostream>
#include <string>
#include <sstream>

#include "Author.h"
Author::Author()
{
    this->name_ = "John Smith";
    this->email_ = "_johnSmithOfCourse@gmail.com";
    this->gender_ = 'M';
}

// constructors [build]
Author::Author(std::string name, std::string email, char gender)
{
    this->name_ = name;
    this->email_ = email;
    this->gender_ = gender;
}

// destructor
Author::~Author()
{
}

//==============================
// getters (accessors)
std::string Author::getName() const
{
    return name_;
}
std::string Author::getEmail()
{
    return email_;
}
std::string Author::getGender()
{
    std::string answer;
    answer.push_back(gender_);
    return answer;
}

//==============================
// setters (mutators)
void Author::setEmail(std::string email)
{
    email_ = email;
}
// function(s)
std::string Author::print()
{
    std::stringstream ss;
    ss << "name: " << name_ << "\n"
       << "gender: "
       << "(" << gender_ << ")"
       << "\n"
       << "email: " << email_ << std::endl;
    std::string s = ss.str();
    return s;
}
