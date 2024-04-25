#include "META_GangInfo.h"

FMETA_GangInfo::FMETA_GangInfo() {
    this->Cash = 0;
    this->Priority = 0;
    this->BaseStrength = 0;
    this->StrengthChangeFromTerritory = 0;
    this->Strategy = EMETA_GangStrategy::Normal;
    this->ArmyTier = EMETA_ArmyTier::Low;
}

