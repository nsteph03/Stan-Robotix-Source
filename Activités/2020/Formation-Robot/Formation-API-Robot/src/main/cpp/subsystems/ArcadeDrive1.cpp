#include "subsystems/ArcadeDrive1.h"


ArcadeDrive::ArcadeDrive()
{
    
}

double ArcadeDrive::getJoystick()
{
    return Joy.GetDirectionDegrees();
}

void ArcadeDrive::drive(double iLeft, double iRight)
{
    //Drive.TankDrive(iLeft, iRight,false);
}

void ArcadeDrive::stop()
{

} 