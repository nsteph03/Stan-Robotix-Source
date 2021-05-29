#include "subsystems\TankDrive.h"
#include <math.h>
#include "SmartDashboard\SmartDashboard.h"

TankDrive::TankDrive()
{
    int mJoystickPtr = new Joystick(kJoystick);//a en discuter
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

void TankDrive::Stop() 
{
    Drive.TankDrive(0, 0,false);
}