#include <iostream>
#include "Bicycle.h"

Bicycle::Bicycle()
{
    speed_ = 0;
}
Bicycle::~Bicycle(){
    //do nothing this just frees up memory after the constructor is used
};

int Bicycle::getSpeed()
{
    return speed_;
}
// setters. setters are usually void data types
void Bicycle::setSpeed(int newSpeed)
{
    if (speed_ >= 0)
    {
        speed_ = newSpeed;
    }
}

// functions /actions
// pedal the dang bike!
void Bicycle::pedal()
{
    speed_ = speed_ + 2;
    // you can eliminate line 26 and just put setSpeed(speed_+1); for line 28
    setSpeed(speed_);

    std::cout << "peddaling speed is " << speed_ << std::endl;
}
void Bicycle::brake()
{
    setSpeed(speed_ - 1);
    std::cout << "braking is slowing the speed down of " << speed_ << std::endl;
}