#include "IGS_BreakableWindowComponent.h"
#include "Net/UnrealNetwork.h"

UIGS_BreakableWindowComponent::UIGS_BreakableWindowComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mR_DecalsLocation.AddDefaulted(7);
    this->mR_CurrentDecalIndex = -1;
    this->MinimalDecalDistance = 0.00f;
    this->MinDecalAngle = 0.15f;
    this->MaxDecalAngle = 0.85f;
    this->ParticleWidth = 25.00f;
    this->ParticleHeight = 25.00f;
    this->ParticleAmount = 1.00f;
    this->bShowDecals = true;
    this->bCanTakePlayerImpactDamage = false;
    this->bBulletsPassThrough = true;
    this->HitCameraShakeIntensity = 1.00f;
    this->SkinnedDecalSampler = NULL;
}

void UIGS_BreakableWindowComponent::RefreshDecalData(int32 inDecalIndex, FVector inDecalLocation, FVector inDecalRotation) {
}

void UIGS_BreakableWindowComponent::OnRep_SynchronizeDecals() {
}

void UIGS_BreakableWindowComponent::OnComponentHit_Implementation(UPrimitiveComponent* inHitComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, FVector inNormalImpulse, const FHitResult& inHit) {
}

void UIGS_BreakableWindowComponent::OnComponentBroken_Implementation(AActor* inDmgCauser) {
}

void UIGS_BreakableWindowComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_BreakableWindowComponent, mR_DecalsLocation);
    DOREPLIFETIME(UIGS_BreakableWindowComponent, mR_RandomDecalRotation);
    DOREPLIFETIME(UIGS_BreakableWindowComponent, mR_CurrentDecalIndex);
}


