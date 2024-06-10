#include "IGS_AnimBudgetAllocatorComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_AnimBudgetAllocatorComponent::UIGS_AnimBudgetAllocatorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).SignificanceUpdateInterval = 1.000000000e+00f;
}


