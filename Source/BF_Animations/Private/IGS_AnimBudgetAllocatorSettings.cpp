#include "IGS_AnimBudgetAllocatorSettings.h"

UIGS_AnimBudgetAllocatorSettings::UIGS_AnimBudgetAllocatorSettings() {
    this->MinimumSignificance = 0.00f;
    this->MaximumSignificance = 1.00f;
    this->PauseAnimSignificanceThreshold = 0.20f;
}

void UIGS_AnimBudgetAllocatorSettings::SetParameters(const FAnimationBudgetAllocatorParameters& inParameters) {
}


