#include "IGS_CommonItemData.h"

FIGS_CommonItemData::FIGS_CommonItemData() {
    this->ItemType = EIGS_ItemType::Item_Weapon;
    this->bShouldMove = false;
    this->HitImpactID = NULL;
    this->HitImpactMass = 0.00f;
    this->Quality = EMETA_ItemQuality::None;
    this->ItemPropertyFlags = 0;
    this->MonetaryValue = 0;
    this->ModelScaleFPV = 0.00f;
    this->ModelScale3PV = 0.00f;
}

