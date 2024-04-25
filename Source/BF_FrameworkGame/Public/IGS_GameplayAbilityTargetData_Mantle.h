#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "EIGS_MantleType.h"
#include "IGS_GameplayAbilityTargetData_Mantle.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_GameplayAbilityTargetData_Mantle : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize MantleLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_MantleType MantleType;
    
    FIGS_GameplayAbilityTargetData_Mantle();
};

