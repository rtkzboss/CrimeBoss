#include "IGS_SimpleProjectile.h"
#include "Components/SphereComponent.h"

AIGS_SimpleProjectile::AIGS_SimpleProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
    this->Collision = (UPrimitiveComponent*)RootComponent;
}


