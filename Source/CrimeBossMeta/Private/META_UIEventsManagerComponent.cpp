#include "META_UIEventsManagerComponent.h"

UMETA_UIEventsManagerComponent::UMETA_UIEventsManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PendingCareerCompleted = false;
    this->PendingCareerCompletedReason = EMETA_CareerCompletionReason::NoTurfTiles;
    this->PendingCareerCompletedGang = EMETA_Gang::None;
}

bool UMETA_UIEventsManagerComponent::IsCompletedJobPending() {
    return false;
}

FIGS_JobCompletedInfo UMETA_UIEventsManagerComponent::GetAndClearPendingCompletedJob(bool& outResult) {
    return FIGS_JobCompletedInfo{};
}


