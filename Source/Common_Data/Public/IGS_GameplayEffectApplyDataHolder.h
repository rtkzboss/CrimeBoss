#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_GameplayEffectApplyDataHolder.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_GameplayEffectApplyDataHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameplayEffect> Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RuntimeValueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RuntimeValue;
    
    FIGS_GameplayEffectApplyDataHolder();
};

