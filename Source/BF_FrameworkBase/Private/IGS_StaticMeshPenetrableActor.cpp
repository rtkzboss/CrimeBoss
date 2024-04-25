#include "IGS_StaticMeshPenetrableActor.h"
#include "IGS_MeshOverlappableComponent.h"

AIGS_StaticMeshPenetrableActor::AIGS_StaticMeshPenetrableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UIGS_MeshOverlappableComponent>(TEXT("MeshOverlappableComponent0"));
    this->MeshOverlappableComponent = (UIGS_MeshOverlappableComponent*)RootComponent;
}

void AIGS_StaticMeshPenetrableActor::SetMobility(TEnumAsByte<EComponentMobility::Type> inMobility) {
}


