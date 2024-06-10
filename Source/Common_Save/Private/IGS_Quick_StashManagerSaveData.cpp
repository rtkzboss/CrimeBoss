#include "IGS_Quick_StashManagerSaveData.h"

FIGS_Quick_StashManagerSaveData::FIGS_Quick_StashManagerSaveData() {
    (*this).bInited = false;
    auto& gen2378 = (*this).PrimaryWeapons;
    gen2378.Empty();
    auto& gen2379 = (*this).SecondaryWeapons;
    gen2379.Empty();
    auto& gen2380 = (*this).WeaponSkins;
    gen2380.Empty();
    auto& gen2381 = (*this).Equipment;
    gen2381.Empty();
    auto& gen2382 = (*this).Perks;
    gen2382.Empty();
    auto& gen2383 = (*this).BossCharacterSkins;
    gen2383.Empty();
}

