#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_AIControllerHeavyMelee_Base.h"
#include "IGS_AIControllerHeavyMelee_Butcher.generated.h"

UCLASS(Blueprintable)
class BF_AI_API AIGS_AIControllerHeavyMelee_Butcher : public AIGS_AIControllerHeavyMelee_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SawBrokenAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSawBroken;
    
    AIGS_AIControllerHeavyMelee_Butcher(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void NotifySawBroke();
    
};

