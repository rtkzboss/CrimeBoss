#include "IGS_TileItemDataStruct.h"

FIGS_TileItemDataStruct::FIGS_TileItemDataStruct() {
    this->Price = 0;
    this->IsNew = false;
    this->IsChallenge = false;
    this->HasCustomAction = false;
    this->IsEquiped = false;
    this->IsTaken = false;
    this->Rarity = EMETA_ItemQuality::None;
    this->State = EIGS_TileItemState::Locked;
    this->Category = EIGS_UnlockCategory::UC_Weapons;
}

