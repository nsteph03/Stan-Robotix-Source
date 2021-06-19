#pragma once
#include <Constants.h>

class TankDrive
{
    public:

    TankDrive_Joystick * mJoystickPtr;
    DifferentialDrive Drive{leftSide, rightSide};

    TankDrive();

    double getLeftJoystick();
    double getRightJoystick();
    void drive(double iLeft, double iRight);
    void stop();
};
