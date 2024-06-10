#include "IGS_SquadAggroComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_SquadAggroComponent::UIGS_SquadAggroComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).FightSecondsAfterTargetLost = 3.000000000e+01f;
    (*this).TraceDelay = 3.000000119e-01f;
    (*this).TraceCount = 10;
    (*this).PrimaryComponentTick.bCanEverTick = true;
}


