#include "IGS_BossPointMovementManager.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SplineComponent.h"

AIGS_BossPointMovementManager::AIGS_BossPointMovementManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComp"));
    (*this).PrimaryActorTick.bCanEverTick = true;
}

void AIGS_BossPointMovementManager::ResumeMoving() {
}

void AIGS_BossPointMovementManager::PauseMoving() {
}

void AIGS_BossPointMovementManager::InitializeWithPlayer(AIGS_PlayerCharacter* inPlayer) {
}

void AIGS_BossPointMovementManager::AbortMoving() {
}


