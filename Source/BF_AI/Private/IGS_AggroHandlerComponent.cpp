#include "IGS_AggroHandlerComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_AggroHandlerComponent::UIGS_AggroHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).AggroUpdateTick = 2.000000030e-01f;
    (*this).AggroSwitchedCooldownTime = 1.000000000e+00f;
    (*this).GlobalAggroChangeDivisor = 5.000000000e-01f;
}

AActor* UIGS_AggroHandlerComponent::GetRecommendedTarget() const {
    return NULL;
}

FIGS_EnemyHolder UIGS_AggroHandlerComponent::BPGetRecommendedTargetHolder() const {
    return FIGS_EnemyHolder{};
}


