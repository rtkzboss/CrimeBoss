#include "META_UIArmySizeConfig.h"

FMETA_UIArmySizeConfig::FMETA_UIArmySizeConfig() {
    (*this).PercentageDifferenceOneSkull = 80;
    (*this).PercentageDifferenceThreeSkulls = -25;
    (*this).PercentageDifferenceWarning = -50;
    auto& gen1755 = (*this).ArmyTierCoeffiecentConfigs;
    gen1755.Empty();
}

