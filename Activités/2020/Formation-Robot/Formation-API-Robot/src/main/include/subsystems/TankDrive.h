#pragma once

class TankDrive
{
    private:

    constexpr int kJoystick = 0;
    constexpr int kJoystickLeft = 1;
    constexpr int kJoystickRight = 5;

    public:
    TankDrive();

    double GetLeftJoystick();
    double GetRightJoystick();
    void Drive(double iLeft, double iRight);
};
