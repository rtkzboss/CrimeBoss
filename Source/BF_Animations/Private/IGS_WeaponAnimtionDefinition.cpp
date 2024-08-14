#include "IGS_WeaponAnimtionDefinition.h"

FIGS_WeaponAnimtionDefinition::FIGS_WeaponAnimtionDefinition() {
    (*this).ShootingMontage = nullptr;
    (*this).IsMontageLooping = false;
    (*this).ShooterChangeMontage = nullptr;
    (*this).WeaponReloadTacticalSilent = nullptr;
    (*this).WeaponReloadNormalSilent = nullptr;
    (*this).CheckMagazineWeaponMontage = nullptr;
    (*this).WeaponReloadTacticalFight = nullptr;
    (*this).WeaponReloadNormalFight = nullptr;
    (*this).LadderShooting = nullptr;
    (*this).LadderShooterChange = nullptr;
}

