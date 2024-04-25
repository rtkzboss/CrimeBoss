#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_EconomyGraphVariableModeData.h"
#include "META_CategoryEconomyVariable.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_CategoryEconomyVariable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FMETA_EconomyGraphVariableModeData> GraphEconomyVariables;
    
    FMETA_CategoryEconomyVariable();
};

