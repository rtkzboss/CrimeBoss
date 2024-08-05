#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "IGS_PoolableInterface.generated.h"

class UObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UIGS_PoolableInterface : public UInterface {
    GENERATED_BODY()
};

class IIGS_PoolableInterface : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPoolTagContainer(FGameplayTagContainer inTagContainer);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Release();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSpawnedEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReleasedEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnFindEvent(UObject* inCompareItem);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivatedEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAcquiredEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTagContainer GetPoolTagContainer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Activate();
    
};

