#include "IGS_AIGrenadeManager.h"
#include "Templates/SubclassOf.h"

UIGS_AIGrenadeManager::UIGS_AIGrenadeManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TickInterval = 1.00f;
    this->Cooldown = 5.00f;
    this->MaxNavigationRayCastsInOneTick = 50;
    this->MaxConsideredThrowersInOneTick = 10;
    this->MaxSimTimeEach = 5.00f;
    this->SimFrequency = 15.00f;
    this->ProjectileRadius = 6.00f;
    this->BestDotProductResult = 0.80f;
    this->MaxAllowedFriendlyFires = 1;
    this->GrenadeExplosionRange = 500.00f;
    this->UseOnlyDirectThrow = false;
    this->ThrowerToTargetLerp = 0.80f;
    this->LongestAnimTime = 2.00f;
}

void UIGS_AIGrenadeManager::RemoveThrowableCooldown(const TSubclassOf<UIGS_ThrowableInventoryObject> inObject, const EIGS_UnitSpecialization inSpecialization, const AActor* inInstigator) {
}

UIGS_AIGrenadeManager* UIGS_AIGrenadeManager::Instance(const UObject* inWorldContextObject) {
    return NULL;
}


