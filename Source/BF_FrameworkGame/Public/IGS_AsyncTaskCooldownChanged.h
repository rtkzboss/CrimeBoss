#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GameplayTagContainer.h"
#include "IGS_OnCooldownChangedDelegate.h"
#include "IGS_AsyncTaskCooldownChanged.generated.h"

class UAbilitySystemComponent;
class UIGS_AsyncTaskCooldownChanged;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_AsyncTaskCooldownChanged : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnCooldownChanged OnCooldownBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnCooldownChanged OnCooldownEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* ASC;
    
public:
    UIGS_AsyncTaskCooldownChanged();

    UFUNCTION(BlueprintCallable)
    static UIGS_AsyncTaskCooldownChanged* ListenForCooldownChange(UAbilitySystemComponent* inAbilitySystemComponent, FGameplayTagContainer inCooldownTags, bool inUseServerCooldown);
    
    UFUNCTION(BlueprintCallable)
    void EndTask();
    
};

