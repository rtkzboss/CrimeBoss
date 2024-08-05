#include "PrefabricatorConstructionSnap.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "PrefabricatorConstructionSnapComponent.h"

APrefabricatorConstructionSnap::APrefabricatorConstructionSnap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).ConstructionSnapComponent = CreateDefaultSubobject<UPrefabricatorConstructionSnapComponent>(TEXT("SnapComponent"));
    (*this).bRelevantForLevelBounds = false;
    (*this).RootComponent = (USceneComponent*)ConstructionSnapComponent;
}


