#include "IGS_AbilityTask_OverrideTortilla.h"

UIGS_AbilityTask_OverrideTortilla::UIGS_AbilityTask_OverrideTortilla() {
    this->TortillaEnabled = false;
    this->OverrideFOV = true;
    this->OverridenFOVValue = 73.00f;
    this->InterpSpeed = 1.00f;
}

UIGS_AbilityTask_OverrideTortilla* UIGS_AbilityTask_OverrideTortilla::CreateOverrideTortillaProxy(UGameplayAbility* inOwningAbility, FName inTaskInstanceName, bool inTortillaEnabled, bool inOverrideFOV, float inOverridenFOVValue, float inInterpSpeed) {
    return NULL;
}


