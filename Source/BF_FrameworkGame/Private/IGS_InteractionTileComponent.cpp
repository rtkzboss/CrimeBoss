#include "IGS_InteractionTileComponent.h"
#include "Net/UnrealNetwork.h"

UIGS_InteractionTileComponent::UIGS_InteractionTileComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SubTileChildActor = NULL;
    this->SubTileActorClass = NULL;
}

void UIGS_InteractionTileComponent::Show() {
}

void UIGS_InteractionTileComponent::OnSubTileSuccess(AIGS_GameCharacterFramework* inInstigator) {
}


void UIGS_InteractionTileComponent::OnSubTileActivate(AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_InteractionTileComponent::Hide() {
}

void UIGS_InteractionTileComponent::DestroyTileActor() {
}

void UIGS_InteractionTileComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_InteractionTileComponent, SubTileChildActor);
}


