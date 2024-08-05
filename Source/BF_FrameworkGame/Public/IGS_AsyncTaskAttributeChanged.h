#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AttributeSet.h"
#include "IGS_OnAttributeChangedDelegate.h"
#include "IGS_AsyncTaskAttributeChanged.generated.h"

class UAbilitySystemComponent;
class UIGS_AsyncTaskAttributeChanged;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_AsyncTaskAttributeChanged : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnAttributeChanged OnAttributeChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* ASC;
    
public:
    UIGS_AsyncTaskAttributeChanged();

    UFUNCTION(BlueprintCallable)
    static UIGS_AsyncTaskAttributeChanged* ListenForAttributesChange(UAbilitySystemComponent* inAbilitySystemComponent, TArray<FGameplayAttribute> inAttributes);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_AsyncTaskAttributeChanged* ListenForAttributeChange(UAbilitySystemComponent* inAbilitySystemComponent, FGameplayAttribute inAttribute);
    
    UFUNCTION(BlueprintCallable)
    void EndTask();
    
};

