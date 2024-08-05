#include "PrefabActor.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "PrefabComponent.h"

APrefabActor::APrefabActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrefabComponent = CreateDefaultSubobject<UPrefabComponent>(TEXT("PrefabComponent"));
    (*this).RootComponent = (USceneComponent*)PrefabComponent;
}

void APrefabActor::SavePrefab() {
}

void APrefabActor::RandomizeSeed(const FRandomStream& InRandom, bool bRecursive) {
}

void APrefabActor::LoadPrefab() {
}

bool APrefabActor::IsPrefabOutdated() {
    return false;
}

UPrefabricatorAsset* APrefabActor::GetPrefabAsset() {
    return NULL;
}


