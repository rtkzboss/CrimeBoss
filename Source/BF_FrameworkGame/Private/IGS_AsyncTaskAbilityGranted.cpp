#include "IGS_AsyncTaskAbilityGranted.h"

UIGS_AsyncTaskAbilityGranted::UIGS_AsyncTaskAbilityGranted() {
    this->ASC = NULL;
}

UIGS_AsyncTaskAbilityGranted* UIGS_AsyncTaskAbilityGranted::ListenForAbilityWithTagGranted(UAbilitySystemComponent* inAbilitySystemComponent, FGameplayTag inAbilityTagFilter) {
    return NULL;
}

UIGS_AsyncTaskAbilityGranted* UIGS_AsyncTaskAbilityGranted::ListenForAbilityOfClassGranted(UAbilitySystemComponent* inAbilitySystemComponent, TSoftClassPtr<UGameplayAbility> inAbilityClassFilter) {
    return NULL;
}

void UIGS_AsyncTaskAbilityGranted::EndTask() {
}


