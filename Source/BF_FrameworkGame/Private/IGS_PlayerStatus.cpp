#include "IGS_PlayerStatus.h"

UIGS_PlayerStatus::UIGS_PlayerStatus(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHealthRegenAllowed = true;
    this->HealthMultiplierAttribute = 1.00f;
    this->HealthRegenDelayAttribute = 1.00f;
    this->bAutoregenMaxOverriden = false;
    this->AutoregenMaxOverride = 0.00f;
    this->RegenerationStartAkEvent = NULL;
    this->RegenerationFinishedAkEvent = NULL;
}

void UIGS_PlayerStatus::SetRegenerationBlocked(bool inIsBlocked) {
}

void UIGS_PlayerStatus::MessageToClient_RegenStarted_Implementation() {
}

void UIGS_PlayerStatus::MessageToClient_RegenFinished_Implementation() {
}

void UIGS_PlayerStatus::KickInRegeneration() {
}

bool UIGS_PlayerStatus::IsRegenerationBlocked() {
    return false;
}

float UIGS_PlayerStatus::GetCurrentMaxAutoregenHealth() const {
    return 0.0f;
}

void UIGS_PlayerStatus::ForceSetMaxHealth(float inMaxHealth) {
}

void UIGS_PlayerStatus::ForceSetMaxAutoregenHealth(float inAutoregenMaxHealth, bool inOverride) {
}

void UIGS_PlayerStatus::ForceSetHealth(float inHealth) {
}


