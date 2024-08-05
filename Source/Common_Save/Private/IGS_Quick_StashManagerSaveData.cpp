#include "IGS_Quick_StashManagerSaveData.h"

FIGS_Quick_StashManagerSaveData::FIGS_Quick_StashManagerSaveData() {
    (*this).bInited = false;
    (*this).PrimaryWeapons.Empty();
    (*this).SecondaryWeapons.Empty();
    (*this).WeaponSkins.Empty();
    (*this).Equipment.Empty();
    (*this).Perks.Empty();
    (*this).BossCharacterSkins.Empty();
}

