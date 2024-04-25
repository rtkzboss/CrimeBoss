#include "IGS_BreachExplodable.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AIGS_BreachExplodable::AIGS_BreachExplodable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->ExplosionDelay = 2.00f;
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh Component"));
    this->ExplosionAkEvent = NULL;
    this->StaticMeshComponent->SetupAttachment(RootComponent);
}



