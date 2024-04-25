#include "IGS_AnimatedInteractiveComponentBase.h"
#include "Net/UnrealNetwork.h"

UIGS_AnimatedInteractiveComponentBase::UIGS_AnimatedInteractiveComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->R_Progress = 0.00f;
    this->StartPointComponent = NULL;
    this->CurrentPlayerCharInstigator = NULL;
    this->PlayerMovement = NULL;
    this->bAnimationOnly = false;
    this->bStartAnimationImmediately = true;
    this->bBlockInputUntilAbilityEnd = true;
    this->bMoveToExactPositionAndRotation = true;
    this->RotationInterpSpeed = 10.00f;
    this->MoveInterpSpeed = 100.00f;
    this->DistanceFromPoint = 150.00f;
    this->TolerableThreshold = 100.00f;
    this->FailsafeTime = 2.00f;
    this->bDisablePhysicsDuringLerping = false;
    this->bKeepDisabledPhysicsUntilAbilityEnd = false;
    this->bSetFlyingWhenLerping = true;
    this->bRotateOnly = false;
    this->bRotatePitch = true;
    this->bMoveWithInteraction = false;
    this->bActAsNormalInteraction = false;
    this->bShouldMovePayload = false;
}

void UIGS_AnimatedInteractiveComponentBase::StopAnimation(AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_AnimatedInteractiveComponentBase::StartAnimation(AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_AnimatedInteractiveComponentBase::Server_OnPreInteractionLerpFinished_Implementation(AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_AnimatedInteractiveComponentBase::ReleaseInput(AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_AnimatedInteractiveComponentBase::OnRep_Progress(float inOldProgress) {
}



void UIGS_AnimatedInteractiveComponentBase::MovePlayerToPointInternal_Implementation() {
}

void UIGS_AnimatedInteractiveComponentBase::Client_OnPreInteractionLerpFinished_Implementation(AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_AnimatedInteractiveComponentBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_AnimatedInteractiveComponentBase, R_Progress);
}


