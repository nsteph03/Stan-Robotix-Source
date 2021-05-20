#include "subsystems\UltrasonicSensor.h"

UltrasonicSensor::UltrasonicSensor()
{
    mCaptDistPtr = new frc::AnalogInput(kCaptDist);
    mCaptDist2Ptr = new frc::AnalogInput(kCaptDist2);
}

void UltrasonicSensor::GetDistance()
{
  return mCaptDistPtr->GetVoltage()*VoltToFootDistCapt;
  return mCaptDist2Ptr->GetVoltage()*VoltToFootDistCapt;

  // return value is a double 
}