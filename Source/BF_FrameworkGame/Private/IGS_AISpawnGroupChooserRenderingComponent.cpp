#include "IGS_AISpawnGroupChooserRenderingComponent.h"

UIGS_AISpawnGroupChooserRenderingComponent::UIGS_AISpawnGroupChooserRenderingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->Mobility = EComponentMobility::Stationary;
}


