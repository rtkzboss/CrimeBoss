#include "IGS_PropActorSpawner.h"
#include "ComponentInstanceDataCache.h"

UIGS_PropActorSpawner::UIGS_PropActorSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).Mobility = EComponentMobility::Stationary;
}

bool UIGS_PropActorSpawner::IsSpawned() const {
    return false;
}

AActor* UIGS_PropActorSpawner::GetSpawnedActor() const {
    return NULL;
}

bool UIGS_PropActorSpawner::Despawn() const {
    return false;
}


