#include "IGS_ScriptableBehaviorComponent.h"

UIGS_ScriptableBehaviorComponent::UIGS_ScriptableBehaviorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_Controller = NULL;
}

void UIGS_ScriptableBehaviorComponent::SetDefendPositionBP(FVector InPosition, float inDistance) {
}

void UIGS_ScriptableBehaviorComponent::SetDefendPoint(AIGS_DefendPointBase* defendPoint) {
}

void UIGS_ScriptableBehaviorComponent::SetDefending(bool NewValue) {
}

bool UIGS_ScriptableBehaviorComponent::GetIsDefending() const {
    return false;
}

TArray<UCoverPoint*> UIGS_ScriptableBehaviorComponent::GetDefendValidCoverPoints() {
    return TArray<UCoverPoint*>();
}

FVector UIGS_ScriptableBehaviorComponent::GetDefendPos() {
    return FVector{};
}

FVector UIGS_ScriptableBehaviorComponent::GetDefendLookAt(FVector querrierLocation) const {
    return FVector{};
}

TArray<UCoverPoint*> UIGS_ScriptableBehaviorComponent::GetDefendCoverPoints() {
    return TArray<UCoverPoint*>();
}

void UIGS_ScriptableBehaviorComponent::ClearDefendPos() {
}


