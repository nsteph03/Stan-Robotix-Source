// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/Command.h>

#include "commands/AdvanceUnderOneMeter.h"
#include "subsystems/ExampleSubsystem.h"
#include "subsystems/UltrasonicSensor.h"
#include "subsystems/TankDrive.h"

/**
 * This class is where the bulk of the robot should be declared.  Since
 * Command-based is a "declarative" paradigm, very little robot logic should
 * actually be handled in the {@link Robot} periodic methods (other than the
 * scheduler calls).  Instead, the structure of the robot (including subsystems,
 * commands, and button mappings) should be declared here.
 */
class RobotContainer {
 public:
  RobotContainer();

  frc2::Command* GetAutonomousCommand();

  RobotContainer * getInstance();

  UltrasonicSensor & getUltrasonicSensor() { return mUltrasonicSensor; }

  TankDrive & getTankDrive() { return mTankDrive; }

 private:
  RobotContainer * mInstance;

  // The robot's subsystems and commands are defined here...
  ExampleSubsystem m_subsystem;
  ExampleCommand m_autonomousCommand;

  void ConfigureButtonBindings();
  AdvanceUnderOneMeter mAdvanceUnderOneMeter;
  UltrasonicSensor mUltrasonicSensor;
  TankDrive mTamkDrive;
};
