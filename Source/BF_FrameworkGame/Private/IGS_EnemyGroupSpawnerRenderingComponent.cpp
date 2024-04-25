#include "IGS_EnemyGroupSpawnerRenderingComponent.h"

UIGS_EnemyGroupSpawnerRenderingComponent::UIGS_EnemyGroupSpawnerRenderingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->Mobility = EComponentMobility::Stationary;
}


