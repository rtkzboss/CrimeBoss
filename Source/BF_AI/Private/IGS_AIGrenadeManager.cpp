#include "IGS_AIGrenadeManager.h"
#include "ComponentInstanceDataCache.h"

UIGS_AIGrenadeManager::UIGS_AIGrenadeManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).TickInterval = 1.000000000e+00f;
    (*this).Cooldown = 5.000000000e+00f;
    (*this).CombatRange.Min = 7.000000000e+02f;
    (*this).CombatRange.Max = 2.000000000e+03f;
    (*this).MaxNavigationRayCastsInOneTick = 50;
    (*this).MaxConsideredThrowersInOneTick = 10;
    (*this).MaxSimTimeEach = 5.000000000e+00f;
    (*this).SimFrequency = 1.500000000e+01f;
    (*this).ProjectileRadius = 6.000000000e+00f;
    (*this).BestDotProductResult = 8.000000119e-01f;
    (*this).MaxAllowedFriendlyFires = 1;
    (*this).GrenadeExplosionRange = 5.000000000e+02f;
    (*this).ThrowerToTargetLerp = 8.000000119e-01f;
    (*this).AlternativeTargetDistanceFromTargets.Min = 2.000000000e+02f;
    (*this).AlternativeTargetDistanceFromTargets.Max = 4.000000000e+02f;
    (*this).ThrowStyleThresholds.Min = 5.500000000e+02f;
    (*this).ThrowStyleThresholds.Max = 7.500000000e+02f;
    (*this).UpArcValues.Min = 3.000000119e-01f;
    (*this).UpArcValues.Max = 5.500000119e-01f;
    (*this).DownArcValues.Min = 4.499999881e-01f;
    (*this).DownArcValues.Max = 6.999999881e-01f;
    (*this).LongestAnimTime = 2.000000000e+00f;
    (*this).UpThrowOffset = FTransform(FQuat(-1.449999958e-01,7.000000030e-02,-5.000000000e-01,-8.500000238e-01), FVector(3.026000023e+00,-1.156000042e+01,-9.325499725e+01), FVector(1.000000000e+00,1.000000000e+00,1.000000000e+00));
    (*this).DownThrowOffset = FTransform(FQuat(8.479999900e-01,-1.940000057e-01,4.900000095e-01,-4.563999921e-02), FVector(4.073999882e+00,3.578699875e+01,-3.513700104e+01), FVector(1.000000000e+00,1.000000000e+00,1.000000000e+00));
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).UpThrowTag, 0)) = TEXT("Anim.Combat.Throw.Frag.Up");
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).DownThrowTag, 0)) = TEXT("Anim.Combat.Throw.Frag.Down");
}

void UIGS_AIGrenadeManager::RemoveThrowableCooldown(const TSoftClassPtr<UIGS_ThrowableInventoryObject> inObject, const EIGS_UnitSpecialization inSpecialization, const AActor* inInstigator) {
}

UIGS_AIGrenadeManager* UIGS_AIGrenadeManager::Instance(const UObject* inWorldContextObject) {
    return NULL;
}


