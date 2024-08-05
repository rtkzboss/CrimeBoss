#include "IGS_UseComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_UseComponent::UIGS_UseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).InteractionDistance = 1.000000000e+02f;
    (*this).InteractionDotProductThreshold = 7.500000000e-01f;
    (*this).IsInteractionEnabled = true;
    (*this).InteractiveDeltaThreshold = 5.000000000e-01f;
    (*this).CanUseCarryables = true;
    (*this).InteractiveObjectsNearPlayerForHUDAngleLimit = 4.500000000e+01f;
    (*this).InteractiveObjectsNearPlayerForHUDAngleDotLimit = 7.071067691e-01f;
    (*this).PrimaryComponentTick.bCanEverTick = true;
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


