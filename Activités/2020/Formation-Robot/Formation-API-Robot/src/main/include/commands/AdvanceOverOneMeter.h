#pragma once
#include "../subsystems/TankDrive.h"
#include "../subsystems/UltrasonicSensor.h"

class AdvanceOverOneMeter : public frc::Command {

public:

AdvanceOverOneMeter(/* ... */);
void Initialize() override;
void Execute() override;
bool IsFinished() override;
void Interrupted() override;
void End();
private:

/* ... */
};