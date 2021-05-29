#include "subsystems\TankDrive.h"
#include <math.h>
#include "SmartDashboard\SmartDashboard.h"

TankDrive::TankDrive()
{
    int mJoystickPtr = new Joystick(kJoystick);
}

double TankDrive::GetLeftJoystick()
{
    return -mJoystickPtr->GetRawAxis(kJoystickLeft);
}
   
double TankDrive::GetRightJoystick()
{
     return -mJoystickPtr->GetRawAxis(kJoystickRight);
}

void TankDrive::Drive(double iLeft, double iRight)
{
   Drive.TankDrive(iLeft, iRight,false);
}