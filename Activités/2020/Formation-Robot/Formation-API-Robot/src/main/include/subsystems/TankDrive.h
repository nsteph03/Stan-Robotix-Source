#pragma once
#include <Drive/DifferentialDrive.h>
#include <Constants.h>
#include <SpeedController.h>
#include <SpeedControllerGroup.h>
#include <frc/Talon.h>

class TankDrive
{
    public:
    
    /* frc::Spark motorL1{kMotorL1};
  frc::Talon motorL2{kMotorL2};
  frc::Talon motorR1{kMotorR1};
  frc::Talon motorR2{kMotorR2};  
  
   frc::MecanumDrive drive{motorL1, motorL2, motorR1, motorR2};
  */

/*frc::Spark m_left{1};
        frc::Spark m_right{2};
        frc::DifferentialDrive m_drive{m_left, m_right}; */

   /* WPI_TalonSRX motorL1{kMotorLeft1};
	WPI_TalonSRX motorL2{kMotorLeft2};
	WPI_TalonSRX motorR1{kMotorRight1};
	WPI_TalonSRX motorR2{kMotorRight2}; */

    frc::Talon motorL1{kMotorLeft1};
    frc::Talon motorL2{kMotorLeft2};
    frc::Talon motorR1{kMotorRight1};
    frc::Talon motorR2{kMotorRight2};

	frc::SpeedControllerGroup leftSide{motorL1, motorL2};
	frc::SpeedControllerGroup rightSide{motorR1, motorR2};

    // frc:: Joystick Joy {1}
    //  frc:: Joystick Joy {2}
    int * mJoystickPtr;
    DifferentialDrive Drive{leftSide, rightSide};

    TankDrive();

    double getLeftJoystick();
    double getRightJoystick();
    void drive(double iLeft, double iRight);
    void stop();
};
