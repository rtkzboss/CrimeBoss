#include "IGS_TPP_ModAnimationDefinition.h"

FIGS_TPP_ModAnimationDefinition::FIGS_TPP_ModAnimationDefinition() {
    this->ID = NULL;
    this->ModTypes = EIGS_ModType::Mod_Sight;
    this->GripAnimation = NULL;
    this->GripAdditiveAnimation = NULL;
    this->GripCalm = NULL;
    this->GripGunDown = NULL;
    this->ReloadNormalSilent = NULL;
    this->ReloadTacticalSilent = NULL;
    this->ReloadCheck = NULL;
    this->ReloadCheck_Weapon = NULL;
    this->ReloadNormalFight = NULL;
    this->ReloadTacticalFight = NULL;
    this->WeaponReloadNormalSilent = NULL;
    this->WeaponReloadTacticalSilent = NULL;
    this->WeaponReloadNormalFight = NULL;
    this->WeaponReloadTacticalFight = NULL;
    this->HasGripMod = false;
}

