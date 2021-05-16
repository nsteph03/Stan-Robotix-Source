#pragma once

#include <frc/ADXRS450_Gyro.h>

#include <frc2/command/SubsystemBase.h>

class Gyroscope : public frc2::SubsystemBase {
public:
  Gyroscope();
  /**
  * Will be called periodically whenever the CommandScheduler runs.
  */
  frc::ADXRS450_Gyro * mGyroPtr;

  double GetAngle();

  void ResetSensors();

  void Periodic() override;


  /**
   * Will be called periodically whenever the CommandScheduler runs during
   * simulation.
   */
  void SimulationPeriodic() override;

private:
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
};


