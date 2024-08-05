#pragma once
#include "CoreMinimal.h"
#include "META_FloatInterval.h"
#include "META_UniqueCharacterCostsData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_UniqueCharacterCostsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_FloatInterval HireCostMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_FloatInterval UpkeepMultiplier;
    
    FMETA_UniqueCharacterCostsData();
};

