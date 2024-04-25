#include "ProgressionBaseComponent.h"

UProgressionBaseComponent::UProgressionBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_SaveGameAccount = NULL;
    this->m_SaveManager = NULL;
    this->m_ProgressionManager = NULL;
    this->m_UnlockManager = NULL;
}

void UProgressionBaseComponent::UnlockItem(const FIGS_UnlockItemInfo& inUnlockItemInfo) {
}

bool UProgressionBaseComponent::TryGetPendingUnlockedRewards(TArray<FIGS_UnlockItemInfo>& outUnlockedItems) {
    return false;
}

void UProgressionBaseComponent::SaveSelectedUnlockedRewardsHistory(const FGameplayTag& selectedReward) {
}

void UProgressionBaseComponent::SavePendingUnlockRewards(TArray<FIGS_UnlockItemInfo>& intUnlockedItems) {
}

void UProgressionBaseComponent::SavePendingLevelUps(const int32 inLevelUps) {
}

void UProgressionBaseComponent::ResetAccumulatedProgressionResult() {
}

bool UProgressionBaseComponent::ProcessNextPendingLevelUp(TArray<FIGS_UnlockItemInfo>& outUnlockedItems) {
    return false;
}

void UProgressionBaseComponent::ProcessMissionResults(FIGS_MissionResult& inMissionResult, bool inAccumulateResult) {
}

bool UProgressionBaseComponent::HasSomePendingUnlockRewards() const {
    return false;
}

bool UProgressionBaseComponent::HasSomePendingLevels() const {
    return false;
}

TArray<FGameplayTag> UProgressionBaseComponent::GetPendingUnlockRewards() const {
    return TArray<FGameplayTag>();
}

int32 UProgressionBaseComponent::GetPendingLevelsCount() const {
    return 0;
}

void UProgressionBaseComponent::ClearPendingUnlockedRewards() {
}



