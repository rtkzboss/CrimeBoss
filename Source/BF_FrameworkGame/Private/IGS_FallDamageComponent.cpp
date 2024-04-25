#include "IGS_FallDamageComponent.h"

UIGS_FallDamageComponent::UIGS_FallDamageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAddMaxStepHeightToFellHeight = true;
    this->InstaDeathDamage = 1000001.00f;
    this->StartedFallingZ = 340282346638528859811704183484516925440.00f;
    this->bIsFalling = false;
    this->bNextFallIsIgnored = false;
    this->bFallDamagedEnabled = true;
}

void UIGS_FallDamageComponent::SetFallDamageEnabled(bool inEnabled) {
}

bool UIGS_FallDamageComponent::IsNextFallDamageIgnored() const {
    return false;
}

bool UIGS_FallDamageComponent::IsFallDamageEnabled() const {
    return false;
}

void UIGS_FallDamageComponent::IgnoreNextFall() {
}


