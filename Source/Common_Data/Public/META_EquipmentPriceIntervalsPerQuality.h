#pragma once
#include "CoreMinimal.h"
#include "META_Interval.h"
#include "META_EquipmentPriceIntervalsPerQuality.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_EquipmentPriceIntervalsPerQuality {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SellModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval BuyCostValueRange;
    
    FMETA_EquipmentPriceIntervalsPerQuality();
};

