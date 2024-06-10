#include "IGS_SentryAggroComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_SentryAggroComponent::UIGS_SentryAggroComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).AggroUpdateTick = 2.000000030e-01f;
    (*this).AggroSwitchedCooldownTime = 1.000000000e+00f;
    (*this).MinAggroRangeMultiplier = 8.000000119e-01f;
    (*this).MaxAggroRangeMultiplier = 2.000000000e+00f;
    (*this).GlobalAggroChangeDivisor = 5.000000000e-01f;
}

AActor* UIGS_SentryAggroComponent::GetRecommendedTarget() const {
    return NULL;
}


