#include "IGS_WeaponAccuracyDefinition.h"

FIGS_WeaponAccuracyDefinition::FIGS_WeaponAccuracyDefinition() {
    (*this).HipFireSpread.X = 2.000000030e-01f;
    (*this).HipFireSpread.Y = 4.000000000e+00f;
    (*this).ADSSpread.X = 0.000000000e+00f;
    (*this).ADSSpread.Y = 2.000000000e+00f;
    (*this).SpreadFallTime = 2.500000000e-01f;
    (*this).SpreadPerShot = 5.000000000e-01f;
    (*this).ADSIdleSway = 1.000000000e+00f;
    (*this).Multipliers.CrouchMult = 8.000000119e-01f;
    (*this).Multipliers.MovementMult = 1.200000048e+00f;
    (*this).Multipliers.JumpMult = 1.500000000e+00f;
}

