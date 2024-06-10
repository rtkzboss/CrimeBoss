#include "IGS_AbilityTask_SpawnThrowableProjectile.h"
#include "GameplayTask.h"
#include "Templates/SubclassOf.h"

UIGS_AbilityTask_SpawnThrowableProjectile::UIGS_AbilityTask_SpawnThrowableProjectile() {
}

UIGS_AbilityTask_SpawnThrowableProjectile* UIGS_AbilityTask_SpawnThrowableProjectile::CreateSpawnThrowableProjectileProxy(UGameplayAbility* inOwningAbility, FName inTaskInstanceName, TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableClass, bool inRequiresAuthority, bool inThrowLow, float inTimeHeldInHand) {
    return NULL;
}


