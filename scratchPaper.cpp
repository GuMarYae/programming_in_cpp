#include <iostream>

class Shape
{
public:
    Shape() {}
    virtual ~Shape() {}
    virtual long getArea() { return -1; } // error
    virtual long getPerim() { return -1; }
    virtual void draw() {}
};

class Circle : public Shape
{
public:
    //============================================================================================================================
    // when youu see this , its saying radius - new radius.. so radius(newRadius) is the same as radius = newRadius, in brackets
    // ill do it for the square
    //============================================================================================================================
    Circle(int newRadius) : radius(newRadius) {}
    ~Circle() {}
    long getArea() { return 3 * radius * radius; }
    long getPerim() { return 9 * radius; }
    void draw();

private:
    int radius;
    int circumference;
};

void Circle::draw()
{
    std::cout << "Circle drawing routine here !\n";
}

class Rectangle : public Shape
{
public:

//====================================================================================================================================================
//made this because when I try to compile, for the square ()lines 81-84), it throws an error saying rectangle has noo default constructor
//the original code in the txt file is correct but this is how i understand the code, by calling rectangle inside
/*
        Square::Square(int newLen)
        {
             Rectangle(newLen, newLen);
        }
        ===========vs===========
        Square::Square(int newLen) : Rectangle(newLen, newLen)
            {
            }
            I have to understand this concept better to start usng it

*/
//the constructor i added
 Rectangle(){};
//the constructor i added
 
 //====================================================================================================================================================

 
    Rectangle(int newLen, int newWidth)
    {
        length = newLen, width = (newWidth);
    }
    virtual ~Rectangle() {}
    virtual long getArea() { return length * width; }
    virtual long getPerim() { return 2 * length + 2 * width; }
    virtual int getLength() { return length; }
    virtual int getWidth() { return width; }
    virtual void draw();

private:
    int width;
    int length;
};

void Rectangle::draw()
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < width; j++)
            std::cout << "x ";

        std::cout << "\n";
    }
}

class Square : public Rectangle
{
public:
    Square(int);
    Square(int, int);
    ~Square() {}
    long getPerim() { return 4 * getLength(); }
};
//========================================================

//I believe this is the default constructor
Square::Square(int newLen)
{
    Rectangle(newLen, newLen);
}
//========================================================

Square::Square(int newLen, int newWidth) : Rectangle(newLen, newWidth)
{
    if (getLength() != getWidth())
        std::cout << "Error, not a square... a rectangle ?\n";
}

int main()
{
    int choice;
    bool fQuit = false;
    Shape *sp;

    while (1)
    {
        std::cout << "(1)Circle(2) Rectangle(3) Square(0) Quit : ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            sp = new Circle(5);
            break;
        case 2:
            sp = new Rectangle(4, 6);
            break;
        case 3:
            sp = new Square(5);
            break;
        default:
            fQuit = true;
            break;
        }
        if (fQuit)
            break;

        sp->draw();
        std::cout << "\n";
    }
    return 0;
}