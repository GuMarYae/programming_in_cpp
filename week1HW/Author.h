#ifndef AUTHOR
#define AUTHOR
#include <iostream>
#include <string>

#include <cmath>

class Author
{
    // by convention, "datafield_" means internal (for a class)
private:
    std::string name_;
    std::string email_;
    char gender_;

public:
    Author();
    Author(std::string, std::string, char);

    //destructor
    ~Author();

    std::string getName() const;
    std::string getEmail();
    void setEmail(std::string);
    std::string getGender();
    std::string print();
};

#endif