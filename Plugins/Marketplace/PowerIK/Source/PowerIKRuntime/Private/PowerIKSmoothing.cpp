#include "PowerIKSmoothing.h"

FPowerIKSmoothing::FPowerIKSmoothing() {
    (*this).SmoothPositionOverTime = false;
    (*this).MaxPositionSpeed = 2.000000000e+02f;
    (*this).MaxPositionDistance = 1.000000000e+03f;
    (*this).SmoothRotationOverTime = false;
    (*this).MaxDegreesSpeed = 9.000000000e+01f;
    (*this).MaxDegreesDistance = 1.350000000e+02f;
}

