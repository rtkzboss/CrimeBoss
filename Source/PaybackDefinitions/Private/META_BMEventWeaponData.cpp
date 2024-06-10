#include "META_BMEventWeaponData.h"

FMETA_BMEventWeaponData::FMETA_BMEventWeaponData() {
    (*this).Cooldown = 0;
    (*this).MinAvailableCash = 0;
    (*this).NumberOfWeaponsPerEvent = 1;
    (*this).ExpirationTime = 0;
    (*this).WeaponClassesChances.Empty();
    (*this).WeaponQualitiesChances.Empty();
}

