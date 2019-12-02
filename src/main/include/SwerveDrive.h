
#pragma once

#include "SwerveModule.h"

class SwerveDrive
{
    public:
        SwerveDrive(SwerveModule *FL, SwerveModule *FR, SwerveModule *BL, SwerveModule *BR);

        void crabUpdate(float xIn, float yIn, float gyroIn); // Crab Drive (no rotation)
        
        void swerveUpdate(bool fieldOriented, float xIn, float yIn, float zIn, float gyroIn);
        

    private:
        SwerveModule *FL_Module;
        SwerveModule *FR_Module;
        SwerveModule *BL_Module;
        SwerveModule *BR_Module;

        const float PI = 3.141592653; // Pi from Mathematics
        const float DEADZONE = 0.15; // Deadzone for joystick input
        const float SPEED_SCALAR = 0.2; // Scales drive speed
};