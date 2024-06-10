#include "IGS_Quick_BlackmarketManagerSaveData.h"

FIGS_Quick_BlackmarketManagerSaveData::FIGS_Quick_BlackmarketManagerSaveData() {
    (*this).bInited = false;
    (*this).Heisters.Empty();
    (*this).Weapons.Empty();
    (*this).WeaponSkins.Empty();
    (*this).Equipment.Empty();
    (*this).Perks.Empty();
    (*this).BossCharacterSkins.Empty();
    (*this).UnseenUnlockedCharacterTagIDs.Empty();
    (*this).UnseenUnlockedWeaponTagIDs.Empty();
    (*this).UnseenUnlockedEquipmentTagIDs.Empty();
}

