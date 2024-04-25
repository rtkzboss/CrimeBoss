#include "IGS_AggroHandlerComponent.h"

UIGS_AggroHandlerComponent::UIGS_AggroHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AggroUpdateTick = 0.20f;
    this->AggroSwitchedCooldownTime = 1.00f;
    this->GlobalAggroChangeDivisor = 0.50f;
}

AActor* UIGS_AggroHandlerComponent::GetRecommendedTarget() const {
    return NULL;
}

FIGS_EnemyHolder UIGS_AggroHandlerComponent::BPGetRecommendedTargetHolder() const {
    return FIGS_EnemyHolder{};
}


