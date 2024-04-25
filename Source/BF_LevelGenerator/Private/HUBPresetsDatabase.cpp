#include "HUBPresetsDatabase.h"

UHUBPresetsDatabase::UHUBPresetsDatabase() {
}

FIGS_HubGeneratorPresetRow UHUBPresetsDatabase::GetHUBPresetsDataBP(const UObject* inWCO, FGameplayTag inGameplayTag, bool& outSucceeded) {
    return FIGS_HubGeneratorPresetRow{};
}

TArray<FIGS_HubGeneratorPresetRow> UHUBPresetsDatabase::GetAllHUBPresetsDataBP(const UObject* inWCO) {
    return TArray<FIGS_HubGeneratorPresetRow>();
}


