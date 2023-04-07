#include <iostream>

class Square
{

private:
    int number;

public:
    Square() {}
    Square(int num)
    {
        number = num;
        std::cout << "constructor active. number for square is \n"
                  << number << std::endl;
    }
    ~Square() { std::cout << "self destruct active : "; }
};

int main()
{
    Square *pSquare;
    pSquare = new Square();
    std::cout << pSquare;
}

// I only did this top see if I can make a pointer. I guess it works,  yea.. I guess