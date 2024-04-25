#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "IGS_OverrideTortillaDelegateDelegate.h"
#include "IGS_AbilityTask_OverrideTortilla.generated.h"

class UGameplayAbility;
class UIGS_AbilityTask_OverrideTortilla;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_AbilityTask_OverrideTortilla : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OverrideTortillaDelegate OnCompleted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TortillaEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverrideFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverridenFOVValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpSpeed;
    
public:
    UIGS_AbilityTask_OverrideTortilla();

    UFUNCTION(BlueprintCallable)
    static UIGS_AbilityTask_OverrideTortilla* CreateOverrideTortillaProxy(UGameplayAbility* inOwningAbility, FName inTaskInstanceName, bool inTortillaEnabled, bool inOverrideFOV, float inOverridenFOVValue, float inInterpSpeed);
    
};

