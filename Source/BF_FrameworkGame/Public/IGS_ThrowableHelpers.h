#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IGS_AffectActorsDelayedEntry.h"
#include "Templates/SubclassOf.h"
#include "IGS_ThrowableHelpers.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class AIGS_ThrowableProjectileBase;
class UIGS_ThrowableInventoryObject;
class UObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_ThrowableHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_ThrowableHelpers();

    UFUNCTION(BlueprintCallable)
    static AIGS_ThrowableProjectileBase* ThrowThrowableObjectCustom(UObject* inWCO, UIGS_ThrowableInventoryObject* inThrowableObject, FTransform inSpawnTransform, AIGS_GameCharacterFramework* inThrower, FVector inVelocity, float inTimeHeldInHand);
    
    UFUNCTION(BlueprintCallable)
    static AIGS_ThrowableProjectileBase* ThrowThrowableObjectAt(UObject* inWCO, UIGS_ThrowableInventoryObject* inThrowableObject, FTransform inSpawnTransform, AIGS_GameCharacterFramework* inThrower, FVector inTargetPoint, float inTimeHeldInHand);
    
    UFUNCTION(BlueprintCallable)
    static AIGS_ThrowableProjectileBase* ThrowThrowableObject(UObject* inWCO, UIGS_ThrowableInventoryObject* inThrowableObject, FTransform inSpawnTransform, AIGS_GameCharacterFramework* inThrower, bool inThrowLow, float inTimeHeldInHand);
    
    UFUNCTION(BlueprintCallable)
    static AIGS_ThrowableProjectileBase* ThrowThrowableClassCustom(UObject* inWCO, TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableClass, FTransform inSpawnTransform, AIGS_GameCharacterFramework* inThrower, FVector inVelocity, float inTimeHeldInHand);
    
    UFUNCTION(BlueprintCallable)
    static AIGS_ThrowableProjectileBase* ThrowThrowableClassAt(UObject* inWCO, TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableClass, FTransform inSpawnTransform, AIGS_GameCharacterFramework* inThrower, FVector inTargetPoint, float inTimeHeldInHand);
    
    UFUNCTION(BlueprintCallable)
    static AIGS_ThrowableProjectileBase* ThrowThrowableClass(UObject* inWCO, TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableClass, FTransform inSpawnTransform, AIGS_GameCharacterFramework* inThrower, bool inThrowLow, float inTimeHeldInHand);
    
    UFUNCTION(BlueprintCallable)
    static AIGS_ThrowableProjectileBase* SpawnThrowableObject(UObject* inWCO, AActor* inOwner, UIGS_ThrowableInventoryObject* inThrowableObject, FTransform inSpawnTransform, float inTimeHeldInHand, bool inStartWithPhysics);
    
    UFUNCTION(BlueprintCallable)
    static AIGS_ThrowableProjectileBase* SpawnThrowableClass(UObject* inWCO, AActor* inOwner, TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableClass, FTransform inSpawnTransform, float inTimeHeldInHand, bool inStartWithPhysics);
    
    UFUNCTION(BlueprintCallable)
    static void SortAffectedActors(UPARAM(Ref) TArray<FIGS_AffectActorsDelayedEntry>& refActors);
    
    UFUNCTION(BlueprintCallable)
    static FTransform GetPlayerThrowTransform(TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableClass, AIGS_GameCharacterFramework* inThrowingPlayer, bool inLow);
    
};

