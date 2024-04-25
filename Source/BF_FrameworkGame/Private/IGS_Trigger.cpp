#include "IGS_Trigger.h"

AIGS_Trigger::AIGS_Trigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TriggerExecuteOn = EIGS_TriggerExecuteOn::EIGS_BeginOverlap;
    this->TriggerLimit = 0;
    this->TriggerOnBotRepossess = true;
    this->bNotifyLeftOnDeath = true;
    this->bDestroyOnDeactivate = false;
    this->RetriggerDelay = 0.00f;
    this->bTriggerDebug = false;
    this->bUseTriggerDebugOptions = true;
    this->TriggerDeadOrAlive = EIGS_TriggerDeadOrAlive::DOA_Alive;
    this->bTriggerOnlyOnServer = false;
    this->TriggerCount = 0;
    this->SpriteEnabled = NULL;
    this->SpriteDisabled = NULL;
}

void AIGS_Trigger::ResetCount() {
}

void AIGS_Trigger::OnActorEndPlay(AActor* inActor, TEnumAsByte<EEndPlayReason::Type> inEndPlayReason) {
}

void AIGS_Trigger::Multicast_OnPossessed_Implementation(AIGS_GameCharacterFramework* inPlayerCharacter) {
}
bool AIGS_Trigger::Multicast_OnPossessed_Validate(AIGS_GameCharacterFramework* inPlayerCharacter) {
    return true;
}

bool AIGS_Trigger::IsActorInTrigger(AActor* inActor) const {
    return false;
}

TArray<AIGS_PlayerCharacter*> AIGS_Trigger::GetAllPlayersInTrigger() const {
    return TArray<AIGS_PlayerCharacter*>();
}

TArray<AIGS_GameCharacterFramework*> AIGS_Trigger::GetAllCharactersInTrigger() const {
    return TArray<AIGS_GameCharacterFramework*>();
}

TArray<AActor*> AIGS_Trigger::GetAllActorsInTrigger() const {
    return TArray<AActor*>();
}

void AIGS_Trigger::Execute_Implementation(AActor* inExecutingActor) {
}


int32 AIGS_Trigger::CheckAllCharactersInTrigger() {
    return 0;
}


