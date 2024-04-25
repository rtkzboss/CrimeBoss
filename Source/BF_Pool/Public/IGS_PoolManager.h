#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_Pool.h"
#include "IGS_PoolKey.h"
#include "IGS_PoolManager.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class BF_POOL_API UIGS_PoolManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FIGS_PoolKey, FIGS_Pool> PoolMap;
    
public:
    UIGS_PoolManager();

protected:
    UFUNCTION(BlueprintCallable)
    void StopTimers();
    
    UFUNCTION(BlueprintCallable)
    void StartTimers();
    
public:
    UFUNCTION(BlueprintCallable)
    AActor* AcquireItemWithTagAndObject(UClass* inItemClass, FGameplayTagContainer inTagContainer, UObject* inCompareItem);
    
    UFUNCTION(BlueprintCallable)
    AActor* AcquireItemWithTag(UClass* inItemClass, FGameplayTagContainer inTagContainer);
    
    UFUNCTION(BlueprintCallable)
    AActor* AcquireItem(UClass* inItemClass);
    
    UFUNCTION(BlueprintCallable)
    AActor* AcquireAndActivateItemWithTagAndObject(UClass* inItemClass, FGameplayTagContainer inTagContainer, UObject* inCompareItem);
    
    UFUNCTION(BlueprintCallable)
    AActor* AcquireAndActivateItemWithTag(UClass* inItemClass, FGameplayTagContainer inTagContainer);
    
    UFUNCTION(BlueprintCallable)
    AActor* AcquireAndActivateItem(UClass* inItemClass);
    
};

