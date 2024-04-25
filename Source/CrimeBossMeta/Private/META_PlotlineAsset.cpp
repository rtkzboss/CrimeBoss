#include "META_PlotlineAsset.h"

UMETA_PlotlineAsset::UMETA_PlotlineAsset() {
    this->m_Price = 0;
    this->m_AdditionalPricePercent = 0.00f;
}

void UMETA_PlotlineAsset::SetInfo(UObject* inWCO, const FGameplayTag& inPlotlineAssetId) {
}

void UMETA_PlotlineAsset::SetAdditionalPricePercent(float inAdditionalPricePercent) {
}

int32 UMETA_PlotlineAsset::GetUnlockBossLevel() const {
    return 0;
}

int32 UMETA_PlotlineAsset::GetScore() const {
    return 0;
}

int32 UMETA_PlotlineAsset::GetPrice() const {
    return 0;
}

FGameplayTag UMETA_PlotlineAsset::GetPreviousVersion() const {
    return FGameplayTag{};
}

FText UMETA_PlotlineAsset::GetName() const {
    return FText::GetEmpty();
}

TSoftObjectPtr<UTexture2D> UMETA_PlotlineAsset::GetImage() const {
    return NULL;
}

FGameplayTag UMETA_PlotlineAsset::GetId() const {
    return FGameplayTag{};
}

FText UMETA_PlotlineAsset::GetDescription() const {
    return FText::GetEmpty();
}

bool UMETA_PlotlineAsset::GetCanBeLost() const {
    return false;
}

float UMETA_PlotlineAsset::GetBossPointsMultiplier() const {
    return 0.0f;
}

EMETA_PlotlineAssetAvailability UMETA_PlotlineAsset::GetAvailability() const {
    return EMETA_PlotlineAssetAvailability::INVALID;
}


