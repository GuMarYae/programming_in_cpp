#include <iostream>
#include "../headers/Employee.h"
#include "../headers/Project.h"

// constructor
// Employee::Employee()
// {
//     id_ = 0;
// }
Employee::Employee(std::string name, char pCode, int id) : Person(name)
{
    //Project code=Project(pCode);
    id_ = id;
}

// destructor
// Employee::~Employee() {}

void Employee::display()
{
    std::cout << id_;
}

// out is now ostream and me is now Employee
// the friend can see me's privates
std::ostream &operator<<(std::ostream &out, Employee me)
{
    out << me.id_;
    return out;
}