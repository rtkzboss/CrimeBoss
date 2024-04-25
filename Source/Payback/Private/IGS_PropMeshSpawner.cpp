#include "IGS_PropMeshSpawner.h"

UIGS_PropMeshSpawner::UIGS_PropMeshSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->m_SpawnedMesh = NULL;
}

void UIGS_PropMeshSpawner::Despawn() {
}


