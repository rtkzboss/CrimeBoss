#include "IGS_TPVAnimtionDefinition.h"

FIGS_TPVAnimtionDefinition::FIGS_TPVAnimtionDefinition() {
    (*this).AttackType = EIGS_WeaponAttackType::AT_UNKNOWN;
    (*this).WeaponFireStandFront = nullptr;
    (*this).WeaponFireStandFrontInjured = nullptr;
    (*this).WeaponFire_WeaponActor = nullptr;
    (*this).IsMontageLooping = false;
    (*this).ShooterChangeMontage = nullptr;
    (*this).AttackPlayRate = 1.000000000e+00f;
}

