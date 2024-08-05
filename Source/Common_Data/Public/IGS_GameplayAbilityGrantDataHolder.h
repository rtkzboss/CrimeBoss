#pragma once
#include "CoreMinimal.h"
#include "IGS_GameplayAbilityGrantDataHolder.generated.h"

class UGameplayAbility;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_GameplayAbilityGrantDataHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameplayAbility> Ability;
    
    FIGS_GameplayAbilityGrantDataHolder();
};

