#include "IGS_PlayerSuspicionComponent.h"

UIGS_PlayerSuspicionComponent::UIGS_PlayerSuspicionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UIGS_PlayerSuspicionComponent::ShouldFootstepsBeDetectable() const {
    return false;
}

void UIGS_PlayerSuspicionComponent::OnMovementModeChanged(ACharacter* inCharacter, TEnumAsByte<EMovementMode> inPrevMovementMode, uint8 inPreviousCustomMode) {
}

bool UIGS_PlayerSuspicionComponent::HasAnyOffence() const {
    return false;
}

EIGS_RoomSecurityType UIGS_PlayerSuspicionComponent::GetRoomSecurityType() const {
    return EIGS_RoomSecurityType::Outside;
}

FGameplayTag UIGS_PlayerSuspicionComponent::GetCurrentWieldableOffences() const {
    return FGameplayTag{};
}

FGameplayTag UIGS_PlayerSuspicionComponent::GetCurrentWieldableClass() const {
    return FGameplayTag{};
}

FGameplayTagContainer UIGS_PlayerSuspicionComponent::GetCurrentOffences() {
    return FGameplayTagContainer{};
}


