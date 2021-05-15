#include <commands / AdvanceUnderOneMeter.h>
#include <Robot.h>

void AdvanceUnderOneMeter::AdvanceUnderOneMeter(/* ... */) override
{
   AddRequirements ({...});
   AddRequirements ({...});
}

void AdvanceUnderOneMeter::Initialize() override{}

void AdvanceUnderOneMeter::Execute() override
{
    /* faire avancer */
}

void AdvanceUnderOneMeter::IsFinished() override 
{
    if(/* ... */>/*1 meter*/)
    {
        /* faire arreter d avancer */
    }
}

void AdvanceUnderOneMeter::Interrupted(bool interrompu) override {}

bool  AdvanceUnderOneMeter :: End() { return false; }