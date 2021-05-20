#pragma once 
#include <frc2/command/SubsystemBase.h>
#include <frc/AnalogInput.h>


class UltrasonicSensor: public frc2::SubsystemBase
{
 private:

  constexpr double VoltToMeterDistCapt = 3.5606 * 0.3048 ;
  frc::AnalogInput* mCaptDistPtr;
  frc::AnalogInput* mCaptDist2Ptr;

 public:
  UltrasonicSensor();
  double GetDistance();

  // Using the Analog inputs to get value of voltage from sensor
};