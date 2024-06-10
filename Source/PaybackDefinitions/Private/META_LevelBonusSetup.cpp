#include "META_LevelBonusSetup.h"

FMETA_LevelBonusSetup::FMETA_LevelBonusSetup() {
    (*this).BonusType = EMETA_BonusType::PoliceInvestigation;
    auto& gen1708 = (*this).Bonuses;
    gen1708.Empty();
}

