#include "subsystems\UltrasonicSensor.h"

UltrasonicSensor::UltrasonicSensor()
{
    mCaptDistPtr = new frc::AnalogInput(kCaptDist);
    mCaptDist2Ptr = new frc::AnalogInput(kCaptDist2);
}

double UltrasonicSensor::GetDistance()
{
  return mCaptDistPtr->GetVoltage()*VoltToMeterDistCapt;
  return mCaptDist2Ptr->GetVoltage()*VoltToMeterDistCapt;

  // return value is a double 
} 


