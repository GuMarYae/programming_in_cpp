#include <iostream>
#include "../headers/Person.h"

Person::Person()
// constructor
{
    name_ = " ";
}
Person::Person(std::string name)
{
    name_ = name;
}
void Person::display()
{
    std::cout << name_;
}
// destructor
//Person::~Person() {}

// no need for the scope operator since its a friend

//a friend function is able to use the .members privates datafields
std::ostream &operator<<(std::ostream &out, Person &me)
{
    out << me.name_;
    return out;
}
