#include "subsystems\UltrasonicSensor.h"

UltrasonicSensor::UltrasonicSensor()
{
    mCaptDistPtr = new frc::AnalogInput(kCaptDist);
    mCaptDist2Ptr = new frc::AnalogInput(kCaptDist2); //un commentaire Raph?
}

double UltrasonicSensor::GetDistance()
{
  return mCaptDistPtr->GetVoltage()*VoltToMeterDistCapt;
  return mCaptDist2Ptr->GetVoltage()*VoltToMeterDistCapt; //un commentaire Raph?

  // return value is a double 
} 


