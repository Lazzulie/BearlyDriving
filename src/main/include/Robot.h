
#pragma once

#include <frc/TimedRobot.h> // WPILib Robot Base (TimedRobot)
#include "JrimmyGyro.h"

class Robot : public frc::TimedRobot {
  public:
    Robot();
    void RobotInit();

    void AutonomousInit();
    void AutonomousPeriodic();

    void TeleopInit();
    void TeleopPeriodic();

    void TestInit();
    void TestPeriodic();
  private:
    JrimmyGyro a_Gyro;
};
