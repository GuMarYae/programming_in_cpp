#ifndef PROJECT
#define PROJECT

#include "Employee.h"

class Project
{
private:
    // datafield
    char code_;

public:
    // constructors
    Project();
    Project(char);
    // destructor
    ~Project(){};

    // functions
    void display();
    friend std::ostream &operator<<(std::ostream &, Project);
};

#endif