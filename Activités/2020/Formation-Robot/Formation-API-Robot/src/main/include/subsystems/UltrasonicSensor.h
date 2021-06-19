#pragma once
#include <frc2/command/SubsystemBase.h>
#include <frc/AnalogInput.h>
#include <Constants.h>


class UltrasonicSensor: public frc2::SubsystemBase
{
 private:

  frc::AnalogInput* mCaptDistPtr;
  frc::AnalogInput* mCaptDist2Ptr;

 public:
  UltrasonicSensor();
  double getDistance1();
  double getDistance2();

  // Using the Analog inputs to get value of voltage from sensor
};