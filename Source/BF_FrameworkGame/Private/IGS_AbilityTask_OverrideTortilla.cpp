#include "IGS_AbilityTask_OverrideTortilla.h"
#include "GameplayTask.h"

UIGS_AbilityTask_OverrideTortilla::UIGS_AbilityTask_OverrideTortilla() {
    (*this).OverrideFOV = true;
    (*this).OverridenFOVValue = 7.300000000e+01f;
    (*this).InterpSpeed = 1.000000000e+00f;
}

UIGS_AbilityTask_OverrideTortilla* UIGS_AbilityTask_OverrideTortilla::CreateOverrideTortillaProxy(UGameplayAbility* inOwningAbility, FName inTaskInstanceName, bool inTortillaEnabled, bool inOverrideFOV, float inOverridenFOVValue, float inInterpSpeed) {
    return NULL;
}


