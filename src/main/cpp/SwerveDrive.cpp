
#include "SwerveDrive.h"

SwerveDrive::SwerveDrive(SwerveModule *FL, SwerveModule *FR, SwerveModule *BL, SwerveModule *BR):
FL_Module(FL),
FR_Module(FR),
BL_Module(BL),
BR_Module(BR)
{

}

void SwerveDrive::crabUpdate(float xIn, float yIn, float gyroIn) 
{
	// Atan2() returns the angle in radians so we convert it to degrees.
	float theta = (atan2(xIn, yIn)) * 180 / PI; // These two lines convert cartesian
	float radius = sqrt(pow(xIn, 2) + pow(yIn, 2));  // to polar coords

	if(theta <= 0) // Scaled to between 0 and 360
	{
		theta+=360;
	}

	if(radius < DEADZONE) // Dead zone
	{
		theta = 0;
		radius = 0;
	}

    radius = radius > 1.0 ? 1.0 : radius; // If radius > 1, set radius to 1.

	radius = radius * SPEED_SCALAR; // Scalar for testing

    FL_Module->updateSpeed(radius);
    FL_Module->updateAngle(theta);

    FR_Module->updateSpeed(radius);
	FR_Module->updateAngle(theta);

	BL_Module->updateSpeed(radius);
	BL_Module->updateAngle(theta);

	BR_Module->updateSpeed(radius);
	BR_Module->updateAngle(theta);
}