#include "IGS_PlayerStatus.h"
#include "EIGS_HealthState.h"
#include "ComponentInstanceDataCache.h"

UIGS_PlayerStatus::UIGS_PlayerStatus(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).HealthRegenDelay.Value = 5.000000000e+00f;
    (*this).HealthRegenHPS.Value = 1.000000000e+02f;
    (*this).HealthRegenTickRateInSeconds.Value = 5.000000075e-02f;
    (*this).bHealthRegenAllowed = true;
    (*this).HealthMultiplierAttribute = 1.000000000e+00f;
    (*this).HealthRegenDelayAttribute = 1.000000000e+00f;
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


