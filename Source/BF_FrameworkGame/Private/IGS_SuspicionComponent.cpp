#include "IGS_SuspicionComponent.h"

UIGS_SuspicionComponent::UIGS_SuspicionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDisablePerceptionOnOffenceReported = true;
    this->NoticedWantsReactionRearmDelay = 5.00f;
    this->bOverrideTeamSide = false;
    this->TeamSideOverride = EIGS_TeamSideEnum::TS_Unknown;
}

void UIGS_SuspicionComponent::SetOwner(AIGS_GameCharacterFramework* inNewOwner) {
}

void UIGS_SuspicionComponent::SetIgnoredBy(const TArray<AIGS_GameCharacterFramework*>& inIgnoredBy) {
}

void UIGS_SuspicionComponent::SetDisablePerceptionOnOffenceReported(bool inDisablePerceptionOnOffenceReported) {
}

bool UIGS_SuspicionComponent::IsIgnoredBy(AIGS_GameCharacterFramework* inTest) const {
    return false;
}

void UIGS_SuspicionComponent::InitOffences(const FGameplayTagContainer& inOffences) {
}

void UIGS_SuspicionComponent::InitFromItem(const FIGS_CommonItemData& inItemData) {
}

AIGS_GameCharacterFramework* UIGS_SuspicionComponent::GetOwningCharacter() const {
    return NULL;
}

FGameplayTagContainer UIGS_SuspicionComponent::GetOffences() const {
    return FGameplayTagContainer{};
}

void UIGS_SuspicionComponent::EnablePerception() {
}

void UIGS_SuspicionComponent::DisablePerception() {
}


