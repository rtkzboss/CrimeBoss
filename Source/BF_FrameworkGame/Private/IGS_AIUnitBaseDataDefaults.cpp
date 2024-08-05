#include "IGS_AIUnitBaseDataDefaults.h"

FIGS_AIUnitBaseDataDefaults::FIGS_AIUnitBaseDataDefaults() {
    (*this).HP = 2.800000000e+02f;
    (*this).Shield = 0.000000000e+00f;
    (*this).WeaponDamage = 1.000000000e+00f;
    (*this).MeleeDamage = 1.000000000e+00f;
    (*this).WeaponDispersion = 1.000000000e+00f;
    (*this).MovementSpeed = 1.000000000e+00f;
    (*this).CoverPreset = EIGS_CoverPreset::AICS_None;
    (*this).CoverStickiness = 5.000000000e-01f;
    (*this).ReactionIntensity = 5.000000000e-01f;
}

