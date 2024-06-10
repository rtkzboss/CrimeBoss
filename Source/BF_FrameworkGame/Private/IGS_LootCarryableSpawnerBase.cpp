#include "IGS_LootCarryableSpawnerBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AIGS_LootCarryableSpawnerBase::AIGS_LootCarryableSpawnerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    (*this).SpawnPlaceholder = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpawnPlaceholder"));
    (*this).RootComponent = (USceneComponent*)Scene;
    (*this).SpawnPlaceholder->SetupAttachment((*this).Scene);
}

void AIGS_LootCarryableSpawnerBase::LootCarryableSpawned(AIGS_StaticMeshInventoryItemPickup* inPickup) {
}


