#include "IGS_AnimBudgetAllocatorSettings.h"

UIGS_AnimBudgetAllocatorSettings::UIGS_AnimBudgetAllocatorSettings() {
    (*this).MaximumSignificance = 1.000000000e+00f;
    (*this).PauseAnimSignificanceThreshold = 2.000000030e-01f;
}

void UIGS_AnimBudgetAllocatorSettings::SetParameters(const FAnimationBudgetAllocatorParameters& inParameters) {
}


