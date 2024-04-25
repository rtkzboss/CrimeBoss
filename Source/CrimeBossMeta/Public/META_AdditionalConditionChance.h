#pragma once
#include "CoreMinimal.h"
#include "META_AdditionalConditionChance.generated.h"

class UMETA_BaseCondition;

USTRUCT(BlueprintType)
struct FMETA_AdditionalConditionChance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMETA_BaseCondition* Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Chance;
    
    CRIMEBOSSMETA_API FMETA_AdditionalConditionChance();
};

