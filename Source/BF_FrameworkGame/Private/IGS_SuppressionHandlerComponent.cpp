#include "IGS_SuppressionHandlerComponent.h"

UIGS_SuppressionHandlerComponent::UIGS_SuppressionHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TimeToWaitAfterSniperShake = 0.00f;
    this->HeadCollisionCapsuleRadius = 25.00f;
    this->AggroDuration = 7.00f;
    this->EventsToActivate = 2.00f;
    this->AggroDisabledDuration = 2.00f;
    this->AggroCumulationTimeout = 5.00f;
}

void UIGS_SuppressionHandlerComponent::SetCapsuleSize(float inCapsuleSize) {
}

void UIGS_SuppressionHandlerComponent::OnCharacterHit(float inDamage, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo) {
}


