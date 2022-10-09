#ifndef EMPLOYEE
#define EMPLOYEE
#include "Person.h"
#include "Project.h"

class Employee : public Person
{
private:
    // datafield
    int id_;
    //Project currentProject_;

public:
    // constructor
    Employee();
    Employee(std::string, char, int);
    // destructor
    //~Employee();

    // functions
    void display();
    friend std::ostream &operator<<(std::ostream &, Employee);
};

#endif