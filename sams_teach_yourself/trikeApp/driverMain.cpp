#include <iostream>
#include <iomanip>
#include "Bicycle.h"

// g++ -o test bicycle.cpp driverMain.cpp

int main()
{
    Bicycle bootlegDiamondback;

    /*
    the reason why you cant just set the speed is because its a private member variable
    bootlegDiamondback.speed_ = 12;
    */
    bootlegDiamondback.getSpeed();
    bootlegDiamondback.setSpeed(1);
    bootlegDiamondback.pedal();
    bootlegDiamondback.pedal();
    bootlegDiamondback.pedal();
    bootlegDiamondback.pedal();
    bootlegDiamondback.pedal();
    bootlegDiamondback.pedal();
    bootlegDiamondback.pedal();
    bootlegDiamondback.pedal();
    bootlegDiamondback.pedal();
    bootlegDiamondback.pedal();
    bootlegDiamondback.pedal();
    bootlegDiamondback.pedal();
    bootlegDiamondback.pedal();
    bootlegDiamondback.pedal();
    bootlegDiamondback.brake();
    bootlegDiamondback.brake();
    bootlegDiamondback.brake();
    bootlegDiamondback.brake();
    bootlegDiamondback.brake();
    bootlegDiamondback.brake();
    bootlegDiamondback.brake();
    bootlegDiamondback.brake();
    bootlegDiamondback.brake();
    bootlegDiamondback.brake();
    bootlegDiamondback.brake();
    bootlegDiamondback.brake();

    return false;
}