#include "IGS_PlantableExplosiveProjectile.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_PlantableExplosiveProjectile::AIGS_PlantableExplosiveProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsShootable = false;
    this->PushIntoMeshDistance = 3.00f;
    this->ShootCollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("ShootCollisionSphere"));
    this->ShootCollisionSphere->SetupAttachment(RootComponent);
}


void AIGS_PlantableExplosiveProjectile::OnRep_PlantData() {
}

void AIGS_PlantableExplosiveProjectile::Detonate() {
}

bool AIGS_PlantableExplosiveProjectile::CanStick_Implementation(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, FVector inNormalImpulse, const FHitResult& inSweepResult) {
    return false;
}

void AIGS_PlantableExplosiveProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_PlantableExplosiveProjectile, mR_PlantData);
}


