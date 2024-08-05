#pragma once
#include "CoreMinimal.h"
#include "EMETA_ItemQuality.h"
#include "META_HeisterEconomyData.h"
#include "META_HeisterDataByTier.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_HeisterDataByTier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_ItemQuality, FMETA_HeisterEconomyData> QualityData;
    
    FMETA_HeisterDataByTier();
};

