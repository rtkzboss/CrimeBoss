#include "IGS_InteractiveComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UIGS_InteractiveComponent::UIGS_InteractiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bIsEnabled = true;
    (*this).bCanBeEnabled = true;
    (*this).bHolsterWhenHolding = true;
    (*this).TimerHoldTime = 5.000000000e-01f;
    (*this).OutlineDistance = 2.500000000e+02f;
    (*this).InteractionDistance = 1.500000000e+02f;
    (*this).HUDDistance = 5.000000000e+02f;
    (*this).InteractionBottomZTreshold = 1.000000000e+02f;
    (*this).InteractionDotThreshold = 7.500000000e-01f;
    (*this).bUseRootForOutline = true;
    (*this).bShowOutline = true;
    (*this).bOverrideMasterOutline = true;
    (*this).bReleaseLookInputAfterUse = true;
    (*this).SuspicionTagsKeepTime = -1.000000000e+00f;
}

void UIGS_InteractiveComponent::Use(AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_InteractiveComponent::StopUse(AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_InteractiveComponent::SetSuspicionTags(FGameplayTagContainer inSuspicionTags) {
}

void UIGS_InteractiveComponent::SetNeededItem(TSubclassOf<UIGS_InventoryObjectFramework> inItem) {
}

void UIGS_InteractiveComponent::SetNameToDisplay(FText InText) {
}

void UIGS_InteractiveComponent::SetHoldable(bool inHoldable, float InTime) {
}

void UIGS_InteractiveComponent::SetEnabled(bool inEnabled) {
}

void UIGS_InteractiveComponent::SetComponentsToOutline(const TArray<USceneComponent*>& inComponentsToOutline) {
}

void UIGS_InteractiveComponent::SetCanBeEnabled(bool inCanBeEnabled) {
}

void UIGS_InteractiveComponent::Server_UseReleased_Implementation(AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_InteractiveComponent::Server_Use_Implementation(AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_InteractiveComponent::Server_PostAuthClient_Implementation(AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_InteractiveComponent::Server_HoldStarted_Implementation(AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_InteractiveComponent::Server_HoldCanceled_Implementation(AIGS_GameCharacterFramework* inInstigator) {
}

bool UIGS_InteractiveComponent::Server_CanUse_Implementation(AIGS_GameCharacterFramework* inInstigator) {
    return false;
}

void UIGS_InteractiveComponent::RemoveSusTags(AIGS_GameCharacterFramework* inInstigator) const {
}

void UIGS_InteractiveComponent::OnServerRollback_Implementation(AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_InteractiveComponent::OnRep_Enabled() {
}

void UIGS_InteractiveComponent::OnRep_bIsBeingUsed() {
}

void UIGS_InteractiveComponent::OnPuzzleInteractionEnded_Implementation(bool inResult, bool inStealthEnd) {
}

void UIGS_InteractiveComponent::Client_UseReleased_Implementation(AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_InteractiveComponent::Client_Use_Implementation(AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_InteractiveComponent::Client_Rollback_Implementation(AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_InteractiveComponent::Client_PostServer_Implementation(AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_InteractiveComponent::Client_HoldStarted_Implementation(AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_InteractiveComponent::Client_HoldCanceled_Implementation(AIGS_GameCharacterFramework* inInstigator) {
}

bool UIGS_InteractiveComponent::Client_CanUse_Implementation(AIGS_GameCharacterFramework* inInstigator) {
    return false;
}

bool UIGS_InteractiveComponent::Client_CanUnlock_Implementation(AIGS_GameCharacterFramework* inInstigator) {
    return false;
}

void UIGS_InteractiveComponent::AI_Use(AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_InteractiveComponent::AddSusTags(AIGS_GameCharacterFramework* inInstigator) const {
}

void UIGS_InteractiveComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_InteractiveComponent, bIsEnabled);
    DOREPLIFETIME(UIGS_InteractiveComponent, NeededItem);
    DOREPLIFETIME(UIGS_InteractiveComponent, R_bIsSuspicious);
    DOREPLIFETIME(UIGS_InteractiveComponent, R_bIsBeingUsed);
    DOREPLIFETIME(UIGS_InteractiveComponent, R_CurrentlyUsingInstigator);
    DOREPLIFETIME(UIGS_InteractiveComponent, mR_WasUsed);
}


