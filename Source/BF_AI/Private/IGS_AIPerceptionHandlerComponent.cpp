#include "IGS_AIPerceptionHandlerComponent.h"

UIGS_AIPerceptionHandlerComponent::UIGS_AIPerceptionHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AIMemoryUpdateTick = 0.30f;
    this->AIMemoryUpdateInitialDelay = 2.00f;
    this->SightForgetTime = 0.10f;
    this->HearForgetTime = 30.00f;
    this->ShotForgetTime = 30.00f;
    this->DamageForgetTime = 60.00f;
    this->DangerForgetTime = 5.00f;
    this->SightRadiusOverride = -1.00f;
}

void UIGS_AIPerceptionHandlerComponent::OnTargetPerceptionUpdated(AActor* inActor, FAIStimulus inStimulus) {
}

void UIGS_AIPerceptionHandlerComponent::OnSusActorEndPlay(AActor* inActor, TEnumAsByte<EEndPlayReason::Type> inEndPlayReason) {
}

AIGS_GameCharacterFramework* UIGS_AIPerceptionHandlerComponent::GetPossesedPawn() const {
    return NULL;
}


