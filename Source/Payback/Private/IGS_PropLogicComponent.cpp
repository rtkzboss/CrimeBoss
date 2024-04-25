#include "IGS_PropLogicComponent.h"

UIGS_PropLogicComponent::UIGS_PropLogicComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_Parent = NULL;
    this->m_IsGenerated = false;
}

TArray<UIGS_PropMeshSpawner*> UIGS_PropLogicComponent::GetPropMeshSpawners() const {
    return TArray<UIGS_PropMeshSpawner*>();
}

TArray<UIGS_PropActorSpawner*> UIGS_PropLogicComponent::GetPropActorSpawners() const {
    return TArray<UIGS_PropActorSpawner*>();
}

bool UIGS_PropLogicComponent::GetIsGenerated() const {
    return false;
}

void UIGS_PropLogicComponent::Generate(int32 inPropsSeed) {
}

void UIGS_PropLogicComponent::DespawnActors() {
}


