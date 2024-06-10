#include "IGS_WeaponAccuracyInfoHolder.h"

FIGS_WeaponAccuracyInfoHolder::FIGS_WeaponAccuracyInfoHolder() {
    (*this).FinalHalfAngleRad = 0.000000000e+00f;
    (*this).CurrentSpreadHalfAngleRad = 0.000000000e+00f;
    (*this).BaseSpreadHalfAngleRad = 0.000000000e+00f;
    (*this).FullSpreadHalfAngleRad = 0.000000000e+00f;
    (*this).CurrentMoveMultiplier = 0.000000000e+00f;
    (*this).bIsAiming = false;
    (*this).bIsCrouching = false;
    (*this).bIsJumping = false;
}

