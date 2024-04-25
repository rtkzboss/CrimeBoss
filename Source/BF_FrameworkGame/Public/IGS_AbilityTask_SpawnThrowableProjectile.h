#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "IGS_ThrowableSpawnedDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_AbilityTask_SpawnThrowableProjectile.generated.h"

class UGameplayAbility;
class UIGS_AbilityTask_SpawnThrowableProjectile;
class UIGS_ThrowableInventoryObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_AbilityTask_SpawnThrowableProjectile : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ThrowableSpawnedDelegate OnSpawned;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_ThrowableInventoryObject> ThrowableClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresAuthority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bThrowLow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeHeldInHand;
    
public:
    UIGS_AbilityTask_SpawnThrowableProjectile();

    UFUNCTION(BlueprintCallable)
    static UIGS_AbilityTask_SpawnThrowableProjectile* CreateSpawnThrowableProjectileProxy(UGameplayAbility* inOwningAbility, FName inTaskInstanceName, TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableClass, bool inRequiresAuthority, bool inThrowLow, float inTimeHeldInHand);
    
};

