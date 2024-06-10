#include "META_GangInfo.h"

FMETA_GangInfo::FMETA_GangInfo() {
    (*this).Cash = 0;
    (*this).Priority = 0;
    (*this).BaseStrength = 0;
    (*this).StrengthChangeFromTerritory = 0;
    auto& gen1735 = (*this).EffectsOnAIBossStrength;
    gen1735.Empty();
    (*this).Strategy = EMETA_GangStrategy::Normal;
    (*this).ArmyTier = EMETA_ArmyTier::Low;
    auto& gen1736 = (*this).ConditionsForAiArmyTierChange;
    gen1736.Empty();
}

