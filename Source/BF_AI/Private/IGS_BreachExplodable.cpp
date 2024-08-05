#include "IGS_BreachExplodable.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AIGS_BreachExplodable::AIGS_BreachExplodable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).ExplosionDelay = 2.000000000e+00f;
    (*this).StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh Component"));
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    (*this).StaticMeshComponent->SetupAttachment((*this).RootComponent);
}



