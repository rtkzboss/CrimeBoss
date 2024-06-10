#include "PowerIKWalkingLimb.h"

FPowerIKWalkingLimb::FPowerIKWalkingLimb() {
    (*this).StartBone = NAME_None;
    (*this).EndBone = NAME_None;
    (*this).LimbMaxLengthMultiplier = 8.999999762e-01f;
    (*this).StepLengthMultiplier = 1.000000000e+00f;
    (*this).StepDuration = 5.000000000e-01f;
    (*this).StepHeight = 3.000000000e+01f;
    (*this).RelatedLimbs.Empty();
    (*this).RotateFootToGround = 8.999999762e-01f;
    (*this).FootCollisionRadius = 1.000000000e+01f;
}

