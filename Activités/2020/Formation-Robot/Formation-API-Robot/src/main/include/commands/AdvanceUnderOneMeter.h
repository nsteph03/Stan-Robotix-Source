#pragma once
#include <subsystems / TankDrive.h>
#include <subsystems / UltrasonicSensor.h>

class AdvanceUnderOneMeter : public frc::Command {

public:

AdvanceUnderOneMeter();
void Initialize() override;
void Execute() override;
bool IsFinished() override;
void End() override;
void Interrupted() override;

};