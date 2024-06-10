#include "META_LastCitySetupConfigurationSaveData.h"

FMETA_LastCitySetupConfigurationSaveData::FMETA_LastCitySetupConfigurationSaveData() {
    (*this).LastPlayerTileGroupIndex = 0;
    auto& gen1750 = (*this).LastPlayerInitialTileGroup;
    gen1750.Empty();
}

