#include "IGS_FirstPersonAnimationDatabase.h"

FIGS_FirstPersonAnimationDatabase::FIGS_FirstPersonAnimationDatabase() {
    this->FirstEquipMontage = NULL;
    this->ReloadTacticalSilent = NULL;
    this->ReloadNormalSilent = NULL;
    this->CheckMagazineMontage = NULL;
    this->Melee = NULL;
    this->MeleePush = NULL;
    this->ReloadTacticalFight = NULL;
    this->ReloadNormalFight = NULL;
    this->Inspect = NULL;
    this->OneHandCalmWeaponPose = false;
    this->WeaponReloadTacticalSilent = NULL;
    this->WeaponReloadNormalSilent = NULL;
    this->CheckMagazineWeaponMontage = NULL;
    this->WeaponReloadTacticalFight = NULL;
    this->WeaponReloadNormalFight = NULL;
    this->InspectWeapon = NULL;
    this->FirstWeaponEquipMontage = NULL;
    this->MeleeWeaponMontage = NULL;
    this->MeleePushMontage = NULL;
}

