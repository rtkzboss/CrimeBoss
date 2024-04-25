#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Abilities/GameplayAbilityTargetActor.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "EIGS_MantleType.h"
#include "IGS_GameplayAbilityTargetActor_Mantle.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_GameplayAbilityTargetActor_Mantle : public AGameplayAbilityTargetActor {
    GENERATED_BODY()
public:
    AIGS_GameplayAbilityTargetActor_Mantle(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void GetMantleDataFromTargetingData(FGameplayAbilityTargetDataHandle inHandle, FVector& outMantleLocation, EIGS_MantleType& outMantleType);
    
};

