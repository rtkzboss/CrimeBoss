#include "IGS_ThrowableHelpers.h"
#include "Templates/SubclassOf.h"

UIGS_ThrowableHelpers::UIGS_ThrowableHelpers() {
}

AIGS_ThrowableProjectileBase* UIGS_ThrowableHelpers::ThrowThrowableObjectCustom(UObject* inWCO, UIGS_ThrowableInventoryObject* inThrowableObject, FTransform inSpawnTransform, AIGS_GameCharacterFramework* inThrower, FVector inVelocity, float inTimeHeldInHand) {
    return NULL;
}

AIGS_ThrowableProjectileBase* UIGS_ThrowableHelpers::ThrowThrowableObjectAt(UObject* inWCO, UIGS_ThrowableInventoryObject* inThrowableObject, FTransform inSpawnTransform, AIGS_GameCharacterFramework* inThrower, FVector inTargetPoint, float inTimeHeldInHand) {
    return NULL;
}

AIGS_ThrowableProjectileBase* UIGS_ThrowableHelpers::ThrowThrowableObject(UObject* inWCO, UIGS_ThrowableInventoryObject* inThrowableObject, FTransform inSpawnTransform, AIGS_GameCharacterFramework* inThrower, bool inThrowLow, float inTimeHeldInHand) {
    return NULL;
}

AIGS_ThrowableProjectileBase* UIGS_ThrowableHelpers::ThrowThrowableClassCustom(UObject* inWCO, TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableClass, FTransform inSpawnTransform, AIGS_GameCharacterFramework* inThrower, FVector inVelocity, float inTimeHeldInHand) {
    return NULL;
}

AIGS_ThrowableProjectileBase* UIGS_ThrowableHelpers::ThrowThrowableClassAt(UObject* inWCO, TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableClass, FTransform inSpawnTransform, AIGS_GameCharacterFramework* inThrower, FVector inTargetPoint, float inTimeHeldInHand) {
    return NULL;
}

AIGS_ThrowableProjectileBase* UIGS_ThrowableHelpers::ThrowThrowableClass(UObject* inWCO, TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableClass, FTransform inSpawnTransform, AIGS_GameCharacterFramework* inThrower, bool inThrowLow, float inTimeHeldInHand) {
    return NULL;
}

AIGS_ThrowableProjectileBase* UIGS_ThrowableHelpers::SpawnThrowableObject(UObject* inWCO, AActor* inOwner, UIGS_ThrowableInventoryObject* inThrowableObject, FTransform inSpawnTransform, float inTimeHeldInHand, bool inStartWithPhysics) {
    return NULL;
}

AIGS_ThrowableProjectileBase* UIGS_ThrowableHelpers::SpawnThrowableClass(UObject* inWCO, AActor* inOwner, TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableClass, FTransform inSpawnTransform, float inTimeHeldInHand, bool inStartWithPhysics) {
    return NULL;
}

void UIGS_ThrowableHelpers::SortAffectedActors(TArray<FIGS_AffectActorsDelayedEntry>& refActors) {
}

FTransform UIGS_ThrowableHelpers::GetPlayerThrowTransform(TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableClass, AIGS_GameCharacterFramework* inThrowingPlayer, bool inLow) {
    return FTransform{};
}


