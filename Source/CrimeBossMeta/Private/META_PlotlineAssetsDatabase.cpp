#include "META_PlotlineAssetsDatabase.h"

UMETA_PlotlineAssetsDatabase::UMETA_PlotlineAssetsDatabase() {
}

bool UMETA_PlotlineAssetsDatabase::IsPersistent(FGameplayTag inAssetID) const {
    return false;
}

int32 UMETA_PlotlineAssetsDatabase::GetUnlockBossLevel(FGameplayTag inAssetID) const {
    return 0;
}

int32 UMETA_PlotlineAssetsDatabase::GetScore(FGameplayTag inAssetID) const {
    return 0;
}

FGameplayTag UMETA_PlotlineAssetsDatabase::GetPreviousVersion(FGameplayTag inAssetID) const {
    return FGameplayTag{};
}

FGameplayTag UMETA_PlotlineAssetsDatabase::GetNextTier(FGameplayTag inAssetID) const {
    return FGameplayTag{};
}

FText UMETA_PlotlineAssetsDatabase::GetName(FGameplayTag inAssetID) const {
    return FText::GetEmpty();
}

TSoftObjectPtr<UTexture2D> UMETA_PlotlineAssetsDatabase::GetImage(FGameplayTag inAssetID) const {
    return NULL;
}

FMETA_PlotlineAssetTableRow UMETA_PlotlineAssetsDatabase::GetEventInfo(FGameplayTag inAssetID, bool& outSuccess) const {
    return FMETA_PlotlineAssetTableRow{};
}

FText UMETA_PlotlineAssetsDatabase::GetDescription(FGameplayTag inAssetID) const {
    return FText::GetEmpty();
}

bool UMETA_PlotlineAssetsDatabase::GetCanBeLost(FGameplayTag inAssetID, bool& outSuccess) const {
    return false;
}

bool UMETA_PlotlineAssetsDatabase::GetCanBeBought(FGameplayTag inAssetID, FGameplayTag& outPriceTag) const {
    return false;
}

float UMETA_PlotlineAssetsDatabase::GetBossPointMultiplier(FGameplayTag inAssetID) const {
    return 0.0f;
}

EMETA_PlotlineAssetAvailability UMETA_PlotlineAssetsDatabase::GetAvailability(FGameplayTag inAssetID) const {
    return EMETA_PlotlineAssetAvailability::INVALID;
}

TArray<FGameplayTag> UMETA_PlotlineAssetsDatabase::GetAssetsTags() const {
    return TArray<FGameplayTag>();
}


