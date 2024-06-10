#include "IGS_SimpleProjectile.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SphereComponent.h"

AIGS_SimpleProjectile::AIGS_SimpleProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).Collision = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
    (*this).RootComponent = (USceneComponent*)Collision;
}


