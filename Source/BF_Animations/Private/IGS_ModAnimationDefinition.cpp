#include "IGS_ModAnimationDefinition.h"

FIGS_ModAnimationDefinition::FIGS_ModAnimationDefinition() {
    (*this).ID = nullptr;
    (*this).ModTypes = EIGS_ModType::Mod_Sight;
    (*this).GripAnimation = nullptr;
    (*this).Inspect = nullptr;
    (*this).InspectWeapon = nullptr;
    (*this).CheckMagazine = nullptr;
    (*this).ReloadNormalSilent = nullptr;
    (*this).ReloadTacticalSilent = nullptr;
    (*this).ReloadNormalFight = nullptr;
    (*this).ReloadTacticalFight = nullptr;
    (*this).WeaponReloadNormalSilent = nullptr;
    (*this).WeaponReloadTacticalSilent = nullptr;
    (*this).WeaponReloadNormalFight = nullptr;
    (*this).WeaponReloadTacticalFight = nullptr;
    (*this).WeaponCheckMagazine = nullptr;
    (*this).LeftHandIKLocationOffset.X = 0.000000000e+00f;
    (*this).LeftHandIKLocationOffset.Y = 0.000000000e+00f;
    (*this).LeftHandIKLocationOffset.Z = 0.000000000e+00f;
    (*this).LeftHandIKRotationOffset.Pitch = 0.000000000e+00f;
    (*this).LeftHandIKRotationOffset.Yaw = 0.000000000e+00f;
    (*this).LeftHandIKRotationOffset.Roll = 0.000000000e+00f;
    (*this).GripMod = false;
    (*this).MagazineMod = false;
}

