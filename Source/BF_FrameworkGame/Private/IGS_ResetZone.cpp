#include "IGS_ResetZone.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"

AIGS_ResetZone::AIGS_ResetZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).ResetTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("ResetTrigger"));
    (*this).NavmeshSearchExtent.X = 1.000000000e+03f;
    (*this).NavmeshSearchExtent.Y = 1.000000000e+03f;
    (*this).NavmeshSearchExtent.Z = 2.000000000e+02f;
    (*this).NavmeshSearchExtentWider.X = 2.000000000e+03f;
    (*this).NavmeshSearchExtentWider.Y = 2.000000000e+03f;
    (*this).NavmeshSearchExtentWider.Z = 2.000000000e+03f;
    (*this).NavmeshOffsetZ = 1.000000000e+02f;
    (*this).FadeOutTime = 5.000000000e-01f;
    (*this).FadeInTime = 5.000000000e-01f;
    (*this).FadeOutDuration = 1.000000000e+00f;
    (*this).RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    (*this).ResetTrigger->SetupAttachment((*this).RootComponent);
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


