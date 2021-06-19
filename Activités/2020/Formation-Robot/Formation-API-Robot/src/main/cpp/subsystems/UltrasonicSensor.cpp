#include "subsystems\UltrasonicSensor.h"

UltrasonicSensor::UltrasonicSensor()
{
    mCaptDistPtr = new frc::AnalogInput(kCaptDist);
    mCaptDist2Ptr = new frc::AnalogInput(kCaptDist2); 
}

double UltrasonicSensor::getDistance1()
{
  return mCaptDistPtr->GetVoltage()*kVoltToMeterDistCapt;
  // return value is a double 
} 

double UltrasonicSensor::getDistance2()
{
  return mCaptDist2Ptr->GetVoltage()*kVoltToMeterDistCapt;
  // return value is a double 
} 


