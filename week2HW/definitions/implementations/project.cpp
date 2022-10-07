#include <iostream>
#include "Project.h"

// constructors
Project::Project()
{
    code_ = ' ';
}
Project::Project(char code)
{
    code_ = code;
}
// destructor
Project::~Project() {}

// functions
void Project::display()
{
    std::cout << code_;
}
std::ostream &operator<<(std::ostream &out, Project me)
{
    out << me.code_;
}
