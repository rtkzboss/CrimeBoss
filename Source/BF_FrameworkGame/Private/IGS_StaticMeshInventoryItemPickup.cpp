#include "IGS_StaticMeshInventoryItemPickup.h"
#include "Components/StaticMeshComponent.h"

AIGS_StaticMeshInventoryItemPickup::AIGS_StaticMeshInventoryItemPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RootComp"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->PickupMeshComp = (UPrimitiveComponent*)RootComponent;
    this->PickupStaticMeshComp = (UStaticMeshComponent*)RootComponent;
    this->bIsShineEnabled = true;
    this->bTakeMeshFromDatabase = true;
}

void AIGS_StaticMeshInventoryItemPickup::SetIsShineEnabled(bool inEnabled) {
}


