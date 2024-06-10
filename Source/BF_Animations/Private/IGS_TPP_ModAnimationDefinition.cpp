#include "IGS_TPP_ModAnimationDefinition.h"

FIGS_TPP_ModAnimationDefinition::FIGS_TPP_ModAnimationDefinition() {
    (*this).ID = nullptr;
    (*this).ModTypes = EIGS_ModType::Mod_Sight;
    (*this).GripAnimation = nullptr;
    (*this).GripAdditiveAnimation = nullptr;
    (*this).GripCalm = nullptr;
    (*this).GripGunDown = nullptr;
    (*this).ReloadNormalSilent = nullptr;
    (*this).ReloadTacticalSilent = nullptr;
    (*this).ReloadCheck = nullptr;
    (*this).ReloadCheck_Weapon = nullptr;
    (*this).ReloadNormalFight = nullptr;
    (*this).ReloadTacticalFight = nullptr;
    (*this).WeaponReloadNormalSilent = nullptr;
    (*this).WeaponReloadTacticalSilent = nullptr;
    (*this).WeaponReloadNormalFight = nullptr;
    (*this).WeaponReloadTacticalFight = nullptr;
    (*this).HasGripMod = false;
}

