#include "IGS_UnlockManagerComponent.h"

UIGS_UnlockManagerComponent::UIGS_UnlockManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_SaveGameAccount = NULL;
    this->m_SaveManager = NULL;
}

void UIGS_UnlockManagerComponent::UnlockUniqueCharacter(EIGS_CharacterID inCharacter, bool bMaxLeveled) {
}

void UIGS_UnlockManagerComponent::UnlockReward(FGameplayTag inRewardID) {
}

void UIGS_UnlockManagerComponent::UnlockContract(FGameplayTag inTagUnlock) {
}

bool UIGS_UnlockManagerComponent::IsUniqueCharacterUnlocked(EIGS_CharacterID inCharacter, bool bMaxLeveled) const {
    return false;
}

void UIGS_UnlockManagerComponent::IsRewardAlreadyUnlocked(FGameplayTag inRewardID, bool& outUnlocked) {
}

bool UIGS_UnlockManagerComponent::HasPendingRewards() const {
    return false;
}



TArray<FIGS_UnlockedCharacterSaveData> UIGS_UnlockManagerComponent::GetUnlockedUniqueCharacters() {
    return TArray<FIGS_UnlockedCharacterSaveData>();
}

TArray<FGameplayTag> UIGS_UnlockManagerComponent::GetUnlockedContractTags() {
    return TArray<FGameplayTag>();
}


TArray<FGameplayTag> UIGS_UnlockManagerComponent::GetPendingRewards() {
    return TArray<FGameplayTag>();
}

int32 UIGS_UnlockManagerComponent::GetAccountVariableValue(FGameplayTag inTagUnlock) {
    return 0;
}

void UIGS_UnlockManagerComponent::ConsumePendingReward(FGameplayTag inRewardID) {
}


