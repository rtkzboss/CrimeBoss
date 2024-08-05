#include "PowerIKPoleVector.h"

FPowerIKPoleVector::FPowerIKPoleVector() {
    (*this).Mode = PV_None;
    (*this).Position.X = 0.000000000e+00f;
    (*this).Position.Y = 1.000000000e+02f;
    (*this).Position.Z = 0.000000000e+00f;
    (*this).BoneName = NAME_None;
    (*this).AngleOffset = 0.000000000e+00f;
}

