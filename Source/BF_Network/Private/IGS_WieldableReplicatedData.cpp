#include "IGS_WieldableReplicatedData.h"

FIGS_WieldableReplicatedData::FIGS_WieldableReplicatedData() {
    this->UniqueId = 0;
    this->TableIndex = 0;
    this->Slot = EIGS_WieldableSlot::S_MIN;
    this->ItemType = EIGS_ItemType::Item_Weapon;
    this->WeaponDefinition = NULL;
}

