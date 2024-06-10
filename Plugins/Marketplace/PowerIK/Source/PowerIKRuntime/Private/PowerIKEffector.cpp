#include "PowerIKEffector.h"

FPowerIKEffector::FPowerIKEffector() {
    (*this).BoneName = NAME_None;
    (*this).Position.X = 0.000000000e+00f;
    (*this).Position.Y = 0.000000000e+00f;
    (*this).Position.Z = 0.000000000e+00f;
    (*this).PositionSpace = ES_Additive;
    (*this).Rotation.Pitch = 0.000000000e+00f;
    (*this).Rotation.Yaw = 0.000000000e+00f;
    (*this).Rotation.Roll = 0.000000000e+00f;
    (*this).RotationSpace = ES_Additive;
    (*this).PullWeight = 1.000000000e+00f;
    (*this).NormalizePulling = true;
    (*this).PositivePullFactor.X = 1.000000000e+00f;
    (*this).PositivePullFactor.Y = 1.000000000e+00f;
    (*this).PositivePullFactor.Z = 1.000000000e+00f;
    (*this).NegativePullFactor.X = 1.000000000e+00f;
    (*this).NegativePullFactor.Y = 1.000000000e+00f;
    (*this).NegativePullFactor.Z = 1.000000000e+00f;
    (*this).RotateBone = false;
    (*this).RotateLimb = false;
    (*this).DeltaSmoothSpeed = 0.000000000e+00f;
    (*this).AngularDeltaSmoothSpeed = 0.000000000e+00f;
    (*this).Smoothing.SmoothPositionOverTime = false;
    (*this).Smoothing.MaxPositionSpeed = 2.000000000e+02f;
    (*this).Smoothing.MaxPositionDistance = 1.000000000e+03f;
    (*this).Smoothing.SmoothRotationOverTime = false;
    (*this).Smoothing.MaxDegreesSpeed = 9.000000000e+01f;
    (*this).Smoothing.MaxDegreesDistance = 1.350000000e+02f;
    (*this).PoleVector.Mode = PV_None;
    (*this).PoleVector.Position.X = 0.000000000e+00f;
    (*this).PoleVector.Position.Y = 1.000000000e+02f;
    (*this).PoleVector.Position.Z = 0.000000000e+00f;
    (*this).PoleVector.BoneName = NAME_None;
    (*this).PoleVector.AngleOffset = 0.000000000e+00f;
    (*this).AffectsCenterOfGravity = false;
    (*this).Alpha = 1.000000000e+00f;
}

