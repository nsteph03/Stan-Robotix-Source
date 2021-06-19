#pragma once
#include <Constants.h>

class TankDrive
{
    public:

    TankDrive_Joystick * mJoystickPtr;
    DifferentialDrive Drive{leftSide, rightSide};

    TankDrive();

    double GetLeftJoystick();
    double GetRightJoystick();
    void Drive(double iLeft, double iRight);
    void Stop();
};
