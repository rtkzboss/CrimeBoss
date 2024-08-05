#include "IGS_BotOrderTrigger.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_BotOrderTrigger::AIGS_BotOrderTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).InitialDelay = 5.000000000e+00f;
    (*this).Cooldown = 1.500000000e+01f;
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).PrimaryActorTick.bStartWithTickEnabled = false;
    (*this).PrimaryActorTick.TickInterval = 5.000000000e-01f;
}


void AIGS_BotOrderTrigger::RemoveIgnoredCharacter(AIGS_GameCharacterFramework* inCharacter) {
}

void AIGS_BotOrderTrigger::OnCollisionEnter(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult) {
}

void AIGS_BotOrderTrigger::OnCollisionEnd(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex) {
}

TArray<FIGS_BotOrderData> AIGS_BotOrderTrigger::GetPlayersInBox() {
    return TArray<FIGS_BotOrderData>();
}

TArray<FIGS_BotOrderData> AIGS_BotOrderTrigger::GetBotsInBox() {
    return TArray<FIGS_BotOrderData>();
}

void AIGS_BotOrderTrigger::FinishBotOrder(AIGS_GameCharacterFramework* Bot) const {
}

void AIGS_BotOrderTrigger::Deactivate() {
}

bool AIGS_BotOrderTrigger::CanBeTriggered_Implementation(AIGS_GameCharacterFramework* forCharacter) {
    return false;
}

void AIGS_BotOrderTrigger::AddIgnoredCharacter(AIGS_GameCharacterFramework* inCharacter) {
}

void AIGS_BotOrderTrigger::Activate() {
}


