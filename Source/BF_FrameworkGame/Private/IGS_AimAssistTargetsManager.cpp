#include "IGS_AimAssistTargetsManager.h"

UIGS_AimAssistTargetsManager::UIGS_AimAssistTargetsManager() {
}

TArray<UIGS_AimAssistTargetComponent*> UIGS_AimAssistTargetsManager::GetAllAimAssistTargetsInBoxWithTransform(const FTransform& inBoxWorldTransform, FVector InBoxExtent) const {
    return TArray<UIGS_AimAssistTargetComponent*>();
}

TArray<UIGS_AimAssistTargetComponent*> UIGS_AimAssistTargetsManager::GetAllAimAssistTargets() const {
    return TArray<UIGS_AimAssistTargetComponent*>();
}


