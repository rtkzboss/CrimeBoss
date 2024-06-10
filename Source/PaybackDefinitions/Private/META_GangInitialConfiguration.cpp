#include "META_GangInitialConfiguration.h"

FMETA_GangInitialConfiguration::FMETA_GangInitialConfiguration() {
    (*this).InitialTerritoryAmount.Min = 0;
    (*this).InitialTerritoryAmount.Max = 0;
    (*this).TileGroups.Empty();
    (*this).Strategy = EMETA_GangStrategy::Normal;
    (*this).ArmyTier = EMETA_ArmyTier::Low;
}

