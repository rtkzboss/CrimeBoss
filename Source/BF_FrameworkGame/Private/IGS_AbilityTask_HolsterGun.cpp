#include "IGS_AbilityTask_HolsterGun.h"
#include "GameplayTask.h"

UIGS_AbilityTask_HolsterGun::UIGS_AbilityTask_HolsterGun() {
    (*this).PlayRate = 1.000000000e+00f;
}

UIGS_AbilityTask_HolsterGun* UIGS_AbilityTask_HolsterGun::CreateHolsterGunProxy(UGameplayAbility* inOwningAbility, FName inTaskInstanceName, bool inIsHolster, float InRate) {
    return NULL;
}


