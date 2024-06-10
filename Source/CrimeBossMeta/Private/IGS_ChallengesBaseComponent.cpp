#include "IGS_ChallengesBaseComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_ChallengesBaseComponent::UIGS_ChallengesBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_ChallengesBaseComponent::TryResolveCompletedChallenges(bool inNotify) {
}

void UIGS_ChallengesBaseComponent::SetChallengeInProgressValue(FGameplayTag inTag, int32 InValue, bool inNotify) {
}

void UIGS_ChallengesBaseComponent::ResetChallenges() {
}

FGameplayTagContainer UIGS_ChallengesBaseComponent::GetRequiredCompletedChallenges(FGameplayTag inTag) const {
    return FGameplayTagContainer{};
}

TMap<FGameplayTag, int32> UIGS_ChallengesBaseComponent::GetCompletedChallenges() const {
    return TMap<FGameplayTag, int32>();
}

int32 UIGS_ChallengesBaseComponent::GetCompletedChallengeCount(FGameplayTag inTag, bool inExactMatch) const {
    return 0;
}

TMap<FGameplayTag, int32> UIGS_ChallengesBaseComponent::GetChallengesInProgress() const {
    return TMap<FGameplayTag, int32>();
}

int32 UIGS_ChallengesBaseComponent::GetChallengeInProgressValue(FGameplayTag inTag, bool inExactMatch) const {
    return 0;
}

bool UIGS_ChallengesBaseComponent::CanChallengeBeProgressed(FGameplayTag inTag) const {
    return false;
}


