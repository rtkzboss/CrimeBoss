#include "IGS_AttackAnimtionDefinition.h"

FIGS_AttackAnimtionDefinition::FIGS_AttackAnimtionDefinition() {
    (*this).AttackType = EIGS_WeaponAttackType::AT_UNKNOWN;
    (*this).ArmsAnimations.ShootingMontage = nullptr;
    (*this).ArmsAnimations.IsMontageLooping = false;
    (*this).ArmsAnimations.ShooterChangeMontage = nullptr;
    (*this).ArmsAnimations.ReloadTacticalSilent = nullptr;
    (*this).ArmsAnimations.ReloadNormalSilent = nullptr;
    (*this).ArmsAnimations.CheckMagazineMontage = nullptr;
    (*this).ArmsAnimations.ReloadTacticalFight = nullptr;
    (*this).ArmsAnimations.ReloadNormalFight = nullptr;
    (*this).ArmsAnimations.LadderShooting = nullptr;
    (*this).ArmsAnimations.LadderShooterChange = nullptr;
    (*this).WeaponAnimations.ShootingMontage = nullptr;
    (*this).WeaponAnimations.IsMontageLooping = false;
    (*this).WeaponAnimations.ShooterChangeMontage = nullptr;
    (*this).WeaponAnimations.WeaponReloadTacticalSilent = nullptr;
    (*this).WeaponAnimations.WeaponReloadNormalSilent = nullptr;
    (*this).WeaponAnimations.CheckMagazineWeaponMontage = nullptr;
    (*this).WeaponAnimations.WeaponReloadTacticalFight = nullptr;
    (*this).WeaponAnimations.WeaponReloadNormalFight = nullptr;
    (*this).WeaponAnimations.LadderShooting = nullptr;
    (*this).WeaponAnimations.LadderShooterChange = nullptr;
    (*this).AttackPlayRate = 1.000000000e+00f;
    (*this).ReloadPlayRate = 1.000000000e+00f;
}

