#include <iostream>
#include <iomanip>

/*
this is an example of if you want your cat to do something that the base class cant represent. like, all mammals cant speak but
we want the cat to purr.. so this is how you would do it.. sams p 268
*/

class Mammal
{
private:
    int age;

public:
    // constructor
    Mammal()
    {
        age = 1;
        std::cout << " Mammal constuctor";
    }
    // destructor
    ~Mammal()
    {
        std::cout << " Mammal destructor";
    }
    virtual void speak() const { std::cout << "Mammal speak\n"; }
};
//--------------------------
class Cat : public Mammal
{
public:
    Cat() { std::cout << "Cat constructor\n"; }
    ~Cat() { std::cout << "Cat destructor\n"; }

    void speak() const { std::cout << "meow\n"; }
    void purr() const { std::cout << "Rrrrrrrrrrrr\n"; }
};
//--------------------------
class Dog : public Mammal
{

public:
    Dog() { std::cout << " Dog constructor\n"; }
    ~Dog() { std::cout << " Dog constructor\n"; }

    void speak() const { std::cout << "woof woof\n"; }
};
//--------------------------
int main()
{
    const int numberMammals = 3; // a strict
    Mammal *zoo[numberMammals];  // an array for preparation
    Mammal *pMammal;             // pointer

    int choice, i;

    for (i = 0; i < numberMammals; i++)
    {
        std::cout << "Enter \n (1) dog \n or \n (2) Cat: ";
        std::cin >> choice;

        if (choice == 1)
            pMammal = new Dog;
        else
            pMammal = new Cat;
        zoo[i] = pMammal; // so, the iterator of zoo (zoo[i] will stored in the address of pMammal)
                          // then pMammal gets an address, I think
    }

    std::cout << "the number of pmam is: " << pMammal;
    std::cout << "\n";

    for (i = 0; i < numberMammals; i++)
    {
        zoo[i]->speak();

        Cat *pRealCat = dynamic_cast<Cat *>(zoo[i]);

        if (pRealCat)

            pRealCat->purr();
        else
            std::cout << "Oh naww, thats not a cat, bruh ";

        delete zoo[i];

        std::cout << "\n";
    }
}
