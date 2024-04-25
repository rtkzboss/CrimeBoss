#include "IGS_LootCollectionSpawnerBase.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AIGS_LootCollectionSpawnerBase::AIGS_LootCollectionSpawnerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->Scene = (USceneComponent*)RootComponent;
    this->SpawnPlaceholder = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpawnPlaceholder"));
    this->SpawnedActor = NULL;
    this->SpawnPlaceholder->SetupAttachment(RootComponent);
}

void AIGS_LootCollectionSpawnerBase::LootCollectionSpawned(AIGS_LootCollectionBase* inLootCollection) {
}


