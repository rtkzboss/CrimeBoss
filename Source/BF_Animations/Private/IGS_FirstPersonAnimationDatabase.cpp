#include "IGS_FirstPersonAnimationDatabase.h"

FIGS_FirstPersonAnimationDatabase::FIGS_FirstPersonAnimationDatabase() {
    (*this).ID = nullptr;
    (*this).AttackType.Empty();
    (*this).FirstEquipMontage = nullptr;
    (*this).ReloadTacticalSilent = nullptr;
    (*this).ReloadNormalSilent = nullptr;
    (*this).CheckMagazineMontage = nullptr;
    (*this).Melee = nullptr;
    (*this).MeleePush = nullptr;
    (*this).ReloadTacticalFight = nullptr;
    (*this).ReloadNormalFight = nullptr;
    (*this).Inspect = nullptr;
    (*this).OneHandCalmWeaponPose = false;
    (*this).WeaponReloadTacticalSilent = nullptr;
    (*this).WeaponReloadNormalSilent = nullptr;
    (*this).CheckMagazineWeaponMontage = nullptr;
    (*this).WeaponReloadTacticalFight = nullptr;
    (*this).WeaponReloadNormalFight = nullptr;
    (*this).InspectWeapon = nullptr;
    (*this).FirstWeaponEquipMontage = nullptr;
    (*this).MeleeWeaponMontage = nullptr;
    (*this).MeleePushMontage = nullptr;
    (*this).ModInfo.Empty();
}

