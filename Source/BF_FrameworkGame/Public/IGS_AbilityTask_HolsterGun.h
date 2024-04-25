#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"
#include "IGS_AbilityTask_HolsterGun.generated.h"

class UGameplayAbility;
class UIGS_AbilityTask_HolsterGun;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_AbilityTask_HolsterGun : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMontageWaitSimpleDelegate OnCompleted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsHolster: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
public:
    UIGS_AbilityTask_HolsterGun();

    UFUNCTION(BlueprintCallable)
    static UIGS_AbilityTask_HolsterGun* CreateHolsterGunProxy(UGameplayAbility* inOwningAbility, FName inTaskInstanceName, bool inIsHolster, float InRate);
    
};

