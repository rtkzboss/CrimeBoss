#include "IGS_Quickplay_EconomyData.h"
#include "Templates/SubclassOf.h"

UIGS_Quickplay_EconomyData::UIGS_Quickplay_EconomyData() {
    this->StartingCash = 10000;
    this->ProgressResetCompensationMoney = 100000;
    this->CompleteChainMoneyRewardMultiplier = 1.00f;
    this->BaseItemCost = 10000;
    this->DigitsWithoutRounding = 3;
}

int32 UIGS_Quickplay_EconomyData::GetStartingCash() const {
    return 0;
}

float UIGS_Quickplay_EconomyData::GetRewardMultiplierForChainContract(TSubclassOf<UIGS_ChainContractID> inChainContractID) const {
    return 0.0f;
}

int32 UIGS_Quickplay_EconomyData::GetItemCostPerCategoryAndQuality(EIGS_UnlockCategory inItemCategory, EMETA_ItemQuality inItemQuality) const {
    return 0;
}

int32 UIGS_Quickplay_EconomyData::GetCharacterLevelPerQuality(EMETA_ItemQuality inQuality) {
    return 0;
}


