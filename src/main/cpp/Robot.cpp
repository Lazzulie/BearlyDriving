
#include "Robot.h"

Robot::Robot():
a_Gyro(frc::I2C::kMXP)
{

}

void Robot::RobotInit() 
{
    a_Gyro.Init();
}

void Robot::AutonomousInit() 
{

}

void Robot::AutonomousPeriodic() 
{

}

void Robot::TeleopInit() 
{

}

void Robot::TeleopPeriodic() 
{

}

void Robot::TestInit() 
{

}

void Robot::TestPeriodic() 
{

}

int main() { return frc::StartRobot<Robot>(); }
