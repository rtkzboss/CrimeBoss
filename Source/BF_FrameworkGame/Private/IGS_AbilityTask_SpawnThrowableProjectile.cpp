#include "IGS_AbilityTask_SpawnThrowableProjectile.h"
#include "Templates/SubclassOf.h"

UIGS_AbilityTask_SpawnThrowableProjectile::UIGS_AbilityTask_SpawnThrowableProjectile() {
    this->ThrowableClass = NULL;
    this->bRequiresAuthority = false;
    this->bThrowLow = false;
    this->TimeHeldInHand = 0.00f;
}

UIGS_AbilityTask_SpawnThrowableProjectile* UIGS_AbilityTask_SpawnThrowableProjectile::CreateSpawnThrowableProjectileProxy(UGameplayAbility* inOwningAbility, FName inTaskInstanceName, TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableClass, bool inRequiresAuthority, bool inThrowLow, float inTimeHeldInHand) {
    return NULL;
}


