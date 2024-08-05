#include "IGS_PlantableExplosiveProjectile.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SphereComponent.h"
#include "EIGS_WorldWidgetType.h"
#include "Net/UnrealNetwork.h"

AIGS_PlantableExplosiveProjectile::AIGS_PlantableExplosiveProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PushIntoMeshDistance = 3.000000000e+00f;
    (*this).RotateMeshOnPlant.Pitch = -9.000000000e+01f;
    (*this).ShootCollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("ShootCollisionSphere"));
    (*this).ShootCollisionSphere->SetupAttachment((*this).RootComponent);
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


