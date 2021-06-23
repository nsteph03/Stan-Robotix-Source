#include "subsystems/arcade_drive.h"

arcade_drive::arcade_drive() = default;

double arcade_drive::getJoystick()
{
    return Joy.GetRawAxis(kJoystick);
}

void arcade_drive::drive(double iLeft, double iRight)
{
    Drive.TankDrive(iLeft, iRight,false);
}

void arcade_drive::stop()
{
    Drive.TankDrive(0, 0,false);
} 
