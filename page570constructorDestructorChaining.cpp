#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>
#include <sstream>
#include <vector>

/*
The program creates an instance of Faculty in line 63. Since Faculty is derived (born from)
from Employee and Employee is derived (born from) from Person, Faculty’s constructor invokes
Employee’s constructor before it performs its own task. Employee’s constructor invokes
Person’s constructor before it performs its own task
*/

// soo it reads from top to bottom, DOESNT DO SH*T UNTIL THE END OF TOP TO BOTTOM LEFT TO RIGHT
// once it reads everything,

/*
Faculty’s constructor invokes
Employee’s constructor
.......But then....
Employee’s constructor invokes
Person constructor
....and since
Since Person has no one to invoke but itself,
it says ok I invoke first (last to be called, first to be invoked)

Mind you, a destructor invokes its parent before itself
since Person, the parent of Employee just executed/invoked,
Now Employee goes. And remember Faculty went first? well since Employee got invoked, now Faculty can finally go

Now that they all are invoked and destroyed as constructors, pg570 When an object of a derived class is destroyed, the
derived class destructor is called.

since facultys constructor got destroyed just last, its destructor is called, followed by employees destructor
then finally Persons destructor is called.

Performs tasks for Person's constructor
Performs tasks for Employee's constructor
Performs tasks for Faculty's constructor
Performs tasks for Faculty's destructor
Performs tasks for Employee's destructor
Performs tasks for "hi" Person's destructor
*/

class Person
{
public:
     Person()
    // constructor
    {
        std::cout << "Performs tasks for Person's constructor\n";
    }
    // destructor
    ~Person()
    {
        std::cout << "Performs tasks for \"hi\" Person's destructor\n";
    }

private:
};

class Employee : public Person
{
public:
    Employee()
    {
        std::cout << "Performs tasks for Employee's constructor\n";
    }
    ~Employee()
    {
        std::cout << "Performs tasks for Employee's destructor\n";
    }
};

class Faculty : public Employee
{
public:
    Faculty()
    {
        std::cout << "Performs tasks for Faculty's constructor\n";
    }
    ~Faculty()
    {
        std::cout << "Performs tasks for Faculty's destructor\n";
    }
};

int main()
{

    Faculty faculty;

    // OYO
    //  std::cout << "on another note, I didnt know that you can just put something like Person person"
    //            << "and it just calls the class like a damn function.. Thats dope\n";
    // Person person;

    return 0;
}