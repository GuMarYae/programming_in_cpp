#include <iostream>
// #include <iomanip>
// #include <string>

//  g++ -o test polymorphism.cpp -> ENTER
//  ./test -> ENTER

class Mammal
{

private:
protected:
    int age;

public:
    // construct
    Mammal()
    {
        age = 1;
        std::cout << "Mammal constructor ...\n";
    }
    // destroy
    ~Mammal() { std::cout << "Mammal destrucor ...\n"; }

    void move() const { std::cout << " Mammal, move one step \n"; }

    virtual void speak() const { std::cout << " Mammal Speak \n"; }
};

class Dog : public Mammal
{

private:
protected:
public:
    Dog() { std::cout << "Dog constructor \n"; }
    ~Dog() { std::cout << " Dog destrutor\n"; }
    void wagTail() { std::cout << "wagging tail\n"; }
    void speak() const { std::cout<<"Woof woof\n"; }
    void move() const { std::cout << "Dog, move 5 steps \n"; }
};
int main()
{
    //note, when you do this, you are basically invoking!! 
    //literally,  Mammal *pDog = new Dog calls the constructor and cout's like a function
    //in this case since we have a base(parent) and a subclass(child function), both constructors are invoked 
    Mammal *pDog = new Dog;

    //pDog is pointing to the address of move but the parent since pDog is of type Mammal
    //so pdog is pointing to the address of move() thats in the base mammal class
    pDog->move();

    //since mammal has virtual void speak(), pDog->speak() will point to the address of Dogs speak() function instead of the base
    //if the keyword virtual wasnt there, it would point to the address of mammal instead of dog but since its there (the virtual word)
    //mammal is saying "use their synonymous function, not mine!"
    //they are both actually called but the recommended function is invoked then used

    //page 157. you can use either one of these commands
    //pDog->speak();
    (*pDog).speak();

    return 0;
}
