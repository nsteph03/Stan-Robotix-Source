#pragma once 
#include "commands/AdvanceOverOneMeter.h"
#include "Robot.h"
#include "RobotContainer.h"
#include "UltrasonicSensor.h"
#include "TankDrive.h"

void AdvanceOverOneMeter::AdvanceOverOneMeter() override {}

void AdvanceOverOneMeter::Initialize() override
{
    RobotContainer * wRobotContainer = RobotContainer::getInstance();
    TankDrive & wTankDrive = wRobotContainer->getTankDrive()
    //...//
}

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
    int wCurrentDistance = wUltrasonicSensor.GetDistance();

    return wCurrentDistance < 1.0;
}

void AdvanceOverOneMeter::Interrupted() override {}

void  AdvanceOverOneMeter :: End() 
{
    RobotContainer * wRobotContainer = RobotContainer::getInstance();
    TankDrive & wTankDrive = wRobotContainer->getTankDrive()
    wTankDrive.Stop();
}