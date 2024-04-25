#include "IGS_AsyncTaskAttributeChanged.h"

UIGS_AsyncTaskAttributeChanged::UIGS_AsyncTaskAttributeChanged() {
    this->ASC = NULL;
}

UIGS_AsyncTaskAttributeChanged* UIGS_AsyncTaskAttributeChanged::ListenForAttributesChange(UAbilitySystemComponent* inAbilitySystemComponent, TArray<FGameplayAttribute> inAttributes) {
    return NULL;
}

UIGS_AsyncTaskAttributeChanged* UIGS_AsyncTaskAttributeChanged::ListenForAttributeChange(UAbilitySystemComponent* inAbilitySystemComponent, FGameplayAttribute inAttribute) {
    return NULL;
}

void UIGS_AsyncTaskAttributeChanged::EndTask() {
}


