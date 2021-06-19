#pragma once 
#include "../../include/commands/AdvanceOverOneMeter.h"
#include "../../include/Robot.h"
#include "../../include/RobotContainer.h"
#include "../../include/subsystems/UltrasonicSensor.h"
#include "../../include/subsystems/TankDrive.h"

void AdvanceOverOneMeter::AdvanceOverOneMeter() override {}

void AdvanceOverOneMeter::Initialize() override {}

void AdvanceOverOneMeter::Execute() override
{
    RobotContainer * wRobotContainer = RobotContainer::getInstance();
    TankDrive & wTankDrive = wRobotContainer->getTankDrive()
    
    wTankDrive.Drive(100,100);
}

bool AdvanceOverOneMeter::IsFinished() override 
{
    RobotContainer * wRobotContainer = RobotContainer::getInstance();
    UltrasonicSensor & wUltrasonicSensor = wRobotContainer->getUltrasonicSensor()
    
    double wCurrentDistance = wUltrasonicSensor.getDistance1();

    return wCurrentDistance < 1.0;
}

void AdvanceOverOneMeter::Interrupted() override {}

void  AdvanceOverOneMeter :: End() 
{
    RobotContainer * wRobotContainer = RobotContainer::getInstance();
    TankDrive & wTankDrive = wRobotContainer->getTankDrive()
    wTankDrive.Stop();
}