#pragma once 
#include "commands/AdvanceUnderOneMeter.h"
#include "Robot.h"
#include "RobotContainer.h"
#include "UltrasonicSensor.h"
#include "TankDrive.h"

void AdvanceUnderOneMeter::AdvanceUnderOneMeter() override {}

void AdvanceUnderOneMeter::Initialize() override
{
    RobotContainer * wRobotContainer = RobotContainer::getInstance();
    TankDrive & wTankDrive = wRobotContainer->getTankDrive()
    //...//
}

void AdvanceUnderOneMeter::Execute() override
{
    RobotContainer * wRobotContainer = RobotContainer::getInstance();
    TankDrive & wTankDrive = wRobotContainer->getTankDrive()
    wTankDrive.Drive(100,100);
}

bool AdvanceUnderOneMeter::IsFinished() override 
{
    RobotContainer * wRobotContainer = RobotContainer::getInstance();
    UltrasonicSensor & wUltrasonicSensor = wRobotContainer->getUltrasonicSensor()
    int wCurrentDistance = wUltrasonicSensor.GetDistance();

    return wCurrentDistance > 1.0;
}

void AdvanceUnderOneMeter::Interrupted() override {}

void  AdvanceUnderOneMeter :: End() 
{
    RobotContainer * wRobotContainer = RobotContainer::getInstance();
    TankDrive & wTankDrive = wRobotContainer->getTankDrive()
    wTankDrive.Stop();
}