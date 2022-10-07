/*
always put #ifndef GEOMETRIC_OBJECT
           #define GEOMETRIC_OBJECT

           #endif
first
*/

#ifndef GEOMETRIC_OBJECT
#define GEOMETRIC_OBJECT
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <sstream>
#include <string>
#include <vector>

class GeometricObject
{
    // never copy and paste the private data. Just the functions and constructors
private:
    std::string color;
    bool filled;

public:
    // constructors
    GeometricObject();
    GeometricObject(std::string &color, bool isFilled);

    // setter functions
    std::string getColor();
    //💥💥💥💥💥i removed the & from string& and driverMain worked smh
    void setColor(std::string);
    // functions
    bool isFilled() const;
    /*The
    isFilled() function is the accessor for the filled data field. Since this data field is the
    bool type, the accessor function is named isFilled() by convention.
    */
    void setFilled(bool);
    std::string toString() ;
};

#endif