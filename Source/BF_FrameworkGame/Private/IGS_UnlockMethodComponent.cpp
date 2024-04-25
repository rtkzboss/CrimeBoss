#include "IGS_UnlockMethodComponent.h"

UIGS_UnlockMethodComponent::UIGS_UnlockMethodComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShowUnusableMethods = false;
    this->CurrentInstigator = NULL;
}

void UIGS_UnlockMethodComponent::InitUnlockMethodComponent(FGameplayTagContainer inMethods) {
}

FGameplayTagContainer UIGS_UnlockMethodComponent::GetUnlockMethods() {
    return FGameplayTagContainer{};
}

int32 UIGS_UnlockMethodComponent::GetUnlockMethodCount() {
    return 0;
}



