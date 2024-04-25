#include "IGS_ModAnimationDefinition.h"

FIGS_ModAnimationDefinition::FIGS_ModAnimationDefinition() {
    this->ID = NULL;
    this->ModTypes = EIGS_ModType::Mod_Sight;
    this->GripAnimation = NULL;
    this->Inspect = NULL;
    this->InspectWeapon = NULL;
    this->CheckMagazine = NULL;
    this->ReloadNormalSilent = NULL;
    this->ReloadTacticalSilent = NULL;
    this->ReloadNormalFight = NULL;
    this->ReloadTacticalFight = NULL;
    this->WeaponReloadNormalSilent = NULL;
    this->WeaponReloadTacticalSilent = NULL;
    this->WeaponReloadNormalFight = NULL;
    this->WeaponReloadTacticalFight = NULL;
    this->WeaponCheckMagazine = NULL;
    this->GripMod = false;
    this->MagazineMod = false;
}

