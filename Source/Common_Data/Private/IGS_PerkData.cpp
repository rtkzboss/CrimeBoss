#include "IGS_PerkData.h"

FIGS_PerkData::FIGS_PerkData() {
    this->Quality = EMETA_ItemQuality::None;
    this->PerkType = EIGS_PerkType::PT_MetaPerk;
    this->PerkClass = EIGS_PerkClass::PC_Generic;
    this->PerkCategory = 0;
    this->PerkModeUsage = 0;
    this->ForbiddenHeistersLevel = 0;
    this->bAllowedForGeneration = false;
    this->SiblingID = NULL;
    this->PerkLevel = 0;
    this->SwapPerkIDAfterPromotion = NULL;
}

