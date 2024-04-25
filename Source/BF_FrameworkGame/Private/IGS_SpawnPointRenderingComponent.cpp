#include "IGS_SpawnPointRenderingComponent.h"

UIGS_SpawnPointRenderingComponent::UIGS_SpawnPointRenderingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->Mobility = EComponentMobility::Stationary;
}


