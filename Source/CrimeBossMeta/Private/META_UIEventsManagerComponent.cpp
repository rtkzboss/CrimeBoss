#include "META_UIEventsManagerComponent.h"
#include "ComponentInstanceDataCache.h"

UMETA_UIEventsManagerComponent::UMETA_UIEventsManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UMETA_UIEventsManagerComponent::IsCompletedJobPending() {
    return false;
}

FIGS_JobCompletedInfo UMETA_UIEventsManagerComponent::GetAndClearPendingCompletedJob(bool& outResult) {
    return FIGS_JobCompletedInfo{};
}


