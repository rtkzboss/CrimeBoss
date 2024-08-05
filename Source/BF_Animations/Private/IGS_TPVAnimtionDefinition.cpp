#include "IGS_TPVAnimtionDefinition.h"

FIGS_TPVAnimtionDefinition::FIGS_TPVAnimtionDefinition() {
    (*this).AttackType = EIGS_WeaponAttackType::AT_UNKNOWN;
    (*this).WeaponFireStandFront = nullptr;
    (*this).WeaponFireStandFrontInjured = nullptr;
    (*this).WeaponFire_WeaponActor = nullptr;
    (*this).WeaponReload = nullptr;
    (*this).WeaponReloadEmptyMagazine = nullptr;
    (*this).WeaponReloadCombat = nullptr;
    (*this).WeaponReloadCombatEmptyMagazine = nullptr;
    (*this).ReloadCheck = nullptr;
    (*this).ReloadCheck_Weapon = nullptr;
    (*this).WeaponReload_WeaponActor = nullptr;
    (*this).WeaponReloadEmptyMagazine_WeaponActor = nullptr;
    (*this).WeaponReloadCombat_WeaponActor = nullptr;
    (*this).WeaponReloadCombatEmptyMagazine_WeaponActor = nullptr;
    (*this).IsMontageLooping = false;
    (*this).ShooterChangeMontage = nullptr;
    (*this).AttackPlayRate = 1.000000000e+00f;
}

