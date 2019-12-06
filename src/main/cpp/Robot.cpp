#include "Robot.h"

#include <iostream>
#include "Story.h"

#include <frc/smartdashboard/SmartDashboard.h>

void Robot::RobotInit()
{
    Story adam_n_rand = new Story::Story();
}

void Robot::RobotPeriodic() 
{
}

void Robot::AutonomousInit() 
{
}

void Robot::AutonomousPeriodic() 
{
}

void Robot::TeleopInit() 
{
    adam_n_rand.Play();
}

void Robot::TeleopPeriodic() 
{
}

void Robot::TestPeriodic() 
{
}

#ifndef RUNNING_FRC_TESTS
int main() { return frc::StartRobot<Robot>(); }
#endif
