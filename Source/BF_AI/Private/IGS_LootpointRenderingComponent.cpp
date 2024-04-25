#include "IGS_LootpointRenderingComponent.h"

UIGS_LootpointRenderingComponent::UIGS_LootpointRenderingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->Mobility = EComponentMobility::Stationary;
}


