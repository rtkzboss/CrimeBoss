#include "IKProperties.h"

FIKProperties::FIKProperties() {
    (*this).bEnableIK = true;
    (*this).FootSocketName = NAME_None;
    (*this).EffectorTarget = NAME_None;
    (*this).DistanceSmoothness = 2.000000000e+02f;
    (*this).bDoFootRotation = true;
    (*this).StabilizeGroundNormal = 3.000000000e+01f;
    (*this).FootRotationSmoothness = 5.000000000e+01f;
    (*this).StabilizationCurveName = NAME_None;
    (*this).AnkleOffsetCurveName = NAME_None;
    (*this).StabilizationCurveTreshold = 9.800000191e-01f;
    (*this).StabilizationSmoothness = 3.500000000e+01f;
}

