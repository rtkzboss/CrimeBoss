#include "IGS_StaticMeshPenetrableActor.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "IGS_MeshOverlappableComponent.h"

AIGS_StaticMeshPenetrableActor::AIGS_StaticMeshPenetrableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).MeshOverlappableComponent = CreateDefaultSubobject<UIGS_MeshOverlappableComponent>(TEXT("MeshOverlappableComponent0"));
    (*this).RootComponent = (USceneComponent*)MeshOverlappableComponent;
}

void AIGS_StaticMeshPenetrableActor::SetMobility(TEnumAsByte<EComponentMobility::Type> inMobility) {
}


