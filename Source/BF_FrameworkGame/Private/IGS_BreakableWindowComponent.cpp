#include "IGS_BreakableWindowComponent.h"
#include "EIGS_OverlapResponseType.h"
#include "ComponentInstanceDataCache.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "VT/RuntimeVirtualTextureEnum.h"
#include "EIGS_BreakPushImpulse.h"
#include "EIGS_WindowBreakBehaviour.h"
#include "Net/UnrealNetwork.h"

UIGS_BreakableWindowComponent::UIGS_BreakableWindowComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto& gen588 = (*this).mR_DecalsLocation;
    gen588.Empty();
    gen588.AddDefaulted(7);
    (*this).mR_CurrentDecalIndex = -1;
    (*this).MinDecalAngle = 1.500000060e-01f;
    (*this).MaxDecalAngle = 8.500000238e-01f;
    (*this).ParticleWidth = 2.500000000e+01f;
    (*this).ParticleHeight = 2.500000000e+01f;
    (*this).ParticleAmount = 1.000000000e+00f;
    (*this).ParticleVelocity.X = 1.000000000e+02f;
    (*this).bShowDecals = true;
    (*this).bBulletsPassThrough = true;
    (*this).HitCameraShakeIntensity = 1.000000000e+00f;
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


