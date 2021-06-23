#pragma once

#include <frc2/command/SubsystemBase.h>
#include <frc/Talon.h>
#include "Constants.h" 
#include <frc/Joystick.h>
#include <frc/SpeedController.h>
#include <frc/SpeedControllerGroup.h>
#include <frc/drive/DifferentialDrive.h>


class arcade_drive : public frc2::SubsystemBase {
 public:
  arcade_drive();

  double getJoystick();
  void drive(double iLeft, double iRight);
  void stop();

  frc::Talon motorL1{kMotorLeft1};
	frc::Talon motorL2{kMotorLeft2};
	frc::Talon motorR1{kMotorRight1};
	frc::Talon motorR2{kMotorRight2};

	frc::SpeedControllerGroup leftSide{motorL1, motorL2};
	frc::SpeedControllerGroup rightSide{motorR1, motorR2};

  frc::DifferentialDrive Drive{leftSide, rightSide};

 private:

  int kJoystick = 1;

  frc::Joystick Joy{kJoystick};

};
