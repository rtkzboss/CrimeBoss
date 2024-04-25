#include "IGS_AimAssistTargetComponent.h"

UIGS_AimAssistTargetComponent::UIGS_AimAssistTargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MeshComponent = NULL;
    this->ActorOwner = NULL;
    this->bIsAimAssistActive = true;
}

void UIGS_AimAssistTargetComponent::SetupSockets(const TArray<FIGS_AimAssistSocketData>& inAimTargetSockets) {
}

void UIGS_AimAssistTargetComponent::SetAimAssistTargetActive(bool InValue) {
}

void UIGS_AimAssistTargetComponent::Init(UMeshComponent* InMesh) {
}


