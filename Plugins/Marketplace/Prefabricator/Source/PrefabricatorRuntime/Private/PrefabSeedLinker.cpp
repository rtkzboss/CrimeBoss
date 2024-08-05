#include "PrefabSeedLinker.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "PrefabSeedLinkerComponent.h"

APrefabSeedLinker::APrefabSeedLinker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).SeedLinkerComponent = CreateDefaultSubobject<UPrefabSeedLinkerComponent>(TEXT("SeedLinker"));
    (*this).RootComponent = (USceneComponent*)SeedLinkerComponent;
}


