#include "IGS_AIBaseSniperTierData.h"

FIGS_AIBaseSniperTierData::FIGS_AIBaseSniperTierData() {
    (*this).HitChance = 8.000000119e-01f;
    (*this).HiddenTimeInterval.Min = 3.000000000e+00f;
    (*this).HiddenTimeInterval.Max = 5.000000000e+00f;
    (*this).CompromisedRange = 5.000000000e+02f;
    (*this).WeaponVisibilityType = EIGS_WeaponVisibilityType::VT_Laser;
}

