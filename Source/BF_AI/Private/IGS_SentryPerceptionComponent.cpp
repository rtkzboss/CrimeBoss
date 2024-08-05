#include "IGS_SentryPerceptionComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_SentryPerceptionComponent::UIGS_SentryPerceptionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryComponentTick.bCanEverTick = true;
    (*this).PrimaryComponentTick.bStartWithTickEnabled = false;
    (*this).PrimaryComponentTick.TickInterval = 3.000000119e-01f;
}

void UIGS_SentryPerceptionComponent::OnTargetPerceptionUpdated(AActor* inActor, FAIStimulus inStimulus) {
}


