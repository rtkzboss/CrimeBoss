#include "IGS_AnimBudgetAllocatorSettings.h"

UIGS_AnimBudgetAllocatorSettings::UIGS_AnimBudgetAllocatorSettings() {
    this->MinimumSignificance = 0.00f;
    this->MaximumSignificance = 1.00f;
    this->PauseAnimSignificanceThreshold = 2.00f;
}

void UIGS_AnimBudgetAllocatorSettings::SetParameters(const FAnimationBudgetAllocatorParameters& inParameters) {
}


