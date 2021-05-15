#pragma once
#include <subsystems / TankDrive.h>
#include <subsystems / UltrasonicSensor.h>

class AdvanceUnderOneMeter : public frc::Command {

public:

AdvanceUnderOneMeter(/* ... */);
void Initialize() override;
void Execute() override;
void IsFinished() override;
void Interrupted(bool interrompu) override;
bool End();
private:

/* ... */
};