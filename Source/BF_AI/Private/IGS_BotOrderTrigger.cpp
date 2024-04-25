#include "IGS_BotOrderTrigger.h"

AIGS_BotOrderTrigger::AIGS_BotOrderTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InitialDelay = 5.00f;
    this->Cooldown = 15.00f;
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


