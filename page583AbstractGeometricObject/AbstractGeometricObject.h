#ifndef ABSRTACT_GEOMETRIC_OBJECT
#define ABSRTACT_GEOMETRIC_OBJECT

#include <iostream>
#include <string>

class GeometricObject
{
private:
    // Datafields
    std::string color;
    bool filled;

protected:
    /*
    remember,only copy and paste functions and constructors to the class cpp file
    dont copy abstract functions.
    they are there for when you need to call them. Whenever you see virtual on this header
    you dont need to copy. Its already default in here
    */
    // constructors
    GeometricObject();
    GeometricObject(const std::string &color, bool filled);

public:
    // functions
    std::string getColor() const;
    void setColor(const std::string &color);

    bool isFilled() const;
    void setFilled(bool filled);
    std::string toString() const;

    // abstract pure function. You know when you have a pure abstract function when you see a fixed function, equalling 0
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
};

#endif