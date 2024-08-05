#include "IGS_AssetsPreloaderDatabase.h"
#include "IGS_AssetsPreloaderData.h"

UIGS_AssetsPreloaderDatabase::UIGS_AssetsPreloaderDatabase() {
    static ConstructorHelpers::FObjectFinder<UIGS_AssetsPreloaderData> gen0(TEXT("/Game/00_Main/Core/Tables/DA_AssetsPreloaderData.DA_AssetsPreloaderData"));
    (*this).m_AssetsPreloaderData = gen0.Object;
}

void UIGS_AssetsPreloaderDatabase::UseOrCreateAssetsPreloader(UObject* inWCO) {
}

FIGS_AssetsPreloaderTableRow UIGS_AssetsPreloaderDatabase::GetDataPreloader(UObject* inWCO, const FGameplayTag& inID, bool& outSucceeded) {
    return FIGS_AssetsPreloaderTableRow{};
}

void UIGS_AssetsPreloaderDatabase::DestroyAssetsPreloader(UObject* inWCO) {
}


