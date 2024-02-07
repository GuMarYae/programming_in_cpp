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
    const int numberMammals = 3;     // a strict number holder for an array
    Mammal *zoo[numberMammals] = {}; // an array for preparation
    // you can comment the above out, along with the first forloop below and put
    //  Mammal *zoo[numberMammals]={new Dog, new Dog, new Cat};

    Mammal *pMammal; // pointer

    int choice, i;
    // so, in this loop, basically its asking to create a type of mammal of a dog or a cat in an array
    // with up to 3 total

    //======================

    for (i = 0; i < numberMammals; i++)
    {
        std::cout << "Enter \n (1) dog \n or \n (2) Cat: ";
        std::cin >> choice;

        if (choice == 1)
            pMammal = new Dog;
        else
            pMammal = new Cat;
        zoo[i] = pMammal; 
       //doing  pMammal=zoo[i]; actually crashes the code

     /*⬇️⬇️⬇️⬇️
     I also changed it up to this and this loop worked
        if (choice == 1)
            zoo[i] = new Dog;
        else
            zoo[i] = new Cat;
    Then I commented out 
    zoo[i] = pMammal;
     */
    }

    //======================

    // std::cout << "the number of pmammal is: " << pMammal;
    std::cout << "\n";

    for (i = 0; i < numberMammals; i++)
    {
        zoo[i]->speak(); // the loop walks hrough the array and each objects virtual speak() member will be called/invked

        Cat *pRealCat = dynamic_cast<Cat *>(zoo[i]);//this ensures that the pbject is a cat

        if (pRealCat)//if the pointer to a cat is true then...

            pRealCat->purr();//if the pointer to a cat is true then purr
        else
            std::cout << "Oh naww, thats not a cat, bruh ";

        delete zoo[i];

        std::cout << "\n";
    }
}

// dont quite get this code perfectly, yet
