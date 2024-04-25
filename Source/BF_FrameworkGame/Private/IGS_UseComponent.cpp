#include "IGS_UseComponent.h"

UIGS_UseComponent::UIGS_UseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PuzzleInteraction = NULL;
    this->InteractionDistance = 100.00f;
    this->InteractionDotProductThreshold = 0.75f;
    this->IsInteractionEnabled = true;
    this->InteractiveDeltaThreshold = 0.50f;
    this->isCurrentlyUsingInteraction = false;
    this->isCurrentlyHoldingInteraction = false;
    this->CanUseCarryables = true;
    this->InteractiveObjectsNearPlayerForHUDAngleLimit = 45.00f;
    this->InteractiveObjectsNearPlayerForHUDAngleDotLimit = 0.71f;
    this->ComponentToInteractWith = NULL;
    this->LastComponentToInteractWith = NULL;
    this->OwnerPlayerController = NULL;
    this->OwnerPlayerPawn = NULL;
    this->OwnerPlayerCharacter = NULL;
    this->isNearInteractible = false;
    this->isNotifiedAboutInteraction = false;
    this->isCurrentlyInteracting = false;
}

bool UIGS_UseComponent::Use(UIGS_InteractiveComponent* inInteractiveComponent, bool bIsHolding) {
    return false;
}

void UIGS_UseComponent::SetInteractionEnabled(bool inState) {
}

void UIGS_UseComponent::Server_UseReleased_Implementation(UIGS_InteractiveComponent* inInteractiveComponent) {
}
bool UIGS_UseComponent::Server_UseReleased_Validate(UIGS_InteractiveComponent* inInteractiveComponent) {
    return true;
}

void UIGS_UseComponent::Server_Use_Implementation(UIGS_InteractiveComponent* inInteractiveComponent) {
}
bool UIGS_UseComponent::Server_Use_Validate(UIGS_InteractiveComponent* inInteractiveComponent) {
    return true;
}

void UIGS_UseComponent::Server_SetLastInteraction_Implementation(UIGS_InteractiveComponent* inInteractiveComponent) {
}
bool UIGS_UseComponent::Server_SetLastInteraction_Validate(UIGS_InteractiveComponent* inInteractiveComponent) {
    return true;
}

void UIGS_UseComponent::Server_PuzzleInteractionEnded_Implementation(bool inResult, bool inStealthEnd) {
}

void UIGS_UseComponent::Server_PostAuthClient_Implementation(UIGS_InteractiveComponent* inInteractiveComponent) {
}
bool UIGS_UseComponent::Server_PostAuthClient_Validate(UIGS_InteractiveComponent* inInteractiveComponent) {
    return true;
}

void UIGS_UseComponent::Server_HoldSuccess_Implementation(UIGS_InteractiveComponent* inInteractiveComponent) {
}
bool UIGS_UseComponent::Server_HoldSuccess_Validate(UIGS_InteractiveComponent* inInteractiveComponent) {
    return true;
}

void UIGS_UseComponent::Server_HoldStarted_Implementation(UIGS_InteractiveComponent* inInteractiveComponent) {
}
bool UIGS_UseComponent::Server_HoldStarted_Validate(UIGS_InteractiveComponent* inInteractiveComponent) {
    return true;
}

void UIGS_UseComponent::Server_HoldCanceled_Implementation(UIGS_InteractiveComponent* inInteractiveComponent) {
}
bool UIGS_UseComponent::Server_HoldCanceled_Validate(UIGS_InteractiveComponent* inInteractiveComponent) {
    return true;
}

void UIGS_UseComponent::Server_AuthUse_Implementation(UIGS_InteractiveComponent* inInteractiveComponent) {
}
bool UIGS_UseComponent::Server_AuthUse_Validate(UIGS_InteractiveComponent* inInteractiveComponent) {
    return true;
}

void UIGS_UseComponent::OnMovementModeChanged(ACharacter* inCharacter, TEnumAsByte<EMovementMode> inPrevMovementMode, uint8 inPreviousCustomMode) {
}

void UIGS_UseComponent::Client_Rollback_Implementation(UIGS_InteractiveComponent* inInteractiveComponent) {
}
bool UIGS_UseComponent::Client_Rollback_Validate(UIGS_InteractiveComponent* inInteractiveComponent) {
    return true;
}

void UIGS_UseComponent::Client_PostServerUseReleased_Implementation(UIGS_InteractiveComponent* inInteractiveComponent) {
}
bool UIGS_UseComponent::Client_PostServerUseReleased_Validate(UIGS_InteractiveComponent* inInteractiveComponent) {
    return true;
}

void UIGS_UseComponent::Client_AuthUse_Implementation(UIGS_InteractiveComponent* inInteractiveComponent) {
}
bool UIGS_UseComponent::Client_AuthUse_Validate(UIGS_InteractiveComponent* inInteractiveComponent) {
    return true;
}

void UIGS_UseComponent::ClearVisualParts() {
}


