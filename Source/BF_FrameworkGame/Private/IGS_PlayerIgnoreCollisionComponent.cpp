#include "IGS_PlayerIgnoreCollisionComponent.h"

UIGS_PlayerIgnoreCollisionComponent::UIGS_PlayerIgnoreCollisionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDisableCollisionWithBackupHeisters = true;
}

void UIGS_PlayerIgnoreCollisionComponent::Initialize() {
}


