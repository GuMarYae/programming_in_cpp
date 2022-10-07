#ifndef PERSON
#define PERSON
#include <iostream>

class Person
{
private:
    // datafield
    std::string name_;

public:
    // constructor
    Person();
    Person(std::string);
    // destructor
    ~Person();

    // functions
    void display();
    friend std::ostream &operator<<(std::ostream &, Person &);
};

#endif