#include "IGS_AkGeometry.h"
#include "AkGeometryComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/StaticMeshComponent.h"

AIGS_AkGeometry::AIGS_AkGeometry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    (*this).AkGeometry = CreateDefaultSubobject<UAkGeometryComponent>(TEXT("AkGeometryComponent"));
    (*this).RootComponent = (USceneComponent*)StaticMeshComponent;
}


