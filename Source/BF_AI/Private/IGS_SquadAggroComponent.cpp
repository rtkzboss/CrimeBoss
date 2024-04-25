#include "IGS_SquadAggroComponent.h"

UIGS_SquadAggroComponent::UIGS_SquadAggroComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FightSecondsAfterTargetLost = 30.00f;
    this->TraceDelay = 0.30f;
    this->TraceCount = 10;
}


