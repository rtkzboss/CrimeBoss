#include "IGS_SentryAggroComponent.h"

UIGS_SentryAggroComponent::UIGS_SentryAggroComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AggroUpdateTick = 0.20f;
    this->AggroSwitchedCooldownTime = 1.00f;
    this->MinAggroRangeMultiplier = 0.80f;
    this->MaxAggroRangeMultiplier = 2.00f;
    this->GlobalAggroChangeDivisor = 0.50f;
}

AActor* UIGS_SentryAggroComponent::GetRecommendedTarget() const {
    return NULL;
}


