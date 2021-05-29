#pragma once 
#include "commands/AdvanceUnderOneMeter.h"
#include "Robot.h"

void AdvanceUnderOneMeter::AdvanceUnderOneMeter() override {}

void AdvanceUnderOneMeter::Initialize() override
{
    // mMotor->start();
}

void AdvanceUnderOneMeter::Execute() override
{
    /* faire avancer */
    // mMotor->move();
}

bool AdvanceUnderOneMeter::IsFinished() override 
{
    int wCurrentDistance = 0; // mUltraSonicPtr->getDistanceInMeter()

    return wCurrentDistance > 1.0;
}

void AdvanceUnderOneMeter::Interrupted() override {}

void  AdvanceUnderOneMeter :: End() 
{
    // mMotor->stop();
}