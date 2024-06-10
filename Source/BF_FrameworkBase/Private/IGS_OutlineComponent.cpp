#include "IGS_OutlineComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Net/UnrealNetwork.h"

UIGS_OutlineComponent::UIGS_OutlineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bUseRootForOutline = true;
}

void UIGS_OutlineComponent::SetOutlineCategoryState(EIGS_CameraOutlineState inCategory, bool inEnabled) {
}

void UIGS_OutlineComponent::SetLocalOutlineCategoryState(EIGS_CameraOutlineState inCategory, bool inEnabled) {
}

void UIGS_OutlineComponent::SetLocalCharacterOutline(const bool inEnabled, const bool inIsBackup) {
}

void UIGS_OutlineComponent::SetIsSmartPinged(const bool inEnabled) {
}

void UIGS_OutlineComponent::SetHeisterOutlineCategoryState(const AActor* inHeisterReference, const bool inEnabled) {
}

void UIGS_OutlineComponent::SetComponentsToOutline(const TArray<USceneComponent*>& inComponentsToOutline) {
}

void UIGS_OutlineComponent::ResetOutline() {
}

void UIGS_OutlineComponent::RemoveComponentToOutline(UActorComponent* inComponentToOutline) {
}

void UIGS_OutlineComponent::RemoveComponentsToOutline(const TArray<UActorComponent*>& inComponentsToOutline) {
}

void UIGS_OutlineComponent::OnRep_CurrentOutlineState() {
}

void UIGS_OutlineComponent::AddComponentToOutline(UActorComponent* inComponentToOutline) {
}

void UIGS_OutlineComponent::AddComponentsToOutline(const TArray<UActorComponent*>& inComponentsToOutline) {
}

void UIGS_OutlineComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_OutlineComponent, CurrentOutlineState);
}


