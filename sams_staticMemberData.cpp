#include <iostream>
//.h file
class Robot
{
private:
    int age;

public:
    Robot() {}
    // That’s constructor initialization. It is the correct way to initialize
    // members in a class constructor, as it prevents the default constructor being invoked.
    Robot(int newAge) : age(newAge) { howManyRobots++; }
    virtual ~Robot() { howManyRobots--; }
    // i put that const in cause im dope

    virtual const int getAge() { return age; }
    virtual void setAge(int newAge) { age = newAge; }

    // this is the declaration of static variable
    static int howManyRobots;
};
// this is the definitin of static variable
int Robot::howManyRobots(100);

int main()
{

    const int maxRobots = (100);
    // class Robot pointer of the size of maxRobot
    Robot *gestalt[maxRobots];

    int i;
    for ( int i = 0; i < maxRobots ; i++)
        gestalt[i] = new Robot(i);
    for (i = 0; i < maxRobots; i++)
    {
        std::cout << "there are: \n";
        std::cout << Robot::howManyRobots;
        std::cout << " robots left\n";
        std::cout << "Deleting one, which is: \n";
        std::cout << gestalt[i]->getAge();
        std::cout << "years old \n";
        delete gestalt[i];
        gestalt[i] = 0;
    }
    return 0;
};