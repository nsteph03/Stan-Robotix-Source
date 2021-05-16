#include "subsystems\Gyroscope.h"

Gyroscope::Gyroscope() : mGyroPtr(nullptr)
{
  mGyroPtr = new frc::ADXRS450_Gyro();
}

void Gyroscope::ResetSensors() 
{
  if(mGyroPtr != nullptr)
  {
    mGyroPtr->Calibrate();
  }
}

double Gyroscope::GetAngle() 
{
  if(mGyroPtr != nullptr)
  {
    return mGyroPtr->GetAngle();
  }
  else return 0;
}
