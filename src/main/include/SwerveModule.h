
#pragma once

#include <ctre/Phoenix.h>
#include <rev/CANSparkMax.h>

class SwerveModule
{
    public:
        SwerveModule(int driveID, int turnID); // CAN IDs for the motor controllers

        void updateSpeed(float targetSpeed);
        void updateSpeedPID(float targetSpeed);

        void updateAngle(float targetAngle);
        float getAngleRaw(void);
        float getAngle(void);

        float getDistanceRaw(void); // Returns the drive motor's encoder
        float getDistanceCM(void); // Returns the scaled encoder value in centimetres
        float getDistanceIN(void); // Returns the scaled encoder value in inches
    private:
        WPI_TalonSRX a_DriveMotor; // Cross the Road Electronics' Talon Motor Controller
        rev::CANSparkMax a_TurnMotor; // REV Robotics' SPARK Max Motor Controller
};