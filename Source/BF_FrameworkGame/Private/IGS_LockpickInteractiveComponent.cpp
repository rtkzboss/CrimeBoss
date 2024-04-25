#include "IGS_LockpickInteractiveComponent.h"

UIGS_LockpickInteractiveComponent::UIGS_LockpickInteractiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_LockpickInteractiveComponent::ReportLockPickEnded(AIGS_GameCharacterFramework* inInstigator, const bool inSuccess) const {
}

FIGS_LockPickDifficultySetting UIGS_LockpickInteractiveComponent::GetLockPickDifficultySettings_Implementation() {
    return FIGS_LockPickDifficultySetting{};
}


