#include "IGS_AssetsPreloaderDatabase.h"

UIGS_AssetsPreloaderDatabase::UIGS_AssetsPreloaderDatabase() {
    this->m_AssetsPreloader = NULL;
}

void UIGS_AssetsPreloaderDatabase::UseOrCreateAssetsPreloader(UObject* inWCO) {
}

FIGS_AssetsPreloaderTableRow UIGS_AssetsPreloaderDatabase::GetDataPreloader(UObject* inWCO, const FGameplayTag& inID, bool& outSucceeded) {
    return FIGS_AssetsPreloaderTableRow{};
}

void UIGS_AssetsPreloaderDatabase::DestroyAssetsPreloader(UObject* inWCO) {
}


