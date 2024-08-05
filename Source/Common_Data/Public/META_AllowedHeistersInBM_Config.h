#pragma once
#include "CoreMinimal.h"
#include "EMETA_ItemQuality.h"
#include "META_AllowedHeistersInBM_Config.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_AllowedHeistersInBM_Config {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_ItemQuality, int32> HeisterQualityPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    FMETA_AllowedHeistersInBM_Config();
};

