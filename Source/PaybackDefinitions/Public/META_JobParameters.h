#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_JobParameters.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_JobParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> ParametersMap;
    
    FMETA_JobParameters();
};

