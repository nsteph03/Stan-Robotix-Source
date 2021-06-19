#pragma once

#include <frc/Joystick.h>


class ArcadeDrive 
{
    public:
    ArcadeDrive();

    double getJoystick();
    void drive(double iLeft, double iRight);
    void stop();


    private:

    frc::Joystick Joy{1};

};