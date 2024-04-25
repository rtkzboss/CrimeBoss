#include "IGS_UnlockItemInfo.h"

FIGS_UnlockItemInfo::FIGS_UnlockItemInfo() {
    this->UnlockCategory = EIGS_UnlockCategory::UC_Weapons;
    this->Quality = EMETA_ItemQuality::None;
    this->ShowIfNotOwned = false;
}

