#include "IGS_StaticMeshInventoryItemPickup.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/StaticMeshComponent.h"
#include "EIGS_TeamSideEnum.h"

AIGS_StaticMeshInventoryItemPickup::AIGS_StaticMeshInventoryItemPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PickupStaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RootComp"));
    (*this).bIsShineEnabled = true;
    (*this).bTakeMeshFromDatabase = true;
    (*this).PickupMeshComp = (UPrimitiveComponent*)PickupStaticMeshComp;
    (*this).SceneRoot = (USceneComponent*)PickupStaticMeshComp;
    (*this).RootComponent = (USceneComponent*)PickupStaticMeshComp;
}

void AIGS_StaticMeshInventoryItemPickup::SetIsShineEnabled(bool inEnabled) {
}


