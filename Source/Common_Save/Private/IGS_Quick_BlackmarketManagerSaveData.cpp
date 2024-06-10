#include "IGS_Quick_BlackmarketManagerSaveData.h"

FIGS_Quick_BlackmarketManagerSaveData::FIGS_Quick_BlackmarketManagerSaveData() {
    (*this).bInited = false;
    auto& gen2391 = (*this).Heisters;
    gen2391.Empty();
    auto& gen2392 = (*this).Weapons;
    gen2392.Empty();
    auto& gen2393 = (*this).WeaponSkins;
    gen2393.Empty();
    auto& gen2394 = (*this).Equipment;
    gen2394.Empty();
    auto& gen2395 = (*this).Perks;
    gen2395.Empty();
    auto& gen2396 = (*this).BossCharacterSkins;
    gen2396.Empty();
    auto& gen2397 = (*this).UnseenUnlockedCharacterTagIDs;
    gen2397.Empty();
    auto& gen2398 = (*this).UnseenUnlockedWeaponTagIDs;
    gen2398.Empty();
    auto& gen2399 = (*this).UnseenUnlockedEquipmentTagIDs;
    gen2399.Empty();
}

