#include "IGS_ResetZone.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AIGS_ResetZone::AIGS_ResetZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->ResetTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("ResetTrigger"));
    this->NavmeshOffsetZ = 100.00f;
    this->ResetTriggerResult = EIGS_ResetTriggerResult::Fail;
    this->FadeOutTime = 0.50f;
    this->FadeInTime = 0.50f;
    this->FadeOutDuration = 1.00f;
    this->bShowDebugCapsule = false;
    this->ResetTrigger->SetupAttachment(RootComponent);
}

bool AIGS_ResetZone::ResetCharacter(AIGS_PlayerCharacter* Character, FVector& safeResetLocation) {
    return false;
}

void AIGS_ResetZone::KillCharacter(AIGS_PlayerCharacter* Character) {
}

void AIGS_ResetZone::HandleResetTrigger(AActor* inOtherActor, bool bKillOnFail) {
}

void AIGS_ResetZone::HandleReset(AIGS_PlayerCharacter* Character, FVector& safeResetLocation) {
}

bool AIGS_ResetZone::HandleBagReset(AIGS_LootBagPickup* bag, FVector& safeResetLocation) {
    return false;
}

void AIGS_ResetZone::HandleBagDestroy(AIGS_LootBagPickup* bag) {
}


