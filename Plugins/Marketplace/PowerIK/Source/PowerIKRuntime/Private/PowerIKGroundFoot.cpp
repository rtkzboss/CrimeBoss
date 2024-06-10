#include "PowerIKGroundFoot.h"

FPowerIKGroundFoot::FPowerIKGroundFoot() {
    (*this).BoneName = NAME_None;
    (*this).PullWeight = 1.000000000e+00f;
    (*this).NormalizePulling = true;
    (*this).PositivePullFactor.X = 0.000000000e+00f;
    (*this).PositivePullFactor.Y = 0.000000000e+00f;
    (*this).PositivePullFactor.Z = 1.000000000e+00f;
    (*this).NegativePullFactor.X = 0.000000000e+00f;
    (*this).NegativePullFactor.Y = 0.000000000e+00f;
    (*this).NegativePullFactor.Z = 1.000000000e+00f;
}

