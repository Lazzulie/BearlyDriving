
#include "SwerveModule.h"

SwerveModule::SwerveModule(int driveID, int turnID):
a_DriveMotor(driveID),
a_TurnMotor(turnID, rev::CANSparkMaxLowLevel::MotorType::kBrushless)
{
    // Configure encoders, settings, e.t.c.
    a_DriveMotor.ConfigSelectedFeedbackSensor(QuadEncoder, 0, 0);
}

void SwerveModule::updateSpeed(float targetSpeed) 
{
    a_DriveMotor.Set(targetSpeed);
}

void SwerveModule::updateSpeedPID(float targetSpeed) {}

void SwerveModule::updateAngle(float targetAngle) {}

float SwerveModule::getAngleRaw(void) {}

float SwerveModule::getAngle(void) {}

float SwerveModule::getDistanceRaw(void) 
{
    a_DriveMotor.GetSelectedSensorPosition();
}

float SwerveModule::getDistanceCM(void) {}

float SwerveModule::getDistanceIN(void) {}