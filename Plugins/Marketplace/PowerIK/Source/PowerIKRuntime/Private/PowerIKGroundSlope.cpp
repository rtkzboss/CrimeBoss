#include "PowerIKGroundSlope.h"

FPowerIKGroundSlope::FPowerIKGroundSlope() {
    (*this).StrideDirection.X = 0.000000000e+00f;
    (*this).StrideDirection.Y = 1.000000000e+00f;
    (*this).StrideDirection.Z = 0.000000000e+00f;
    (*this).MaxGroundAngle = 4.500000000e+01f;
    (*this).MaxNormalAngularSpeed = 4.000000000e+01f;
    (*this).OrientToGround = false;
    (*this).OrientToPitch = 8.000000119e-01f;
    (*this).OrientToRoll = 1.000000015e-01f;
    (*this).ScaleStride = false;
    (*this).UphillStrideScale = 4.000000060e-01f;
    (*this).DownhillStrideScale = 2.000000030e-01f;
    (*this).SidehillStrideScale = 1.000000000e+00f;
    (*this).SidehillPushOuterFeet = 2.000000000e+01f;
    (*this).Lean = false;
    (*this).UphillLean = 3.000000119e-01f;
    (*this).DownhillLean = 5.000000000e-01f;
    (*this).SidehillLean = 0.000000000e+00f;
    (*this).CounterLean = false;
    (*this).CounterLeanBoneName = TEXT("head");
    (*this).UphillCounterLean = 8.000000119e-01f;
    (*this).DownhillCounterLean = 1.000000000e+00f;
    (*this).SidehillCounterLean = 0.000000000e+00f;
    (*this).MoveRoot = false;
    (*this).UphillVertOffset = 1.000000000e+01f;
    (*this).UphillHorizOffset = -2.000000000e+01f;
    (*this).DownhillVertOffset = 1.000000000e+01f;
    (*this).DownhillHorizOffset = 2.000000000e+01f;
    (*this).SidehillHorizOffset = -1.000000000e+01f;
    (*this).SidehillVertOffset = -1.000000000e+01f;
    (*this).RotateFootToGround = false;
    (*this).PitchFootAmount = 1.000000000e+00f;
    (*this).RollFootAmount = 6.000000238e-01f;
    (*this).FootAngleDeltaSmoothSpeed = 0.000000000e+00f;
    (*this).OffsetFeetPositions = false;
    (*this).StaticFootOffset = 4.000000000e+00f;
}

