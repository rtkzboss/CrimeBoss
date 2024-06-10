#include "IGS_ThrowableThrownData.h"

FIGS_ThrowableThrownData::FIGS_ThrowableThrownData() {
    (*this).InitialThrowSpeed = 1.000000000e+00f;
    (*this).InitialVelocity.X = 0.000000000e+00f;
    (*this).InitialVelocity.Y = 0.000000000e+00f;
    (*this).InitialVelocity.Z = 0.000000000e+00f;
    (*this).RandomThrowRotation.Pitch = 0.000000000e+00f;
    (*this).RandomThrowRotation.Yaw = 0.000000000e+00f;
    (*this).RandomThrowRotation.Roll = 0.000000000e+00f;
    (*this).bWasThrown = false;
}

