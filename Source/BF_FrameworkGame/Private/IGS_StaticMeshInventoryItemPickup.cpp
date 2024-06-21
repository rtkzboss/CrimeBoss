#include "IGS_StaticMeshInventoryItemPickup.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/StaticMeshComponent.h"
#include "EIGS_TeamSideEnum.h"

AIGS_StaticMeshInventoryItemPickup::AIGS_StaticMeshInventoryItemPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UStaticMeshComponent>(TEXT("RootComp"))) {
    (*this).PickupStaticMeshComp = (UStaticMeshComponent*)RootComponent;
    (*this).DefaultMesh = nullptr;
    (*this).bIsShineEnabled = true;
    (*this).bTakeMeshFromDatabase = true;
    (*this).PickupMeshComp = (UPrimitiveComponent*)RootComponent;
    (*this).SceneRoot = (USceneComponent*)RootComponent;
}

void AIGS_StaticMeshInventoryItemPickup::SetIsShineEnabled(bool inEnabled) {
}


