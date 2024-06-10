#include "IGS_AIPerceptionHandlerComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_AIPerceptionHandlerComponent::UIGS_AIPerceptionHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).AIMemoryUpdateTick = 3.000000119e-01f;
    (*this).AIMemoryUpdateInitialDelay = 2.000000000e+00f;
    (*this).SightForgetTime = 1.000000015e-01f;
    (*this).HearForgetTime = 3.000000000e+01f;
    (*this).ShotForgetTime = 3.000000000e+01f;
    (*this).DamageForgetTime = 6.000000000e+01f;
    (*this).DangerForgetTime = 5.000000000e+00f;
    (*this).SightRadiusOverride = -1.000000000e+00f;
}

void UIGS_AIPerceptionHandlerComponent::OnTargetPerceptionUpdated(AActor* inActor, FAIStimulus inStimulus) {
}

void UIGS_AIPerceptionHandlerComponent::OnSusActorEndPlay(AActor* inActor, TEnumAsByte<EEndPlayReason::Type> inEndPlayReason) {
}

AIGS_GameCharacterFramework* UIGS_AIPerceptionHandlerComponent::GetPossesedPawn() const {
    return NULL;
}


