#include "IGS_LootCarryableSpawnerBase.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AIGS_LootCarryableSpawnerBase::AIGS_LootCarryableSpawnerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->Scene = (USceneComponent*)RootComponent;
    this->SpawnPlaceholder = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpawnPlaceholder"));
    this->SpawnedActor = NULL;
    this->SpawnPlaceholder->SetupAttachment(RootComponent);
}

void AIGS_LootCarryableSpawnerBase::LootCarryableSpawned(AIGS_StaticMeshInventoryItemPickup* inPickup) {
}


