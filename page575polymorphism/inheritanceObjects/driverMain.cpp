#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <vector>
#include <string>

#include "DerivedCircle.h"
#include "derivedCircle.cpp"
#include "GeometricObject.h"
#include "geometricObject.cpp"

// polymorphism means that a variable of a supertype can refer to a subtype object
// so, a supertype name is the name as the class typw you made in the header..
// like
/*
    class GeometricObject{
    public:
    GeometricObject()
}
*/
// so, it says a variable of a supertype can refer to a subtype object. if we made a class that inherited from geometricObject (like circle), then
// geometricObject can refer to it in a function in the main(){}
// page 576 "you can always pass an instance of a derived class to a parameter of its base class type" ..[now my words] with a function
// so you can pass the derived object's name (which is the same name as its class) as an arguement to a parameter that has the supertype name (not int , short, long etc) as the as the parameter type, In a function
// so
/*
    typename functionName(const supertypeName arguement)
ex...
    void     objectFunc  (const geometricObject shape)
    supertype = basetype = parent  referrint to a inherited type object in the parameter ..  it use to be something like void objectFunc (const int shape) but thats not a subtype or supertype thats a normal variabe type
*/

void displayGeometricObject(GeometricObject shape)
{
    std::cout << shape.toString();
}

int main()
{
    GeometricObject geometricObject;
    Circle circle;

    // now we call the function which is a function of GeometricObject refers to either geometricObject (line 43) or circe
    displayGeometricObject(circle);
    std::cout << "\n";
    displayGeometricObject(geometricObject);

    /*
    when you cout it says

    GeometricObject im da 🔌 without me, yall aint sh*t
    GeometricObject im da 🔌 without me, yall aint sh*t%

    in order to fix that (ansd this is also part of polymorphism) you have to enable virtual in the base/super/parent class
    example
     std:: string GeometricObject::toString()
                 {
                     return "GeometricObject im da 🔌 without me, yall aint sh*t";
                 }
     should now be
     virtual std:: string GeometricObject::toString()
    */

    // once that is in (virtual) c++ will bind the invocation with whatever object is getting reffered to via the method (.tostring()) and also refer it in the function parameter (line 36)
    // then itll say
    /*
    GeometricObject im da 🔌 without me, yall aint sh*t
    Circle Object 💥💥💥💥 im the first child
    */

    // mine didnt wrk because of probably taking out & symbols and const symbols earlier

    /*
           important      With the toString() function defined as virtual in the base class, C++ dynamically determines which toString() function to invoke at runtime. When invoking
           important      display GeometricObject(circle), a Circle object is passed to the shape parameter by reference. Since
           important      shape refers to an object of the Circle type (line 44), the toString function defined in class Circle
           important      is invoked. The capability of determining which function to invoke at runtime is known as
           important      dynamic binding.

                          To enable dynamic binding for a function, you need to do two things:
                        ■ The function must be defined virtual in the base class.
                        ■ The variable that references the object must be passed by reference or passed as a
                          pointer in the virtual function.
    */

    return 0;
}