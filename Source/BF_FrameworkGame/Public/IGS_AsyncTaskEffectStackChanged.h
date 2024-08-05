#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GameplayTagContainer.h"
#include "IGS_OnGameplayEffectStackChangedDelegate.h"
#include "IGS_AsyncTaskEffectStackChanged.generated.h"

class UAbilitySystemComponent;
class UIGS_AsyncTaskEffectStackChanged;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_AsyncTaskEffectStackChanged : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnGameplayEffectStackChanged OnGameplayEffectStackChange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* ASC;
    
public:
    UIGS_AsyncTaskEffectStackChanged();

private:
    UFUNCTION(BlueprintCallable)
    static UIGS_AsyncTaskEffectStackChanged* ListenForGameplayEffectStackChange(UAbilitySystemComponent* inAbilitySystemComponent, FGameplayTag inEffectGameplayTag);
    
    UFUNCTION(BlueprintCallable)
    void EndTask();
    
};

