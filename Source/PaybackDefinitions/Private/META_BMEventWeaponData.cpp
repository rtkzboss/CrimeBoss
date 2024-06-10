#include "META_BMEventWeaponData.h"

FMETA_BMEventWeaponData::FMETA_BMEventWeaponData() {
    (*this).Cooldown = 0;
    (*this).MinAvailableCash = 0;
    (*this).NumberOfWeaponsPerEvent = 1;
    (*this).ExpirationTime = 0;
    auto& gen1729 = (*this).WeaponClassesChances;
    gen1729.Empty();
    auto& gen1730 = (*this).WeaponQualitiesChances;
    gen1730.Empty();
}

