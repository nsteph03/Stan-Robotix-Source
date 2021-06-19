#include "subsystems\TankDrive.h"
#include <math.h>
#include <SmartDashboard\SmartDashboard.h>

TankDrive::TankDrive()
{
    mJoystickPtr = new Joystick(kJoystick);
}

double TankDrive::getLeftJoystick()
{
    return -mJoystickPtr->GetRawAxis(kJoystickLeft);
}
   
double TankDrive::getRightJoystick()
{
     return -mJoystickPtr->GetRawAxis(kJoystickRight);
}

void TankDrive::drive(double iLeft, double iRight)
{
   Drive.TankDrive(iLeft, iRight,false);
}

void TankDrive::stop() 
{
    Drive.TankDrive(0, 0,false);
}