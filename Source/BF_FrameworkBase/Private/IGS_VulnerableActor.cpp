#include "IGS_VulnerableActor.h"

AIGS_VulnerableActor::AIGS_VulnerableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentHealth = 100.00f;
    this->RelativeHealth = 1.00f;
    this->bBroken = false;
    this->VulnerableDamageType = NULL;
    this->CurrentInstigator = NULL;
    this->MaxHealth = 100.00f;
}

void AIGS_VulnerableActor::ResetVulnerableComponent() {
}

bool AIGS_VulnerableActor::GetIsBroken() {
    return false;
}

void AIGS_VulnerableActor::ApplyVulnerableDamage(float inAmount) {
}


