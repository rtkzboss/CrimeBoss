#include "IGS_AkGeometry.h"
#include "AkGeometryComponent.h"
#include "Components/StaticMeshComponent.h"

AIGS_AkGeometry::AIGS_AkGeometry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->StaticMeshComponent = (UStaticMeshComponent*)RootComponent;
    this->AkGeometry = CreateDefaultSubobject<UAkGeometryComponent>(TEXT("AkGeometryComponent"));
}


