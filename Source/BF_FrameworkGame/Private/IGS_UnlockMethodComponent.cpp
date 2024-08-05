#include "IGS_UnlockMethodComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_UnlockMethodComponent::UIGS_UnlockMethodComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_UnlockMethodComponent::InitUnlockMethodComponent(FGameplayTagContainer inMethods) {
}

FGameplayTagContainer UIGS_UnlockMethodComponent::GetUnlockMethods() {
    return FGameplayTagContainer{};
}

int32 UIGS_UnlockMethodComponent::GetUnlockMethodCount() {
    return 0;
}



